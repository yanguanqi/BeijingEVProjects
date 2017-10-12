package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///class CDatabaseVectorSource;
public class VectorFeatureClassPostGisOperator extends com.earthview.world.spatial2d.geodataset.VectorFeatureClassOperator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator", new VectorFeatureClassPostGisOperatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCVectorFeatureClassPostGisOperatorProxy", new VectorFeatureClassPostGisOperatorClassFactory());
	}

	public VectorFeatureClassPostGisOperator(com.earthview.world.core.database.SqlDatabase db, com.earthview.world.spatial.geodataset.Idatasource pDataSource, String dbType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		BasePointer pDataSourcePtr = new BasePointer(pDataSource);
		list.add("pDataSource", pDataSourcePtr.get());
		BasePointer dbTypePtr = new BasePointer(dbType);
		list.add("dbType", dbTypePtr.get());
		Create("JCVectorFeatureClassPostGisOperatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.VectorFeatureClassPostGisOperator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getDataSourceRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Idatasource returnValue = getDataSourceRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	protected  boolean openDataset_CDataStream_EVString_callback(long stream, String name)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		String nameParamValue = name;
		boolean returnValue = openDataset(streamParamValue, nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean openDataset_CDataStream_EVString(long pNativeObject, long stream, String name);
	///////////////////////////////////////////////////
	public boolean openDataset(com.earthview.world.core.DataStream stream, String name)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String nameParamValue = name;
		boolean returnValue = openDataset_CDataStream_EVString(this.nativeObject.pointer, streamParamValue, nameParamValue);
		return returnValue;
	}
	native private boolean openDataset_CDataStream_EVString_NoVirtual(long pNativeObject, long stream, String name);
	protected boolean openDataset_NoVirtual(com.earthview.world.core.DataStream stream, String name)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String nameParamValue = name;
		boolean returnValue = openDataset_CDataStream_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, nameParamValue);
		return returnValue;
	}

	protected  boolean createDataset_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean returnValue = createDataset(streamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataset_CDataStream(long pNativeObject, long stream);
	public boolean createDataset(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = createDataset_CDataStream(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private boolean createDataset_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected boolean createDataset_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = createDataset_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}

	protected  boolean deleteDataset_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	public boolean deleteDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean deleteDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  String getFeatureClassName_void_callback()
	{
		String returnValue = getFeatureClassName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFeatureClassName_void(long pNativeObject);
	public String getFeatureClassName()
	{
		String returnValue = getFeatureClassName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFeatureClassName_void_NoVirtual(long pNativeObject);
	protected String getFeatureClassName_NoVirtual()
	{
		String returnValue = getFeatureClassName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getFeature_ev_uint32_CDataStream_callback(long id, long feature)
	{
		long idParamValue = id;
		com.earthview.world.core.DataStream featureParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		featureParamValue.setDelegate(true);
		featureParamValue.setInstancePointer(new InstancePointer(feature));
		IClassFactory featureParamValueClassFactory = GlobalClassFactoryMap.get(featureParamValue.getCppInstanceTypeName());
		if (featureParamValueClassFactory != null)
		{
			featureParamValue.setDelegate(true);
			featureParamValue = (com.earthview.world.core.DataStream)featureParamValueClassFactory.create();
			featureParamValue.setDelegate(true);
			featureParamValue.setInstancePointer(new InstancePointer(feature));
		}
		boolean returnValue = getFeature(idParamValue, featureParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFeature_ev_uint32_CDataStream(long pNativeObject, long id, long feature);
	public boolean getFeature(long id, com.earthview.world.core.DataStream feature)
	{
		long idParamValue = id;
		long featureParamValue = feature.nativeObject.pointer;
		boolean returnValue = getFeature_ev_uint32_CDataStream(this.nativeObject.pointer, idParamValue, featureParamValue);
		return returnValue;
	}
	native private boolean getFeature_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long id, long feature);
	protected boolean getFeature_NoVirtual(long id, com.earthview.world.core.DataStream feature)
	{
		long idParamValue = id;
		long featureParamValue = feature.nativeObject.pointer;
		boolean returnValue = getFeature_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, idParamValue, featureParamValue);
		return returnValue;
	}

	protected  boolean getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback(long id, long values, long lenght, long area, long pos)
	{
		long idParamValue = id;
		Vector<earthview::world::core::cvariant> valuesParamValue = new Vector<earthview::world::core::cvariant>(CreatedWhenConstruct.CWC_NotToCreate);
		valuesParamValue.setDelegate(true);
		valuesParamValue.setInstancePointer(new InstancePointer(values));
		IClassFactory valuesParamValueClassFactory = GlobalClassFactoryMap.get(valuesParamValue.getCppInstanceTypeName());
		if (valuesParamValueClassFactory != null)
		{
			valuesParamValue.setDelegate(true);
			valuesParamValue = (Vector<earthview::world::core::cvariant>)valuesParamValueClassFactory.create();
			valuesParamValue.setDelegate(true);
			valuesParamValue.setInstancePointer(new InstancePointer(values));
		}
		DoublePointer lenghtParamValue = new DoublePointer(new InstancePointer(lenght));
		DoublePointer areaParamValue = new DoublePointer(new InstancePointer(area));
		Vector<evBool> posParamValue = new Vector<evBool>(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (Vector<evBool>)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		boolean returnValue = getFeature(idParamValue, valuesParamValue, lenghtParamValue, areaParamValue, posParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(long pNativeObject, long id, long values, long lenght, long area, long pos);
	public boolean getFeature(long id, Vector<earthview::world::core::cvariant> values, DoublePointer lenght, DoublePointer area, Vector<evBool> pos)
	{
		long idParamValue = id;
		long valuesParamValue = values.nativeObject.pointer;
		long lenghtParamValue = lenght.nativeObject.pointer;
		long areaParamValue = area.nativeObject.pointer;
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(this.nativeObject.pointer, idParamValue, valuesParamValue, lenghtParamValue, areaParamValue, posParamValue);
		return returnValue;
	}
	native private boolean getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_NoVirtual(long pNativeObject, long id, long values, long lenght, long area, long pos);
	protected boolean getFeature_NoVirtual(long id, Vector<earthview::world::core::cvariant> values, DoublePointer lenght, DoublePointer area, Vector<evBool> pos)
	{
		long idParamValue = id;
		long valuesParamValue = values.nativeObject.pointer;
		long lenghtParamValue = lenght.nativeObject.pointer;
		long areaParamValue = area.nativeObject.pointer;
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_NoVirtual(this.nativeObject.pointer, idParamValue, valuesParamValue, lenghtParamValue, areaParamValue, posParamValue);
		return returnValue;
	}

	protected  boolean deleteFeature_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature(idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long id);
	public boolean deleteFeature(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean deleteFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	protected  long getFeatureCount_CDataStream_callback(long filter)
	{
		com.earthview.world.core.DataStream filterParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.core.DataStream)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		long returnValue = getFeatureCount(filterParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFeatureCount_CDataStream(long pNativeObject, long filter);
	public long getFeatureCount(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = getFeatureCount_CDataStream(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}
	native private long getFeatureCount_CDataStream_NoVirtual(long pNativeObject, long filter);
	protected long getFeatureCount_NoVirtual(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = getFeatureCount_CDataStream_NoVirtual(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}

	protected  boolean updateExtent_void_callback()
	{
		boolean returnValue = updateExtent();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateExtent_void(long pNativeObject);
	public boolean updateExtent()
	{
		boolean returnValue = updateExtent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateExtent_void_NoVirtual(long pNativeObject);
	protected boolean updateExtent_NoVirtual()
	{
		boolean returnValue = updateExtent_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getExtent_IEnvelope_callback(long pEnvelope)
	{
		com.earthview.world.spatial.geometry.Ienvelope pEnvelopeParamValue = (pEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvelopeParamValue != null)
		{
		pEnvelopeParamValue.setDelegate(true);
		pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		IClassFactory pEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(pEnvelopeParamValue.getCppInstanceTypeName());
		if (pEnvelopeParamValueClassFactory != null)
		{
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvelopeParamValueClassFactory.create();
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		}
		}
		boolean returnValue = getExtent(pEnvelopeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getExtent_IEnvelope(long pNativeObject, long pEnvelope);
	public boolean getExtent(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		boolean returnValue = getExtent_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
		return returnValue;
	}
	native private boolean getExtent_IEnvelope_NoVirtual(long pNativeObject, long pEnvelope);
	protected boolean getExtent_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		boolean returnValue = getExtent_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvelopeParamValue);
		return returnValue;
	}

	protected  long query_CDataStream_callback(long filter)
	{
		com.earthview.world.core.DataStream filterParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.core.DataStream)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		VoidPointer returnValue = query(filterParamValue);
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long query_CDataStream(long pNativeObject, long filter);
	public VoidPointer query(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = query_CDataStream(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long query_CDataStream_NoVirtual(long pNativeObject, long filter);
	protected VoidPointer query_NoVirtual(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = query_CDataStream_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  boolean nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback(long values, long lenght, long area, long pos, long queryData)
	{
		Vector<earthview::world::core::cvariant> valuesParamValue = new Vector<earthview::world::core::cvariant>(CreatedWhenConstruct.CWC_NotToCreate);
		valuesParamValue.setDelegate(true);
		valuesParamValue.setInstancePointer(new InstancePointer(values));
		IClassFactory valuesParamValueClassFactory = GlobalClassFactoryMap.get(valuesParamValue.getCppInstanceTypeName());
		if (valuesParamValueClassFactory != null)
		{
			valuesParamValue.setDelegate(true);
			valuesParamValue = (Vector<earthview::world::core::cvariant>)valuesParamValueClassFactory.create();
			valuesParamValue.setDelegate(true);
			valuesParamValue.setInstancePointer(new InstancePointer(values));
		}
		DoublePointer lenghtParamValue = new DoublePointer(new InstancePointer(lenght));
		DoublePointer areaParamValue = new DoublePointer(new InstancePointer(area));
		Vector<evBool> posParamValue = new Vector<evBool>(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (Vector<evBool>)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		VoidPointer queryDataParamValue = (queryData == 0L ? null : new VoidPointer(new InstancePointer(queryData)));
		boolean returnValue = nextFeature(valuesParamValue, lenghtParamValue, areaParamValue, posParamValue, queryDataParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(long pNativeObject, long values, long lenght, long area, long pos, long queryData);
	public boolean nextFeature(Vector<earthview::world::core::cvariant> values, DoublePointer lenght, DoublePointer area, Vector<evBool> pos, VoidPointer queryData)
	{
		long valuesParamValue = values.nativeObject.pointer;
		long lenghtParamValue = lenght.nativeObject.pointer;
		long areaParamValue = area.nativeObject.pointer;
		long posParamValue = pos.nativeObject.pointer;
		long queryDataParamValue = (queryData == null ? 0L : queryData.nativeObject.pointer);
		boolean returnValue = nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(this.nativeObject.pointer, valuesParamValue, lenghtParamValue, areaParamValue, posParamValue, queryDataParamValue);
		return returnValue;
	}
	native private boolean nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_NoVirtual(long pNativeObject, long values, long lenght, long area, long pos, long queryData);
	protected boolean nextFeature_NoVirtual(Vector<earthview::world::core::cvariant> values, DoublePointer lenght, DoublePointer area, Vector<evBool> pos, VoidPointer queryData)
	{
		long valuesParamValue = values.nativeObject.pointer;
		long lenghtParamValue = lenght.nativeObject.pointer;
		long areaParamValue = area.nativeObject.pointer;
		long posParamValue = pos.nativeObject.pointer;
		long queryDataParamValue = (queryData == null ? 0L : queryData.nativeObject.pointer);
		boolean returnValue = nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_NoVirtual(this.nativeObject.pointer, valuesParamValue, lenghtParamValue, areaParamValue, posParamValue, queryDataParamValue);
		return returnValue;
	}

	protected  boolean select_CDataStream_CDataStream_callback(long os, long filter)
	{
		com.earthview.world.core.DataStream osParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		osParamValue.setDelegate(true);
		osParamValue.setInstancePointer(new InstancePointer(os));
		IClassFactory osParamValueClassFactory = GlobalClassFactoryMap.get(osParamValue.getCppInstanceTypeName());
		if (osParamValueClassFactory != null)
		{
			osParamValue.setDelegate(true);
			osParamValue = (com.earthview.world.core.DataStream)osParamValueClassFactory.create();
			osParamValue.setDelegate(true);
			osParamValue.setInstancePointer(new InstancePointer(os));
		}
		com.earthview.world.core.DataStream filterParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.core.DataStream)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		boolean returnValue = select(osParamValue, filterParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean select_CDataStream_CDataStream(long pNativeObject, long os, long filter);
	public boolean select(com.earthview.world.core.DataStream os, com.earthview.world.core.DataStream filter)
	{
		long osParamValue = os.nativeObject.pointer;
		long filterParamValue = filter.nativeObject.pointer;
		boolean returnValue = select_CDataStream_CDataStream(this.nativeObject.pointer, osParamValue, filterParamValue);
		return returnValue;
	}
	native private boolean select_CDataStream_CDataStream_NoVirtual(long pNativeObject, long os, long filter);
	protected boolean select_NoVirtual(com.earthview.world.core.DataStream os, com.earthview.world.core.DataStream filter)
	{
		long osParamValue = os.nativeObject.pointer;
		long filterParamValue = filter.nativeObject.pointer;
		boolean returnValue = select_CDataStream_CDataStream_NoVirtual(this.nativeObject.pointer, osParamValue, filterParamValue);
		return returnValue;
	}

	protected  boolean endQuery_void_callback(long queryData)
	{
		VoidPointer queryDataParamValue = (queryData == 0L ? null : new VoidPointer(new InstancePointer(queryData)));
		boolean returnValue = endQuery(queryDataParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean endQuery_void(long pNativeObject, long queryData);
	public boolean endQuery(VoidPointer queryData)
	{
		long queryDataParamValue = (queryData == null ? 0L : queryData.nativeObject.pointer);
		boolean returnValue = endQuery_void(this.nativeObject.pointer, queryDataParamValue);
		return returnValue;
	}
	native private boolean endQuery_void_NoVirtual(long pNativeObject, long queryData);
	protected boolean endQuery_NoVirtual(VoidPointer queryData)
	{
		long queryDataParamValue = (queryData == null ? 0L : queryData.nativeObject.pointer);
		boolean returnValue = endQuery_void_NoVirtual(this.nativeObject.pointer, queryDataParamValue);
		return returnValue;
	}

	protected  long queryCount_CDataStream_callback(long filter)
	{
		com.earthview.world.core.DataStream filterParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.core.DataStream)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		long returnValue = queryCount(filterParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long queryCount_CDataStream(long pNativeObject, long filter);
	public long queryCount(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = queryCount_CDataStream(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}
	native private long queryCount_CDataStream_NoVirtual(long pNativeObject, long filter);
	protected long queryCount_NoVirtual(com.earthview.world.core.DataStream filter)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long returnValue = queryCount_CDataStream_NoVirtual(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}

	protected  boolean createSpatialIndex_ISpatialIndexParam_callback(long param)
	{
		com.earthview.world.spatial.geodataset.Ispatialindexparam paramParamValue = (param == 0L ? null : new com.earthview.world.spatial.geodataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramParamValue != null)
		{
		paramParamValue.setDelegate(true);
		paramParamValue.setInstancePointer(new InstancePointer(param));
		IClassFactory paramParamValueClassFactory = GlobalClassFactoryMap.get(paramParamValue.getCppInstanceTypeName());
		if (paramParamValueClassFactory != null)
		{
			paramParamValue.setDelegate(true);
			paramParamValue = (com.earthview.world.spatial.geodataset.Ispatialindexparam)paramParamValueClassFactory.create();
			paramParamValue.setDelegate(true);
			paramParamValue.setInstancePointer(new InstancePointer(param));
		}
		}
		boolean returnValue = createSpatialIndex(paramParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createSpatialIndex_ISpatialIndexParam(long pNativeObject, long param);
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.Ispatialindexparam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		boolean returnValue = createSpatialIndex_ISpatialIndexParam(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}
	native private boolean createSpatialIndex_ISpatialIndexParam_NoVirtual(long pNativeObject, long param);
	protected boolean createSpatialIndex_NoVirtual(com.earthview.world.spatial.geodataset.Ispatialindexparam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		boolean returnValue = createSpatialIndex_ISpatialIndexParam_NoVirtual(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}

	protected  boolean rebulidSpatialIndex_void_callback()
	{
		boolean returnValue = rebulidSpatialIndex();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean rebulidSpatialIndex_void(long pNativeObject);
	public boolean rebulidSpatialIndex()
	{
		boolean returnValue = rebulidSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebulidSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean rebulidSpatialIndex_NoVirtual()
	{
		boolean returnValue = rebulidSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean deleteSpatialIndex_void_callback()
	{
		boolean returnValue = deleteSpatialIndex();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteSpatialIndex_void(long pNativeObject);
	public boolean deleteSpatialIndex()
	{
		boolean returnValue = deleteSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deleteSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean deleteSpatialIndex_NoVirtual()
	{
		boolean returnValue = deleteSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean deleteField_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		boolean returnValue = deleteField(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteField_ev_int32(long pNativeObject, int index);
	public boolean deleteField(int index)
	{
		int indexParamValue = index;
		boolean returnValue = deleteField_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean deleteField_ev_int32_NoVirtual(long pNativeObject, int index);
	protected boolean deleteField_NoVirtual(int index)
	{
		int indexParamValue = index;
		boolean returnValue = deleteField_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long max_EVString_callback(String expression)
	{
		String expressionParamValue = expression;
		com.earthview.world.core.Variant returnValue = max(expressionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long max_EVString(long pNativeObject, String expression);
	public com.earthview.world.core.Variant max(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = max_EVString(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long max_EVString_NoVirtual(long pNativeObject, String expression);
	protected com.earthview.world.core.Variant max_NoVirtual(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = max_EVString_NoVirtual(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  long min_EVString_callback(String expression)
	{
		String expressionParamValue = expression;
		com.earthview.world.core.Variant returnValue = min(expressionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long min_EVString(long pNativeObject, String expression);
	public com.earthview.world.core.Variant min(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = min_EVString(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long min_EVString_NoVirtual(long pNativeObject, String expression);
	protected com.earthview.world.core.Variant min_NoVirtual(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = min_EVString_NoVirtual(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  long getFieldValues_EVString_ev_bool_callback(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		com.earthview.world.core.VariantArray returnValue = getFieldValues(fieldNameParamValue, isUniqueParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFieldValues_EVString_ev_bool(long pNativeObject, String fieldName, boolean isUnique);
	public com.earthview.world.core.VariantArray getFieldValues(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		long returnValue = getFieldValues_EVString_ev_bool(this.nativeObject.pointer, fieldNameParamValue, isUniqueParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}
	native private long getFieldValues_EVString_ev_bool_NoVirtual(long pNativeObject, String fieldName, boolean isUnique);
	protected com.earthview.world.core.VariantArray getFieldValues_NoVirtual(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		long returnValue = getFieldValues_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, fieldNameParamValue, isUniqueParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}

	protected  long getFiledTypes_void_callback()
	{
		EvVector<evInt32> returnValue = getFiledTypes();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFiledTypes_void(long pNativeObject);
	public EvVector<evInt32> getFiledTypes()
	{
		long returnValue = getFiledTypes_void(this.nativeObject.pointer);
		EvVector<evInt32> __returnValue = new EvVector<evInt32>(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ev_vector<ev_int32>");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EvVector<evInt32>)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ev_vector<ev_int32>");
		}
		return __returnValue;
	}
	native private long getFiledTypes_void_NoVirtual(long pNativeObject);
	protected EvVector<evInt32> getFiledTypes_NoVirtual()
	{
		long returnValue = getFiledTypes_void_NoVirtual(this.nativeObject.pointer);
		EvVector<evInt32> __returnValue = new EvVector<evInt32>(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ev_vector<ev_int32>");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EvVector<evInt32>)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ev_vector<ev_int32>");
		}
		return __returnValue;
	}

	protected  boolean Lock_void_callback()
	{
		boolean returnValue = Lock();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean Lock_void(long pNativeObject);
	public boolean Lock()
	{
		boolean returnValue = Lock_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean Lock_void_NoVirtual(long pNativeObject);
	protected boolean Lock_NoVirtual()
	{
		boolean returnValue = Lock_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean UnLock_void_callback()
	{
		boolean returnValue = UnLock();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean UnLock_void(long pNativeObject);
	public boolean UnLock()
	{
		boolean returnValue = UnLock_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean UnLock_void_NoVirtual(long pNativeObject);
	protected boolean UnLock_NoVirtual()
	{
		boolean returnValue = UnLock_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getIdName_void_callback()
	{
		String returnValue = getIdName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getIdName_void(long pNativeObject);
	public String getIdName()
	{
		String returnValue = getIdName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getIdName_void_NoVirtual(long pNativeObject);
	protected String getIdName_NoVirtual()
	{
		String returnValue = getIdName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getUpdateTime_void_callback()
	{
		String returnValue = getUpdateTime();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getDataVersion_void_callback()
	{
		ULongPointer returnValue = getDataVersion();
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String getDataVersion_void(long pNativeObject);
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  boolean updateTime_void_callback()
	{
		boolean returnValue = updateTime();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateTime_void(long pNativeObject);
	public boolean updateTime()
	{
		boolean returnValue = updateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateTime_void_NoVirtual(long pNativeObject);
	protected boolean updateTime_NoVirtual()
	{
		boolean returnValue = updateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean updateDataVersion_void_callback()
	{
		boolean returnValue = updateDataVersion();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateDataVersion_void(long pNativeObject);
	public boolean updateDataVersion()
	{
		boolean returnValue = updateDataVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateDataVersion_void_NoVirtual(long pNativeObject);
	protected boolean updateDataVersion_NoVirtual()
	{
		boolean returnValue = updateDataVersion_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean setSpatialReference_ISpatialReference_callback(long sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		boolean returnValue = setSpatialReference(srParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	public boolean setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		boolean returnValue = setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
		return returnValue;
	}
	native private boolean setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long sr);
	protected boolean setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		boolean returnValue = setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, srParamValue);
		return returnValue;
	}

	protected  int getGeomStremType_void_callback()
	{
		int returnValue = getGeomStremType();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getGeomStremType_void(long pNativeObject);
	public int getGeomStremType()
	{
		int returnValue = getGeomStremType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGeomStremType_void_NoVirtual(long pNativeObject);
	protected int getGeomStremType_NoVirtual()
	{
		int returnValue = getGeomStremType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public VectorFeatureClassPostGisOperator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorFeatureClassPostGisOperator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_openDataset_CDataStream_EVString(long pNativeObject, String method);
	native protected void register_createDataset_CDataStream(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_getFeatureClassName_void(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(long pNativeObject, String method);
	native protected void register_deleteFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_getFeatureCount_CDataStream(long pNativeObject, String method);
	native protected void register_updateExtent_void(long pNativeObject, String method);
	native protected void register_getExtent_IEnvelope(long pNativeObject, String method);
	native protected void register_query_CDataStream(long pNativeObject, String method);
	native protected void register_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(long pNativeObject, String method);
	native protected void register_select_CDataStream_CDataStream(long pNativeObject, String method);
	native protected void register_endQuery_void(long pNativeObject, String method);
	native protected void register_queryCount_CDataStream(long pNativeObject, String method);
	native protected void register_createSpatialIndex_ISpatialIndexParam(long pNativeObject, String method);
	native protected void register_rebulidSpatialIndex_void(long pNativeObject, String method);
	native protected void register_deleteSpatialIndex_void(long pNativeObject, String method);
	native protected void register_deleteField_ev_int32(long pNativeObject, String method);
	native protected void register_max_EVString(long pNativeObject, String method);
	native protected void register_min_EVString(long pNativeObject, String method);
	native protected void register_getFieldValues_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_getFiledTypes_void(long pNativeObject, String method);
	native protected void register_Lock_void(long pNativeObject, String method);
	native protected void register_UnLock_void(long pNativeObject, String method);
	native protected void register_getIdName_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_updateTime_void(long pNativeObject, String method);
	native protected void register_updateDataVersion_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_getGeomStremType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_openDataset_CDataStream_EVString(this.nativeObject.pointer, "openDataset_CDataStream_EVString_callback");
			this.register_createDataset_CDataStream(this.nativeObject.pointer, "createDataset_CDataStream_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_getFeatureClassName_void(this.nativeObject.pointer, "getFeatureClassName_void_callback");
			this.register_getFeature_ev_uint32_CDataStream(this.nativeObject.pointer, "getFeature_ev_uint32_CDataStream_callback");
			this.register_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(this.nativeObject.pointer, "getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback");
			this.register_deleteFeature_ev_uint32(this.nativeObject.pointer, "deleteFeature_ev_uint32_callback");
			this.register_getFeatureCount_CDataStream(this.nativeObject.pointer, "getFeatureCount_CDataStream_callback");
			this.register_updateExtent_void(this.nativeObject.pointer, "updateExtent_void_callback");
			this.register_getExtent_IEnvelope(this.nativeObject.pointer, "getExtent_IEnvelope_callback");
			this.register_query_CDataStream(this.nativeObject.pointer, "query_CDataStream_callback");
			this.register_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(this.nativeObject.pointer, "nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback");
			this.register_select_CDataStream_CDataStream(this.nativeObject.pointer, "select_CDataStream_CDataStream_callback");
			this.register_endQuery_void(this.nativeObject.pointer, "endQuery_void_callback");
			this.register_queryCount_CDataStream(this.nativeObject.pointer, "queryCount_CDataStream_callback");
			this.register_createSpatialIndex_ISpatialIndexParam(this.nativeObject.pointer, "createSpatialIndex_ISpatialIndexParam_callback");
			this.register_rebulidSpatialIndex_void(this.nativeObject.pointer, "rebulidSpatialIndex_void_callback");
			this.register_deleteSpatialIndex_void(this.nativeObject.pointer, "deleteSpatialIndex_void_callback");
			this.register_deleteField_ev_int32(this.nativeObject.pointer, "deleteField_ev_int32_callback");
			this.register_max_EVString(this.nativeObject.pointer, "max_EVString_callback");
			this.register_min_EVString(this.nativeObject.pointer, "min_EVString_callback");
			this.register_getFieldValues_EVString_ev_bool(this.nativeObject.pointer, "getFieldValues_EVString_ev_bool_callback");
			this.register_getFiledTypes_void(this.nativeObject.pointer, "getFiledTypes_void_callback");
			this.register_Lock_void(this.nativeObject.pointer, "Lock_void_callback");
			this.register_UnLock_void(this.nativeObject.pointer, "UnLock_void_callback");
			this.register_getIdName_void(this.nativeObject.pointer, "getIdName_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_updateTime_void(this.nativeObject.pointer, "updateTime_void_callback");
			this.register_updateDataVersion_void(this.nativeObject.pointer, "updateDataVersion_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_getGeomStremType_void(this.nativeObject.pointer, "getGeomStremType_void_callback");
		}
	}
	
	public static VectorFeatureClassPostGisOperator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorFeatureClassPostGisOperator obj = null;
 		if(baseObj instanceof VectorFeatureClassPostGisOperator)
		{
			obj = (VectorFeatureClassPostGisOperator)baseObj;
		} else {
			obj = new VectorFeatureClassPostGisOperator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorFeatureClassPostGisOperator");
			obj.increaseCast();
		}

		return obj;
	}
}
