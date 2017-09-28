#ifndef _MODELTEMPLATEPLGUIN_H
#define _MODELTEMPLATEPLGUIN_H


#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "core/datastream.h"



class EV_Spatial3DDataset_DLL CResourceData: public EarthView::World::Core::CAllocatedObject
{
public:
	CResourceData();

	virtual ~CResourceData();

	EVString getName();
	void setName(const EVString& name);
	EVString getDataType();
	void setDataType(const EVString& dataType);
	EarthView::World::Core::MemoryDataStreamPtr getResourceData();
	void setResourceData(const EarthView::World::Core::MemoryDataStreamPtr& data);
	EarthView::World::Spatial3D::Dataset::MaterialResourceType getResourceType();
	void setResourceType(EarthView::World::Spatial3D::Dataset::MaterialResourceType type);
	
private:
	EVString mName;
	EarthView::World::Core::MemoryDataStreamPtr mResourceData;
	EVString mDataType;
	EarthView::World::Spatial3D::Dataset::MaterialResourceType mResourceType;
ev_private:
	CResourceData(_in EarthView::World::Core::CNameValuePairList* pList);
};

class EV_Spatial3DDataset_DLL CResourceDataList: public EarthView::World::Core::CAllocatedObject
{
public:
	CResourceDataList();


	virtual ~CResourceDataList();


	void push_back(CResourceData const &t);


	void push_front(CResourceData const   &t);


	void pop_back();


	void pop_front();


	CResourceData &front();


	CResourceData &back();


	CResourceData &at(ev_uint32 pos);


	void insert(ev_uint32 pos, CResourceData const &t);


	void remove(ev_size_t pos);


	ev_bool empty() const;


	ev_size_t size() const;


	void resize(ev_size_t newSize);


	void clear();


private:
	typedef list<CResourceData>                       InternalList;
	InternalList                                      mList;

ev_private:	
	typedef InternalList::iterator                    iterator;
	typedef InternalList::const_iterator              const_iterator;
	typedef InternalList::reverse_iterator            reverse_iterator;
	typedef InternalList::const_reverse_iterator      const_reverse_iterator;
	typedef InternalList::reference                   reference;
	typedef InternalList::const_reference             const_reference;
	typedef InternalList::value_type                  value_type;
	RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

	iterator insert(iterator pos, CResourceData const &t);


	CResourceDataList(_in EarthView::World::Core::CNameValuePairList *pList);

};

class EV_Spatial3DDataset_DLL CModelData: public EarthView::World::Core::CAllocatedObject
{
public:
	CModelData();


	virtual ~CModelData();

	EVString getName();
	void setName(const EVString& name);

	void setModelData(const EarthView::World::Core::MemoryDataStreamPtr& data);

	EarthView::World::Core::MemoryDataStreamPtr getModelData();

	void setDataType(const EVString& dataType);

	EVString getDataType();

	void setBoundingbox(const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

	EarthView::World::Spatial::Math::CAxisAlignedBox getBoundingbox();

	void setResourceList(const CResourceDataList& res);
	CResourceDataList getResourceList();
private:
	EVString mName;
	EarthView::World::Core::MemoryDataStreamPtr mModelData;
	CResourceDataList mResourcesList;
	EVString mDataType;
	EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingbox;
ev_private:
	CModelData(_in EarthView::World::Core::CNameValuePairList* pList);
};



class EV_Spatial3DDataset_DLL IModelTemplatePlugin: public EarthView::World::Core::CAllocatedObject
{
public:
	IModelTemplatePlugin();

	virtual ~IModelTemplatePlugin();

	virtual bool getImportModelData(const EVString& meshPath,_out CModelData& importModelData){return false;}
	
	virtual EVString getPluginName();

	virtual bool getRealResourceData(_in CResourceData& srcResourceData,_out CResourceData& destResourceData){return false;}

	virtual bool getRealModelData(_in CModelData& srcResourceData,_out CModelData& destModelData){return false;}
ev_private:
	IModelTemplatePlugin(_in EarthView::World::Core::CNameValuePairList* pList){}

	

};
#endif