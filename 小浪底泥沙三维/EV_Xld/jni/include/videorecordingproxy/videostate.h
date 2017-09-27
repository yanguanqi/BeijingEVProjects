#ifndef VIDEOPLAYER_VIDEOSTATE_H
#define VIDEOPLAYER_VIDEOSTATE_H

#define BOOST_NO_RVALUE_REFERENCES
#include <boost/thread.hpp>

#include "graphic/texture.h"
#include "core/datastream.h"

#include "videorecordingproxy/videodefs.h"

using namespace EarthView::World::Core;
using namespace EarthView::World::Graphic;

#define VIDEO_PICTURE_QUEUE_SIZE 50

extern "C"
{
	struct SwsContext;
	struct AVPacketList;
	struct AVPacket;
	struct AVFormatContext;
	struct AVStream;
	struct AVFrame;
}

namespace Video
{

	struct VideoState;
	class MovieAudioDecoder;

	//外部时钟,用于数据同步
	struct ExternalClock
	{
		ExternalClock();

		uint64_t mTimeBase;
		uint64_t mPausedAt;
		bool mPaused;

		boost::mutex mMutex;

		void setPaused(bool paused);
		uint64_t get();
		void set(uint64_t time);
	};

	//数据包队列,获取的数据包存到该队列
	struct PacketQueue {
		PacketQueue()
			: first_pkt(NULL), last_pkt(NULL), flushing(false), nb_packets(0), size(0)
		{ }
		~PacketQueue()
		{ clear(); }

		AVPacketList *first_pkt, *last_pkt;
		volatile bool flushing;
		int nb_packets;
		int size;

		boost::mutex mutex;
		boost::condition_variable cond;

		void put(AVPacket *pkt);
		int get(AVPacket *pkt, VideoState *is);

		void flush();
		void clear();
	};

	//视频中的图像数据，存放解压得到的一帧图像
	struct VideoPicture {
		VideoPicture() : pts(0.0)
		{ }

		std::vector<uint8_t> data;
		double pts;
	};


	struct VideoState {
		VideoState();
		~VideoState();

		//void setAudioFactory(MovieAudioFactory* factory);

		void init(const std::string& resourceName);
		void deinit();

		void setPaused(bool isPaused);
		void seekTo(double time);

		double getDuration();

		int stream_open(int stream_index, AVFormatContext *pFormatCtx);

		bool update();

		static void video_thread_loop(VideoState *is);
		static void decode_thread_loop(VideoState *is);

		void video_display(VideoPicture* vp);
		void video_refresh();

		int queue_picture(AVFrame *pFrame, double pts);
		double synchronize_video(AVFrame *src_frame, double pts);

		double get_audio_clock();
		double get_video_clock();
		double get_external_clock();
		double get_master_clock();

		static int OgreResource_Read(void *user_data, uint8_t *buf, int buf_size);
		static int OgreResource_Write(void *user_data, uint8_t *buf, int buf_size);
		static int64_t OgreResource_Seek(void *user_data, int64_t offset, int whence);

		CTexturePtr mTexture;

		//MovieAudioFactory* mAudioFactory;
		boost::shared_ptr<MovieAudioDecoder> mAudioDecoder;//音频解码类

		ExternalClock mExternalClock;



		DataStreamPtr stream;
		AVFormatContext* format_ctx;

		int av_sync_type;

		AVStream**  audio_st;
		PacketQueue audioq;

		uint8_t* mFlushPktData;

		AVStream**  video_st;
		double      frame_last_pts;
		double      video_clock; ///<pts of last decoded frame / predicted pts of next decoded frame
		PacketQueue videoq;
		SwsContext*  sws_context;
		VideoPicture pictq[VIDEO_PICTURE_QUEUE_SIZE];
		AVFrame*     rgbaFrame; // used as buffer for the frame converted from its native format to RGBA
		int          pictq_size, pictq_rindex, pictq_windex;
		boost::mutex pictq_mutex;
		boost::condition_variable pictq_cond;

		boost::thread parse_thread;
		boost::thread video_thread;

		volatile bool mSeekRequested;
		uint64_t mSeekPos;

		volatile bool mVideoEnded;
		volatile bool mPaused;
		volatile bool mQuit;
	};

}

#endif
