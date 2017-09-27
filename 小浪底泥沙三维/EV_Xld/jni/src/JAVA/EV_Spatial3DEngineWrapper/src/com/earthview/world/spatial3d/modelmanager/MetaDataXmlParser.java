package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MetaDataXmlParser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMetaDataXmlParser", new MetaDataXmlParserClassFactory());
	}

	public MetaDataXmlParser() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMetaDataXmlParser", null);
	}

	public MetaDataXmlParser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MetaDataXmlParser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MetaDataXmlParser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MetaDataXmlParser obj = null;
 		if(baseObj instanceof MetaDataXmlParser)
		{
			obj = (MetaDataXmlParser)baseObj;
		} else {
			obj = new MetaDataXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMetaDataXmlParser");
			obj.increaseCast();
		}

		return obj;
	}
}
