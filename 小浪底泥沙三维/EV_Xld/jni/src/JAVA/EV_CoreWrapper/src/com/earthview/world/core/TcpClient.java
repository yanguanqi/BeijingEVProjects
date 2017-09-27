package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * TCP客户端对象
 */
public class TcpClient extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CTcpClient", new TcpClientClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCTcpClientProxy", new TcpClientClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TcpClient() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTcpClientProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.TcpClient".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void connect_ev_string_ev_int16(long pNativeObject, String strIp, short iPort);
	/**
	 * 异步连接TCP服务器
	 * @param strIp TCP服务器IP地址
	 * @param iPort TCP服务器端口
	 */
	public void connect(String strIp, short iPort)
	{
		String strIpParamValue = strIp;
		short iPortParamValue = iPort;
		connect_ev_string_ev_int16(this.nativeObject.pointer, strIpParamValue, iPortParamValue);
	}
	native private int send_ev_byte_ev_int32(long pNativeObject, long byBuf, int iLen);
	/**
	 * 向建立连接的SOCKET发送数据
	 * @param byBuf 存储发送的数据
	 * @param iLen 数据的字节长长度
	 * @return 发送成功为发送的数据大小，失败为-1
	 */
	public int send(UBytePointer byBuf, int iLen)
	{
		long byBufParamValue = (byBuf == null ? 0L : byBuf.nativeObject.pointer);
		int iLenParamValue = iLen;
		int returnValue = send_ev_byte_ev_int32(this.nativeObject.pointer, byBufParamValue, iLenParamValue);
		return returnValue;
	}
	native private void setBufByteSize_ev_int32(long pNativeObject, int iBufSize);
	/**
	 * 设置数据缓存大小
	 * @param iBufSize 缓存大小
	 */
	public void setBufByteSize(int iBufSize)
	{
		int iBufSizeParamValue = iBufSize;
		setBufByteSize_ev_int32(this.nativeObject.pointer, iBufSizeParamValue);
	}
	native private void setConnTimeOut_ev_int32(long pNativeObject, int iTimeOut);
	/**
	 * 设置客户端进行连接时，具体的超时时间
	 * @param iTimeOut 超时的时间
	 * @param iLen 数据的字节长长度
	 */
	public void setConnTimeOut(int iTimeOut)
	{
		int iTimeOutParamValue = iTimeOut;
		setConnTimeOut_ev_int32(this.nativeObject.pointer, iTimeOutParamValue);
	}
	native private boolean close_void(long pNativeObject);
	/**
	 * 主动关闭已经建立连接的SOCKET
	 * @return 关闭成功则返回true，不成功则返回false
	 */
	public boolean close()
	{
		boolean returnValue = close_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConnected_void(long pNativeObject);
	/**
	 * 判断是否存在连接
	 * @return 是则返回true，否则返回false
	 */
	public boolean isConnected()
	{
		boolean returnValue = isConnected_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void onError_ev_int32_callback(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError(eErrorNoParamValue);
	}

	native private void onError_ev_int32(long pNativeObject, int eErrorNo);
	/**
	 * 当客户端有异常时，通知给用户，让用户能够自定义处理
	 * @param eErrorNo 错误代码宏值
	 */
	public void onError(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError_ev_int32(this.nativeObject.pointer, eErrorNoParamValue);
	}
	native private void onError_ev_int32_NoVirtual(long pNativeObject, int eErrorNo);
	protected void onError_NoVirtual(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError_ev_int32_NoVirtual(this.nativeObject.pointer, eErrorNoParamValue);
	}

	protected  boolean onReceive_ev_byte_ev_int32_callback(long byBuf, int iLen)
	{
		UBytePointer byBufParamValue = (byBuf == 0L ? null : new UBytePointer(new InstancePointer(byBuf)));
		int iLenParamValue = iLen;
		boolean returnValue = onReceive(byBufParamValue, iLenParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onReceive_ev_byte_ev_int32(long pNativeObject, long byBuf, int iLen);
	/**
	 * 当客户端接收到数据时，通过此函数主动的通知给用户，让用户进行处理
	 * @param byBuf 用于向用户传输接收到的数据
	 * @param iLen 用于向用户传输接收到的数据的长度
	 * @return 成功返回true，失败false
	 */
	public boolean onReceive(UBytePointer byBuf, int iLen)
	{
		long byBufParamValue = (byBuf == null ? 0L : byBuf.nativeObject.pointer);
		int iLenParamValue = iLen;
		boolean returnValue = onReceive_ev_byte_ev_int32(this.nativeObject.pointer, byBufParamValue, iLenParamValue);
		return returnValue;
	}
	native private boolean onReceive_ev_byte_ev_int32_NoVirtual(long pNativeObject, long byBuf, int iLen);
	protected boolean onReceive_NoVirtual(UBytePointer byBuf, int iLen)
	{
		long byBufParamValue = (byBuf == null ? 0L : byBuf.nativeObject.pointer);
		int iLenParamValue = iLen;
		boolean returnValue = onReceive_ev_byte_ev_int32_NoVirtual(this.nativeObject.pointer, byBufParamValue, iLenParamValue);
		return returnValue;
	}

	public TcpClient(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TcpClient(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		return super.onEvent_NoVirtual(e);
	}
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onError_ev_int32(long pNativeObject, String method);
	native protected void register_onReceive_ev_byte_ev_int32(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onError_ev_int32(this.nativeObject.pointer, "onError_ev_int32_callback");
			this.register_onReceive_ev_byte_ev_int32(this.nativeObject.pointer, "onReceive_ev_byte_ev_int32_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static TcpClient fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TcpClient obj = null;
 		if(baseObj instanceof TcpClient)
		{
			obj = (TcpClient)baseObj;
		} else {
			obj = new TcpClient(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTcpClient");
			obj.increaseCast();
		}

		return obj;
	}
}
