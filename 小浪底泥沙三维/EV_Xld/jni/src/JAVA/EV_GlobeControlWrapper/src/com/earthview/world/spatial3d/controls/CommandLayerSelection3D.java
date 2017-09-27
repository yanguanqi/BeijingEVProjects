package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图层选择组合框命令
 */
public class CommandLayerSelection3D extends com.earthview.world.spatial.systemui.Ientrybox {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D", new CommandLayerSelection3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCommandLayerSelection3DProxy", new CommandLayerSelection3DClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CommandLayerSelection3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCommandLayerSelection3DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommandLayerSelection3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getToolBarType_void(long pNativeObject);
	/**
	 * 获得此按钮是属于哪个工具条
	 * @param  
	 * @return 返回所属工具条的枚举
	 */
	public long getToolBarType()
	{
		long returnValue = getToolBarType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getToolBarType_void_NoVirtual(long pNativeObject);
	protected long getToolBarType_NoVirtual()
	{
		long returnValue = getToolBarType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 按钮的类型
	 * @param  
	 * @return 按钮类型的枚举
	 */
	public long getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getType_void_NoVirtual(long pNativeObject);
	protected long getType_NoVirtual()
	{
		long returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获得按钮的名称
	 * @param  
	 * @return 按钮名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getCategory_void(long pNativeObject);
	/**
	 * 获得按钮的目录名称
	 * @param  
	 * @return 按钮的目录名称
	 */
	public String getCategory()
	{
		String returnValue = getCategory_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCategory_void_NoVirtual(long pNativeObject);
	protected String getCategory_NoVirtual()
	{
		String returnValue = getCategory_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getToolTip_void(long pNativeObject);
	/**
	 * 获得按钮的提示信息
	 * @param  
	 * @return 按钮的提示信息字符串
	 */
	public String getToolTip()
	{
		String returnValue = getToolTip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getToolTip_void_NoVirtual(long pNativeObject);
	protected String getToolTip_NoVirtual()
	{
		String returnValue = getToolTip_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getIcon_void(long pNativeObject);
	/**
	 * 获得按钮的图标对象
	 * @param  
	 * @return 图标的位图对象
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		long returnValue = getIcon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getIcon_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getIcon_NoVirtual()
	{
		long returnValue = getIcon_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	native private boolean isCheckable_void(long pNativeObject);
	/**
	 * 按钮是否是可以按
	 * @param  
	 * @return true为按钮可以按
	 */
	public boolean isCheckable()
	{
		boolean returnValue = isCheckable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCheckable_void_NoVirtual(long pNativeObject);
	protected boolean isCheckable_NoVirtual()
	{
		boolean returnValue = isCheckable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getChecked_void(long pNativeObject);
	/**
	 * 获得按钮是否被按下
	 * @param  
	 * @return 按下为true
	 */
	public boolean getChecked()
	{
		boolean returnValue = getChecked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getChecked_void_NoVirtual(long pNativeObject);
	protected boolean getChecked_NoVirtual()
	{
		boolean returnValue = getChecked_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setChecked_ev_bool(long pNativeObject, boolean checked);
	/**
	 * 设置按钮按下的状态
	 * @param checked true为按钮已经被按
	 */
	public void setChecked(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool(this.nativeObject.pointer, checkedParamValue);
	}
	native private void setChecked_ev_bool_NoVirtual(long pNativeObject, boolean checked);
	protected void setChecked_NoVirtual(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool_NoVirtual(this.nativeObject.pointer, checkedParamValue);
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 获得按钮是否可用
	 * @param  
	 * @return 按钮可用返回true
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getEnabled_NoVirtual()
	{
		boolean returnValue = getEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置按钮可用状态
	 * @param enabled 为true时，按钮可用
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	native private void create_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 初始化与按钮相关的CGlobelControl
	 * @param ctrl CGlobelControl指针
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		create_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
	}
	native private void create_ISpatialControl_NoVirtual(long pNativeObject, long ctrl);
	protected void create_NoVirtual(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		create_ISpatialControl_NoVirtual(this.nativeObject.pointer, ctrlParamValue);
	}

	native private boolean update_CEvent(long pNativeObject, long e);
	/**
	 * 有事件通知过来时，更新按钮的状态
	 * @param e 自定义事件的指针
	 * @return 是否更新按钮状态
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = update_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean update_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean update_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = update_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	native private long getEntryCount_void(long pNativeObject);
	/**
	 * 获得下拉框中控件的数量
	 * @param  
	 * @return 返回下拉框控件的数量
	 */
	public long getEntryCount()
	{
		long returnValue = getEntryCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEntryCount_void_NoVirtual(long pNativeObject);
	protected long getEntryCount_NoVirtual()
	{
		long returnValue = getEntryCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getEntry_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得下拉框中所选索引号的控件名称
	 * @param index 下拉框中所选的索引号
	 * @return 返回索引号对应的控件名称
	 */
	public String getEntry(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getEntry_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getEntry_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void currentIndexChanged_ev_uint32(long pNativeObject, long index);
	/**
	 * 下拉框选择内容变化
	 * @param index 下拉框中选择的索引号
	 */
	public void currentIndexChanged(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void currentIndexChanged_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void currentIndexChanged_NoVirtual(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void setEditDataSetName_EVString_callback(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		setEditDataSetName(datasetnameParamValue);
	}

	native private void setEditDataSetName_EVString(long pNativeObject, String datasetname);
	/**
	 * 设置正在编辑的数据集名称
	 * @param datasetname 数据集名称
	 */
	public void setEditDataSetName(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		setEditDataSetName_EVString(this.nativeObject.pointer, datasetnameParamValue);
	}
	native private void setEditDataSetName_EVString_NoVirtual(long pNativeObject, String datasetname);
	protected void setEditDataSetName_NoVirtual(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		setEditDataSetName_EVString_NoVirtual(this.nativeObject.pointer, datasetnameParamValue);
	}

	native private void findLayer_CFeatureGroupLayer(long pNativeObject, long gl);
	/**
	 * 获取特征图层组下的所有可以编辑图层
	 * @param gl 特征图层组指针
	 */
	public void findLayer(com.earthview.world.spatial3d.atlas.FeatureGroupLayer gl)
	{
		long glParamValue = (gl == null ? 0L : gl.nativeObject.pointer);
		findLayer_CFeatureGroupLayer(this.nativeObject.pointer, glParamValue);
	}
	native private String get_mDataSetName_void(long pNativeObject);
	public String get_mDataSetName()
	{
		String jniValue = get_mDataSetName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDataSetName_EVString (long pNativeObject, String value);
	public void set_mDataSetName(String mDataSetName)
	{
		String mDataSetNameParamValue = mDataSetName;
		
		set_mDataSetName_EVString(this.nativeObject.pointer, mDataSetNameParamValue);
	}
	
	native private boolean get_mbEnabled_void(long pNativeObject);
	public boolean get_mbEnabled()
	{
		boolean jniValue = get_mbEnabled_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbEnabled_ev_bool (long pNativeObject, boolean value);
	public void set_mbEnabled(boolean mbEnabled)
	{
		boolean mbEnabledParamValue = mbEnabled;
		
		set_mbEnabled_ev_bool(this.nativeObject.pointer, mbEnabledParamValue);
	}
	
	native private long get_mpGlobeControl_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeControl get_mpGlobeControl()
	{
		long jniValue = get_mpGlobeControl_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	
	native private void set_mpGlobeControl_CGlobeControl (long pNativeObject, long value);
	public void set_mpGlobeControl(com.earthview.world.spatial3d.controls.GlobeControl mpGlobeControl)
	{
		long mpGlobeControlParamValue = (mpGlobeControl == null ? 0L : mpGlobeControl.nativeObject.pointer);
		
		set_mpGlobeControl_CGlobeControl(this.nativeObject.pointer, mpGlobeControlParamValue);
	}
	
	native private int get_mnCurrentIndex_void(long pNativeObject);
	public int get_mnCurrentIndex()
	{
		int jniValue = get_mnCurrentIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mnCurrentIndex_ev_int32 (long pNativeObject, int value);
	public void set_mnCurrentIndex(int mnCurrentIndex)
	{
		int mnCurrentIndexParamValue = mnCurrentIndex;
		
		set_mnCurrentIndex_ev_int32(this.nativeObject.pointer, mnCurrentIndexParamValue);
	}
	
	native private boolean get_m_bEnabled_void(long pNativeObject);
	public boolean get_m_bEnabled()
	{
		boolean jniValue = get_m_bEnabled_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bEnabled_ev_bool (long pNativeObject, boolean value);
	public void set_m_bEnabled(boolean m_bEnabled)
	{
		boolean m_bEnabledParamValue = m_bEnabled;
		
		set_m_bEnabled_ev_bool(this.nativeObject.pointer, m_bEnabledParamValue);
	}
	
	public CommandLayerSelection3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommandLayerSelection3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取组合框的宽度
	 * @param  
	 * @return 宽度值
	 */
	public long getWidth()
	{
		return super.getWidth_NoVirtual();
	}
	/**
	 * 获取当前的索引
	 * @param  
	 * @return 索引
	 */
	public int getCurrentIndex()
	{
		return super.getCurrentIndex_NoVirtual();
	}
	/**
	 * 当命令项按钮被点击的时候,调用该方法
	 * @param  
	 */
	public void onClicked()
	{
		super.onClicked_NoVirtual();
	}
	
	native protected void register_setEditDataSetName_EVString(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getEntryCount_void(long pNativeObject, String method);
	native protected void register_getEntry_ev_uint32(long pNativeObject, String method);
	native protected void register_getCurrentIndex_void(long pNativeObject, String method);
	native protected void register_currentIndexChanged_ev_uint32(long pNativeObject, String method);
	native protected void register_getToolBarType_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_onClicked_void(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_create_ISpatialControl(long pNativeObject, String method);
	native protected void register_update_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setEditDataSetName_EVString(this.nativeObject.pointer, "setEditDataSetName_EVString_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getEntryCount_void(this.nativeObject.pointer, "getEntryCount_void_callback");
			this.register_getEntry_ev_uint32(this.nativeObject.pointer, "getEntry_ev_uint32_callback");
			this.register_getCurrentIndex_void(this.nativeObject.pointer, "getCurrentIndex_void_callback");
			this.register_currentIndexChanged_ev_uint32(this.nativeObject.pointer, "currentIndexChanged_ev_uint32_callback");
			this.register_getToolBarType_void(this.nativeObject.pointer, "getToolBarType_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_onClicked_void(this.nativeObject.pointer, "onClicked_void_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_create_ISpatialControl(this.nativeObject.pointer, "create_ISpatialControl_callback");
			this.register_update_CEvent(this.nativeObject.pointer, "update_CEvent_callback");
		}
	}
	
	public static CommandLayerSelection3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommandLayerSelection3D obj = null;
 		if(baseObj instanceof CommandLayerSelection3D)
		{
			obj = (CommandLayerSelection3D)baseObj;
		} else {
			obj = new CommandLayerSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommandLayerSelection3D");
			obj.increaseCast();
		}

		return obj;
	}
}
