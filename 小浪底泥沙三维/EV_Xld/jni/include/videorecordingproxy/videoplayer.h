#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <string>
#include <memory>
#include "videorecordingproxy/videorecordingproxy_config.h"
#include "graphic/texture.h"
	
using namespace EarthView::World::Graphic;
namespace Video
{
    struct VideoState;
    class EV_VIDEORECORDING_DLL VideoPlayer: public EarthView::World::Core::CBaseObject
    {
ev_private:
		VideoPlayer(_in EarthView::World::Core::CNameValuePairList *pList);
    public:
        VideoPlayer();
        ~VideoPlayer();

		///当一个多媒体文件正在播放且其中包含音频流时返回ture
        ev_bool hasAudioStream();

		///播放给定的文件,如果正在播放，先关闭，然后从头播放
	    ///@note 该函数不用来控制播放和暂停,播放和暂停用play和pause函数
        void playVideo (const EVString& resourceName,ev_bool bPlayLoop);

		void playVideo(const EVString& resourceName,EarthView::World::Graphic::CTexturePtr& texturePtr,ev_bool bPlayLoop);

        ///以秒为单位返回当前播放到的时间点
        ev_real64 getCurrentTime();

        /// 以秒为单位返回video的总时长
        ev_real64 getDuration();

        /// 跳转到指定的时间点
        void seek(ev_real64 time);
		///调用pause函数后,调用该函数继续播放
        void play();
		///暂停
        void pause();
        ev_bool isPaused();

		/// 每渲染一帧都要调用该函数
		/// @note 当播放到片尾的时候返回false,否则返回ture。
        ev_bool update();

         /// 关闭正在播放的文件
        void close();

		///返回当前播放的视频所对应的纹理名称,如果没有视频正在播放，则返回""
        EVString getTextureName();
		///返回视频帧的宽度
        ev_uint32 getVideoWidth();
        /// 返回视频帧的高度
        ev_uint32 getVideoHeight();
	private:
		///标记是否要循环播放,当update函数返回false的时侯
		///如果该标记是true,调用seek(0)函数跳到开头重新播放
		ev_bool mPlayLoop;

    private:
        VideoState* mState;

    };

}

#endif
