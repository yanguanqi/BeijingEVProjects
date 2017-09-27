package com.video;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.graphic.*;
import com.earthview.world.core.*;

public class VideoPlayer extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("Video::VideoPlayer", new VideoPlayerClassFactory());
	}

	public VideoPlayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("VideoPlayer", null);
	}

	native private boolean hasAudioStream_void(long pNativeObject);
	///当一个多媒体文件正在播放且其中包含音频流时返回ture
	public boolean hasAudioStream()
	{
		boolean returnValue = hasAudioStream_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void playVideo_EVString_ev_bool(long pNativeObject, String resourceName, boolean bPlayLoop);
	///播放给定的文件,如果正在播放，先关闭，然后从头播放
	///@note 该函数不用来控制播放和暂停,播放和暂停用play和pause函数
	public void playVideo(String resourceName, boolean bPlayLoop)
	{
		String resourceNameParamValue = resourceName;
		boolean bPlayLoopParamValue = bPlayLoop;
		playVideo_EVString_ev_bool(this.nativeObject.pointer, resourceNameParamValue, bPlayLoopParamValue);
	}
	native private void playVideo_EVString_CTexturePtr_ev_bool(long pNativeObject, String resourceName, long texturePtr, boolean bPlayLoop);
	public void playVideo(String resourceName, com.earthview.world.graphic.TexturePtr texturePtr, boolean bPlayLoop)
	{
		String resourceNameParamValue = resourceName;
		long texturePtrParamValue = texturePtr.nativeObject.pointer;
		boolean bPlayLoopParamValue = bPlayLoop;
		playVideo_EVString_CTexturePtr_ev_bool(this.nativeObject.pointer, resourceNameParamValue, texturePtrParamValue, bPlayLoopParamValue);
	}
	native private double getCurrentTime_void(long pNativeObject);
	///以秒为单位返回当前播放到的时间点
	public double getCurrentTime()
	{
		double returnValue = getCurrentTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDuration_void(long pNativeObject);
	/// 以秒为单位返回video的总时长
	public double getDuration()
	{
		double returnValue = getDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void seek_ev_real64(long pNativeObject, double time);
	/// 跳转到指定的时间点
	public void seek(double time)
	{
		double timeParamValue = time;
		seek_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void play_void(long pNativeObject);
	///调用pause函数后,调用该函数继续播放
	public void play()
	{
		play_void(this.nativeObject.pointer);
	}
	native private void pause_void(long pNativeObject);
	///暂停
	public void pause()
	{
		pause_void(this.nativeObject.pointer);
	}
	native private boolean isPaused_void(long pNativeObject);
	public boolean isPaused()
	{
		boolean returnValue = isPaused_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean update_void(long pNativeObject);
	/// 每渲染一帧都要调用该函数
	/// @note 当播放到片尾的时候返回false,否则返回ture。
	public boolean update()
	{
		boolean returnValue = update_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void close_void(long pNativeObject);
	/// 关闭正在播放的文件
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private String getTextureName_void(long pNativeObject);
	///返回当前播放的视频所对应的纹理名称,如果没有视频正在播放，则返回""
	public String getTextureName()
	{
		String returnValue = getTextureName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVideoWidth_void(long pNativeObject);
	///返回视频帧的宽度
	public long getVideoWidth()
	{
		long returnValue = getVideoWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVideoHeight_void(long pNativeObject);
	/// 返回视频帧的高度
	public long getVideoHeight()
	{
		long returnValue = getVideoHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	public VideoPlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VideoPlayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VideoPlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VideoPlayer obj = null;
 		if(baseObj instanceof VideoPlayer)
		{
			obj = (VideoPlayer)baseObj;
		} else {
			obj = new VideoPlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "VideoPlayer");
			obj.increaseCast();
		}

		return obj;
	}
}
