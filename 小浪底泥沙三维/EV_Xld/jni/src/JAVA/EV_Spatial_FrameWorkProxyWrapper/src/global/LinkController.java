package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinkController extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CLinkController", new LinkControllerClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取单件实例
	 * @param  
	 * @return 链接控制器
	 */
	public static LinkController getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		LinkController __returnValue = new LinkController(CreatedWhenConstruct.CWC_NotToCreate, "CLinkController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (LinkController)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLinkController");
		}
		return __returnValue;
	}
	native private boolean isActive_void(long pNativeObject);
	/**
	 * 获取联动控制器是否可用
	 * @param  
	 * @return 如果可用则返回true,反之则否
	 */
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setActive_ev_bool(long pNativeObject, boolean active);
	/**
	 * 设置联动控制器是否可用
	 * @param active 如果为true,则设置联动控制器可用,反之则否
	 */
	public void setActive(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool(this.nativeObject.pointer, activeParamValue);
	}
	native private long getCount_void(long pNativeObject);
	/**
	 * 获取参与联动的控件数量
	 * @param  
	 * @return 控件数量
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addControl_ISpatialControl(long pNativeObject, long ref_ctrl);
	/**
	 * 添加控件,使之参与联动
	 * @param ctrl 待添加的控件
	 * @return 如果添加成功则返回true,反之则否
	 */
	public boolean addControl(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		boolean returnValue = addControl_ISpatialControl(this.nativeObject.pointer, ref_ctrlParamValue);
		return returnValue;
	}
	native private boolean removeControl_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的控件
	 * @param index 待移除的控件索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeControl(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeControl_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeControl_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 移除指定控件
	 * @param ctrl 待移除的控件
	 * @return 移除成功则返回true,反之则否
	 */
	public boolean removeControl(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		boolean returnValue = removeControl_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
		return returnValue;
	}
	native private boolean isExist_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 判断控件是否已经存在于联动控制器中
	 * @param ctrl 控件
	 * @return 如果存在则返回true,反之则否
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		boolean returnValue = isExist_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有的控件
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void load_void(long pNativeObject);
	/**
	 * 从工程管理里面恢复先前的配置
	 * @param  
	 */
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void save_void(long pNativeObject);
	/**
	 * 把当前的联动配置保存到工程管理中
	 * @param  
	 */
	public void save()
	{
		save_void(this.nativeObject.pointer);
	}
	native private void setRotation_ev_bool(long pNativeObject, boolean r);
	/**
	 * 开启二三维旋转同步
	 * @param  
	 */
	public void setRotation(boolean r)
	{
		boolean rParamValue = r;
		setRotation_ev_bool(this.nativeObject.pointer, rParamValue);
	}
	native private boolean isRotation_void(long pNativeObject);
	/**
	 * 是否开启了二三维旋转同步
	 * @param  
	 */
	public boolean isRotation()
	{
		boolean returnValue = isRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	public LinkController(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LinkController(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LinkController fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LinkController obj = null;
 		if(baseObj instanceof LinkController)
		{
			obj = (LinkController)baseObj;
		} else {
			obj = new LinkController(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLinkController");
			obj.increaseCast();
		}

		return obj;
	}
}
