package com.earthview.world.utilitytools;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///视频录制类
///对ffmpeg库的封装，实现视频录制
public class VideoRecording extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::UtilityTools::VideoRecording", new VideoRecordingClassFactory());
	}

	public VideoRecording() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("VideoRecording", null);
	}

	native private void startRecordAsync_EVString_Rect_ev_int32_ev_bool(long pNativeObject, String filePath, long rectRegion, int framerate, boolean bHighQuality);
	/**
	 * 异步实现录制
	 * @param filePath 视频文件保存路径
	 * @param rectRegion 视频录制区域
	 * @param framerate 视频录制帧率
	 * @param bHighQuality 是否录制高清视频
	 * @return 无
	 */
	public void startRecordAsync(String filePath, com.earthview.world.graphic.Rect rectRegion, int framerate, boolean bHighQuality)
	{
		String filePathParamValue = filePath;
		long rectRegionParamValue = rectRegion.nativeObject.pointer;
		int framerateParamValue = framerate;
		boolean bHighQualityParamValue = bHighQuality;
		startRecordAsync_EVString_Rect_ev_int32_ev_bool(this.nativeObject.pointer, filePathParamValue, rectRegionParamValue, framerateParamValue, bHighQualityParamValue);
	}
	native private void stopRecord_void(long pNativeObject);
	/**
	 * 屏幕录制停止
	 * @return 无
	 */
	public void stopRecord()
	{
		stopRecord_void(this.nativeObject.pointer);
	}
	public VideoRecording(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VideoRecording(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VideoRecording fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VideoRecording obj = null;
 		if(baseObj instanceof VideoRecording)
		{
			obj = (VideoRecording)baseObj;
		} else {
			obj = new VideoRecording(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "VideoRecording");
			obj.increaseCast();
		}

		return obj;
	}
}
