package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AttributeQuery extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CAttributeQuery", new AttributeQueryClassFactory());
	}

	public AttributeQuery() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAttributeQuery", null);
	}

	native private boolean Compile_IFields_ev_char(long pNativeObject, long pFields, long pExpression);
	public boolean Compile(com.earthview.world.spatial.geodataset.Ifields pFields, BytePointer pExpression)
	{
		long pFieldsParamValue = (pFields == null ? 0L : pFields.nativeObject.pointer);
		long pExpressionParamValue = (pExpression == null ? 0L : pExpression.nativeObject.pointer);
		boolean returnValue = Compile_IFields_ev_char(this.nativeObject.pointer, pFieldsParamValue, pExpressionParamValue);
		return returnValue;
	}
	native private boolean Evaluate_IFeature(long pNativeObject, long pFeature);
	public boolean Evaluate(com.earthview.world.spatial.geodataset.Ifeature pFeature)
	{
		long pFeatureParamValue = (pFeature == null ? 0L : pFeature.nativeObject.pointer);
		boolean returnValue = Evaluate_IFeature(this.nativeObject.pointer, pFeatureParamValue);
		return returnValue;
	}
	public AttributeQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AttributeQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AttributeQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AttributeQuery obj = null;
 		if(baseObj instanceof AttributeQuery)
		{
			obj = (AttributeQuery)baseObj;
		} else {
			obj = new AttributeQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAttributeQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
