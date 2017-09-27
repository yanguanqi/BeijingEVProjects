package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用户工具栏回退的命令对象
 */
public class CmdDataEffect extends com.earthview.world.spatial3d.CmdDataBase {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCmdDataEffect", new CmdDataEffectClassFactory());
	}

	/**
	 * 构造函数
	 * @param layer 特效图层指针
	 * @param id 具体操作的特效的数据库记录ID
	 * @param operType 操作的类型枚举
	 */
	public CmdDataEffect(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id, com.earthview.world.spatial3d.CommandOperType operType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		BasePointer operTypePtr = new BasePointer(operType);
		list.add("operType", operTypePtr.get());
		Create("CCmdDataEffect", list);
	}

	native private void setRedoPos_CVector3(long pNativeObject, long pos);
	/**
	 * 设置前进之前的位置
	 * @param pos 位置EarthView::World::Spatial::Math::CVector3
	 */
	public void setRedoPos(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setRedoPos_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private long getRedoPos_void(long pNativeObject);
	/**
	 * 获得前进之前的位置
	 * @return 前进之前的位置EarthView::World::Spatial::Math::CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getRedoPos()
	{
		long returnValue = getRedoPos_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setRedoScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置前进之前的缩放
	 * @param scale 缩放EarthView::World::Spatial::Math::CVector3
	 */
	public void setRedoScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setRedoScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private long getRedoScale_void(long pNativeObject);
	/**
	 * 获得前进之前的缩放
	 * @return 前进之前的缩放EarthView::World::Spatial::Math::CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getRedoScale()
	{
		long returnValue = getRedoScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setRedoQua_CQuaternion(long pNativeObject, long qua);
	/**
	 * 设置前进之前的旋转四元数
	 * @param qua 旋转EarthView::World::Spatial::Math::CQuaternion
	 */
	public void setRedoQua(com.earthview.world.spatial.math.Quaternion qua)
	{
		long quaParamValue = qua.nativeObject.pointer;
		setRedoQua_CQuaternion(this.nativeObject.pointer, quaParamValue);
	}
	native private long getRedoQua_void(long pNativeObject);
	/**
	 * 获得前进之前的旋转的四元数
	 * @return 前进之前的旋转EarthView::World::Spatial::Math::CQuaternion
	 */
	public com.earthview.world.spatial.math.Quaternion getRedoQua()
	{
		long returnValue = getRedoQua_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setUndoPos_CVector3(long pNativeObject, long pos);
	/**
	 * 设置后退之前的位置
	 * @param pos 后退EarthView::World::Spatial::Math::CVector3
	 */
	public void setUndoPos(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setUndoPos_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private long getUndoPos_void(long pNativeObject);
	/**
	 * 获得后退之前的位置
	 * @return 后退之前的位置EarthView::World::Spatial::Math::CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getUndoPos()
	{
		long returnValue = getUndoPos_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setUndoScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置后退之前的缩放
	 * @param scale 后退缩放EarthView::World::Spatial::Math::CVector3
	 */
	public void setUndoScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setUndoScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private long getUndoScale_void(long pNativeObject);
	/**
	 * 获得后退之前的缩放
	 * @return 后退之前的缩放EarthView::World::Spatial::Math::CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getUndoScale()
	{
		long returnValue = getUndoScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setUndoQua_CQuaternion(long pNativeObject, long qua);
	/**
	 * 设置后退之前的旋转四元数
	 * @param qua 旋转四元数
	 */
	public void setUndoQua(com.earthview.world.spatial.math.Quaternion qua)
	{
		long quaParamValue = qua.nativeObject.pointer;
		setUndoQua_CQuaternion(this.nativeObject.pointer, quaParamValue);
	}
	native private long getUndoQua_void(long pNativeObject);
	/**
	 * 获得后退之前的旋转的四元数
	 * @return 后退之前的旋转四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getUndoQua()
	{
		long returnValue = getUndoQua_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setEffectId_ev_uint32(long pNativeObject, long effectId);
	/**
	 * 设置操作的特效对象ID
	 * @param effectId 特效ID
	 */
	public void setEffectId(long effectId)
	{
		long effectIdParamValue = effectId;
		setEffectId_ev_uint32(this.nativeObject.pointer, effectIdParamValue);
	}
	native private long getEffectId_void(long pNativeObject);
	/**
	 * 获得操作的特效对象ID
	 * @return 操作特效对象的ID
	 */
	public long getEffectId()
	{
		long returnValue = getEffectId_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CmdDataEffect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdDataEffect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CmdDataEffect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdDataEffect obj = null;
 		if(baseObj instanceof CmdDataEffect)
		{
			obj = (CmdDataEffect)baseObj;
		} else {
			obj = new CmdDataEffect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdDataEffect");
			obj.increaseCast();
		}

		return obj;
	}
}
