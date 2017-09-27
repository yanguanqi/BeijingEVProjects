
#ifndef _VIDEORECORDINGPROXY__
#define _VIDEORECORDINGPROXY__

#pragma once
#include "videorecordingproxy/videorecordingproxy_config.h"
#include "graphic/common.h"
#include "core/thread.h"
#include "core/ev_semaphore.h"
#include "core/name_value_pair.h"
#include <queue>

//#include "core/event.h"
#include <stdio.h>
struct AVFormatContext;
struct AVCodecContext;
struct AVFrame;
struct AVPacket;
struct AVCodec;
struct AVStream;
struct SwsContext;

namespace EarthView
{
	namespace World
	{
		namespace UtilityTools
		{
			class CDecodeThread;
			class CEncodeThread;
			//视频录制类
			//对ffmpeg库的封装，实现视频录制
			class EV_VIDEORECORDING_DLL VideoRecording : public EarthView::World::Core::CBaseObject
			{
ev_private:
				VideoRecording(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				VideoRecording();
				~VideoRecording();	
			public:
				///<summary>
				///异步实现录制
				/// </summary>
				///<param name="filePath">视频文件保存路径</param>
				/// <param name="rectRegion">视频录制区域</param>
				/// <param name="framerate">视频录制帧率</param>
				/// <param name="bHighQuality">是否录制高清视频</param>
				/// <returns>无</returns>
				ev_void startRecordAsync(const EVString& filePath,const EarthView::World::Graphic::Rect& rectRegion,
					ev_int32 framerate,ev_bool bHighQuality);
				/// <summary>
				/// 屏幕录制停止
				/// </summary>
				/// <returns>无</returns>
				ev_void stopRecord();
			private:
				ev_int32 m_width;		//录制宽度
				ev_int32 m_height;		//录制高度
				ev_int32 m_framenum;	//录制帧数
				ev_bool m_bStopRecord;  //是否停止录制
				ev_int32 m_framerate;   //帧率
				ev_bool m_highquality;     //视频质量,true表示高清，false表示标清
				friend class CDecodeThread;
				CDecodeThread *m_pDecodeThread;
				friend class CEncodeThread;
				CEncodeThread* m_pEncodeThread;
				//ev_int32 m_timerid;

				queue<AVFrame* >  m_FrameQueue;//存放解码后的帧数据
				const int QMAXSIZE;//队列的上限
				EarthView::World::Core::CSemaphore *q_free;
				EarthView::World::Core::CSemaphore *q_used;
				

				AVFormatContext	*m_pInFormatCtx;
				AVCodecContext	*m_pInCodecCtx;
				ev_int32 m_videoindex;//视频流的索引号

				SwsContext *pSwsCtx;
				AVFormatContext* m_pOutFormatCtx;
				AVCodecContext *m_pOutCodecCtx;
				AVStream* video_st;
				//AVPacket* m_OutPkt;

				ev_bool initInputFile(const EarthView::World::Graphic::Rect& rectRegion);
				ev_bool initOutputFile(const EVString& fileAVI);
				void releaseInputFile();

				ev_void decodeFun();//解码线程函数
				ev_void encodeFun();//编码线程函数
				AVFrame* deCode(AVPacket* packet);//解码
				ev_void enCode(AVFrame* src);//编码
				ev_void flushFrameQueue();
				ev_bool flushEncoder();
			};

			//解码线程
			class CDecodeThread : public EarthView::World::Core::CThread
			{

			public:
				CDecodeThread();
				~CDecodeThread();
				EarthView::World::UtilityTools::VideoRecording* m_pVideoRecording;
			protected:
				ev_int32 run();	
			};
			//编码线程
			class  CEncodeThread : public EarthView::World::Core::CThread
			{
			public:
				CEncodeThread();
				~CEncodeThread();
				EarthView::World::UtilityTools::VideoRecording* m_pVideoRecording;
			protected:
				ev_int32 run();

			};
		}
	}
}
#endif//_VIDEORECORDING__
