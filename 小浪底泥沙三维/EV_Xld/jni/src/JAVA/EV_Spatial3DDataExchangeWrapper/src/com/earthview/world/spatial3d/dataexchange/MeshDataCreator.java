package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 负责创建meshdata，每次调用时create和destory都必须成对出现
 */
public class MeshDataCreator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshDataCreator", new MeshDataCreatorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public MeshDataCreator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshDataCreator", null);
	}

	native private long createMeshData_CEntityMetaData(long pNativeObject, long modelMetaData);
	/**
	 * 创建meshdata
	 * @param modelMetaData 模型源数据
	 * @return 返回meshdata
	 */
	public com.earthview.world.spatial3d.dataexchange.MeshData createMeshData(com.earthview.world.spatial3d.dataexchange.EntityMetaData modelMetaData)
	{
		long modelMetaDataParamValue = modelMetaData.nativeObject.pointer;
		long returnValue = createMeshData_CEntityMetaData(this.nativeObject.pointer, modelMetaDataParamValue);
		com.earthview.world.spatial3d.dataexchange.MeshData __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshData");
		}
		return __returnValue;
	}
	native private long createMeshData_EVString(long pNativeObject, String meshPath);
	/**
	 * 创建meshdata
	 * @param modelcomponet 自定义模型组件
	 * @param meshPath 本地的.mesh文件
	 * @return 返回meshdata
	 */
	public com.earthview.world.spatial3d.dataexchange.MeshData createMeshData(String meshPath)
	{
		String meshPathParamValue = meshPath;
		long returnValue = createMeshData_EVString(this.nativeObject.pointer, meshPathParamValue);
		com.earthview.world.spatial3d.dataexchange.MeshData __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshData");
		}
		return __returnValue;
	}
	native private void destroyMeshData_CMeshData(long pNativeObject, long meshData);
	/**
	 * 销毁meshdata
	 * @param meshData 销毁对象
	 */
	public void destroyMeshData(com.earthview.world.spatial3d.dataexchange.MeshData meshData)
	{
		long meshDataParamValue = meshData.nativeObject.pointer;
		destroyMeshData_CMeshData(this.nativeObject.pointer, meshDataParamValue);
	}
	public MeshDataCreator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshDataCreator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshDataCreator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshDataCreator obj = null;
 		if(baseObj instanceof MeshDataCreator)
		{
			obj = (MeshDataCreator)baseObj;
		} else {
			obj = new MeshDataCreator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshDataCreator");
			obj.increaseCast();
		}

		return obj;
	}
}
