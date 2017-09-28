#ifndef __Mesh_H__
#define __Mesh_H__
#include "graphic/graphic_config.h"
#include <mathengine/axisalignedbox.h>

#include <core/sharedptr.h>
#include "resource.h"
#include "vertexboneassignment.h"
#include <core/iteratorwrapper.h>
#include "progressivemesh.h"
#include "skeleton.h"
#include "animation.h"
#include "animationtrack.h"
#include "pose.h"
#include <core/datastream.h>
#include "material.h"
#include "core/ev_string.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
		{

			enum InstanceTechniuqe
			{
				IT_None = 0,					
				IT_ShaderBased = 1,
				IT_HardwareBased = 2,
				IT_HardwareBasedAndShaderBased = 3,
			};

			///class CMeshPtr;
			class CEdgeData;
			///class MeshLodUsage;
			class CLodStrategy;
			class CMesh;

			class EV_GRAPHIC_DLL CMeshPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh>
			{
			
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMeshPtr(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshPtr();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rep"></param>
				/// <returns></returns>
				explicit CMeshPtr(CMesh *ref_rep);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rep"></param>
				/// <param name="inFreeMethod"></param>
				/// <returns></returns>
				explicit CMeshPtr(CMesh *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="r"></param>
				/// <returns></returns>
				CMeshPtr(const CMeshPtr &r);
				EarthView::World::Graphic::CMesh *get() const;
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="r"></param>
				/// <returns></returns>
				CMeshPtr(const EarthView::World::Graphic::ResourcePtr &r);
				/// <summary>
				/// 用于转换EarthView::World::Graphic::ResourcePtr到EarthView::World::Graphic::CMeshPtr
				/// </summary>
				/// <param name="r"></param>
				/// <returns></returns>
				EarthView::World::Graphic::CMeshPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r);
			protected:
				//// Override destroy since we need to delete EarthView::World::Graphic::CMesh after fully defined
				void destroy();
			};
			/** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CMeshPtr
			@note Has to be a subclass since we need operator=.
			We could templatise this instead of repeating per CResource subclass,
			except to do so requires a form VC6 does not support i.e.
			ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
			*/
			/** A way of recording the way each LODs is recorded this EarthView::World::Graphic::CMesh. */
			class EV_GRAPHIC_DLL MeshLodUsage : public EarthView::World::Core::CBaseObject
			{
ev_private:
				MeshLodUsage(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/** User-supplied values used to determine when th is lod applies.
				@remarks
				This is required in case the lod strategy changes.
				*/
				Real userValue;
				/** Value used by to determine when this lod applies.
				@remarks
				May be interpretted differently by different strategies.
				Transformed from user-supplied values with CLodStrategy::transformUserValue.
				*/
				Real value;
				//// Only relevant if mIsLodManual is true, the name of the alternative mesh to use
				EVString manualName;
				//// Only relevant if mIsLodManual is true, the name of the group of the alternative mesh
				EVString manualGroup;
				//// Hard link to mesh to avoid looking up each time
				mutable EarthView::World::Graphic::CMeshPtr manualMesh;
				//// Edge list for this LOD level (may be derived from manual mesh)
				mutable EarthView::World::Graphic::CEdgeData *edgeData;
				MeshLodUsage();
			};
			class EV_GRAPHIC_DLL IndexMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				IndexMap(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef vector<ev_uint16> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList);
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, ev_uint16 const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				IndexMap();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(ev_uint16  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint16 &front();
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint16 &back();
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, ev_uint16 const &t);
				/// <summary>
				/// 去掉位置pos处元素的值
				/// </summary>
				/// <param name="pos">元素的位置</param>
				/// <returns>返回容器当前的值</returns>
				void remove(ev_size_t pos);
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_uint16 &operator[](ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				///由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_uint16 const &operator[](ev_size_t n) const;
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_uint16 &at(ev_size_t n);
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_uint16 const &at(ev_size_t n) const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void reserve(ev_size_t count);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			class BoneAssignmentIterator;
			class EV_GRAPHIC_DLL CMesh: public EarthView::World::Graphic::CResource
			{
				friend class CSubMesh;
				friend class CMeshSerializerImpl;
				friend class CMeshSerializerImpl_v1_4;
				friend class CMeshSerializerImpl_v1_2;
				friend class CMeshSerializerImpl_v1_1;

			public:
				class  EV_GRAPHIC_DLL SubMeshInfo : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					SubMeshInfo(EarthView::World::Core::CNameValuePairList* pList) : SubMeshIndex(0),InstanceIndex(-1),IndexBegun(-1),IndexEnd(-1){}
				public:
					SubMeshInfo(): SubMeshIndex(0),InstanceIndex(-1),IndexBegun(-1),IndexEnd(-1){}

					ev_bool operator< (const SubMeshInfo& oth)const
					{
						return SubMeshIndex == oth.SubMeshIndex ? ( InstanceIndex == oth.InstanceIndex ? IndexBegun < oth.IndexBegun : InstanceIndex < oth.InstanceIndex ) : (SubMeshIndex < oth.SubMeshIndex);
					}
					ev_bool operator> (const SubMeshInfo& oth)const
					{
						return !(operator<(oth));
					}
				public:
					ev_uint32 SubMeshIndex;
					ev_uint32  InstanceIndex;
					ev_uint32 IndexBegun;
					ev_uint32 IndexEnd;
				};

				class CMeshNode;

				class EV_GRAPHIC_DLL MeshNodePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>
				{
				ev_private:
					MeshNodePtr(_in EarthView::World::Core::CNameValuePairList *pList) :
							EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>(
							pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CMesh::CMeshNode *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CMesh::CMeshNode *) NULL
							, pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
				{
					if(pList && pList->Exist("r"))
					{
						EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode> r
							= *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>*)pList->GetAt("r");
						EV_SET_AUTO_SHARED_MUTEX_NULL
							EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
								EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
								pRep = r.pRep;
							pUseCount = r.pUseCount;
							useFreeMethod = r.useFreeMethod;
							/// Handle zero pointer gracefully to manage STL containers
							if(pUseCount)
							{
								++(*pUseCount);
							}
						}
					}
				}
				public:
					MeshNodePtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>() {}
					explicit MeshNodePtr(EarthView::World::Graphic::CMesh::CMeshNode *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>(ref_rep) {}
					explicit MeshNodePtr(EarthView::World::Graphic::CMesh::CMeshNode *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
						EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>(ref_rep, inFreeMethod) {}
					MeshNodePtr(const MeshNodePtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>(r) {}

					EarthView::World::Graphic::CMesh::CMeshNode *get() const
					{
						 return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMesh::CMeshNode>::get();
					}
				};

				class EV_GRAPHIC_DLL CMeshNode : public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CMeshNode(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					CMeshNode(){}

				public:
					ev_bool addNode(MeshNodePtr node);
					ev_bool existNode(MeshNodePtr node)const;
					ev_bool existNode(const EVString& name)const;
					ev_uint32 getNumNodes()const;
					MeshNodePtr getNode(ev_uint32 index)const;
					MeshNodePtr getNode(const EVString& name)const;
					ev_bool removeNode(MeshNodePtr node);
					ev_bool removeNode(const EVString& name);
					ev_void clearNodes();

					ev_bool appendSubMesh(SubMeshInfo& sm);
					ev_bool removeSubMesh(SubMeshInfo& sm);
					ev_bool existSubMesh(SubMeshInfo& sm);
					ev_uint32 getNumSubMeshes()const;
					SubMeshInfo getSubMesh(ev_uint32 index)const;
					ev_void clearSubMeshes();

					void setBoundingBox(EarthView::World::Spatial::Math::CAxisAlignedBox boundingBox);
					EarthView::World::Spatial::Math::CAxisAlignedBox getBoundingBox();
				public:
					EVString Name;
					EarthView::World::Spatial::Math::CMatrix4 OffsetMatrix;
					ev_uint32 ID;
					//set<EarthView::World::Graphic::CMovableObject *> mSubEntitySet;
					//vector<EarthView::World::Graphic::CSubEntity *> mSubEntitys;
					//map<CMovableObject *,SubMeshInfo> mObjAndSubMeshInfo;
				private:
					set<SubMeshInfo> mSubMeshes;
					
					map<EVString,MeshNodePtr> mNodes;
					EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
				};

				class EV_GRAPHIC_DLL CMeshCategory : public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CMeshCategory(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					CMeshCategory(){}
				public:
					ev_bool addNode(MeshNodePtr node);
					ev_bool existNode(MeshNodePtr node)const;
					ev_bool existNode(const EVString& name)const;
					ev_uint32 getNumNodes()const;
					MeshNodePtr getNode(ev_uint32 index)const;
					MeshNodePtr getNode(const EVString& name)const;
					ev_bool removeNode(MeshNodePtr node);
					ev_bool removeNode(const EVString& name);
					ev_void clearNodes();

				public:
					EVString Name;
					EVString mDescription;
					ev_uint32 mId;
					EarthView::World::Core::NameValuePairList mCategoryAttributeList;
				private:					
					map<EVString,MeshNodePtr> mNodes;
				};

			public:
				ev_uint32 getNumCategorys()const;
				const CMeshCategory& getCategory(ev_uint32 index)const;
				const CMeshCategory& getCategory(const EVString& name)const;
				ev_bool existCategory(const EVString& name)const;
				ev_bool addCategory(const CMeshCategory& cate);
				ev_bool removeCategory(const CMeshCategory& cate);
				ev_void clearCategorys();

				MeshNodePtr getRootMeshNode()const;
				ev_bool createRootMeshNode();
				ev_void destroyRootMeshNode();

			protected:
				map<EVString, CMeshCategory> mCategoryMap;
				MeshNodePtr mRootMeshNode;				
			public:
				class EV_GRAPHIC_DLL CMeshAnimationContainer : public EarthView::World::Graphic::CAnimationContainer
				{
ev_private:
					CMeshAnimationContainer(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CMeshAnimationContainer(CMesh *parent);
					/** Gets the number of animations in this container. */
					virtual ev_uint16 getNumAnimations() const;
					/** Retrieve an animation by index.  */
					virtual EarthView::World::Graphic::CAnimation *getAnimation(ev_uint16 index) const;
					/** Retrieve an animation by name. */
					virtual EarthView::World::Graphic::CAnimation *getAnimation(const EVString &name) const;
					/** Create a new animation with a given length owned by this container. */
					virtual EarthView::World::Graphic::CAnimation *createAnimation(const EVString &name, Real length);
					/** Returns whether this object contains the named animation. */
					virtual bool hasAnimation(const EVString &name) const;
					/** Removes an Animation from this container. */
					virtual void removeAnimation(const EVString &name);
				protected:
					EarthView::World::Graphic::CMesh *mParent;
				};
			private:
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *mMeshAnimationContainer;
			public:
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *getAnimationContainerPtr() const
				{
					return mMeshAnimationContainer;
				}
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer &getAnimationContainer() const
				{
					return *mMeshAnimationContainer;
				}
			public:
				/// <summary>
				/// 为该模型的顶点动画创建一个新的动画对象
				/// </summary>
				/// <param name="name">动画的名称</param>
				/// <param name="length">动画的时长</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CAnimation *createAnimation(const EVString &name, Real length);
				/// <summary>
				/// 获得已命名的顶点动画对象
				/// </summary>
				/// <param name="name">动画的名称</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CAnimation *getAnimation(const EVString &name) const;
				/// <summary>
				/// 访问已给名称的顶点动画对象，如果不存在返回null
				/// </summary>
				/// <param name="name">动画的名称</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CAnimation *_getAnimationImpl(const EVString &name) const;
				/// <summary>
				/// 判断该模型是否包含已命名的顶点动画
				/// </summary>
				/// <param name="name">动画的名称</param>
				/// <returns></returns>
				virtual ev_bool hasAnimation(const EVString &name) const;
				/// <summary>
				/// 从该模型中删除顶点动画
				/// </summary>
				/// <param name="name">动画的名称</param>
				/// <returns></returns>
				virtual void removeAnimation(const EVString &name);
				/// <summary>
				/// 获得该模型中变形动画的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint16 getNumAnimations() const;
				/// <summary>
				/// 通过索引获得一个单独的变形动画
				/// </summary>
				/// <param name="index">索引值</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CAnimation *getAnimation(ev_uint16 index) const;
				/// <summary>
				/// 从该模型中删除所有的变形动画
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void removeAllAnimations();
			public:
				/*typedef CMaterial::LodValueList LodValueList;*/
				class EV_GRAPHIC_DLL MeshLodUsageList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					MeshLodUsageList(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
					typedef vector<EarthView::World::Graphic::MeshLodUsage> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns>返回指向新元素的迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Graphic::MeshLodUsage const &t);
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					MeshLodUsageList();
					/// <summary>
					/// 在容器的尾部添加值为t的元素
					/// </summary>
					/// <param name="t">添加元素的值</param>
					/// <returns></returns>
					void push_back(EarthView::World::Graphic::MeshLodUsage  const &t);

					/// <summary>
					/// 删除容器的最后一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回容器的第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage &front();
					/// <summary>
					/// 返回容器的最后一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage &back();
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Graphic::MeshLodUsage const &t);
					/// <summary>
					/// 去掉位置pos处元素的值
					/// </summary>
					/// <param name="pos">元素的位置</param>
					/// <returns>返回容器当前的值</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// 返回标记容器大小是否为0的布尔值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage &operator[](ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					///由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage const &operator[](ev_size_t n) const;
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage &at(ev_size_t n);
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::MeshLodUsage const &at(ev_size_t n) const;
					/// <summary>
					/// 返回容器中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 调整容器的长度大小，使其能容纳newSize个元素
					/// </summary>
					/// <param name="newSize">长度</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);
					void reserve(ev_size_t count);
					/// <summary>
					/// 删除容器中的所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};
				/// <summary>
				/// 顶点骨骼列表，按顶点索引排列
				/// </summary>
				class EV_GRAPHIC_DLL VertexBoneAssignmentList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					VertexBoneAssignmentList(_in EarthView::World::Core::CNameValuePairList *pList );
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					VertexBoneAssignmentList();
					/// <summary>
					/// 在map容器中添加元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					void push( ev_size_t const &key, EarthView::World::Graphic::VertexBoneAssignment const &val);
					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					ev_bool exist( ev_size_t const &key);
					/// <summary>
					/// 删除键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					void erase( ev_size_t const &key);
					/// <summary>
					/// 返回容器的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器的大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 返回容器中键的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>键的数量</returns>
					ev_size_t count( ev_size_t const &key);
					/// <summary>
					/// 获取指定键值的第几项
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					EarthView::World::Graphic::VertexBoneAssignment &get( ev_size_t const &key, ev_size_t index);
					/// <summary>
					/// 删除指定键值的第几项
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					void erase( ev_size_t const &key, ev_size_t index);
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
ev_private:
					typedef multimap<ev_size_t, EarthView::World::Graphic::VertexBoneAssignment> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<InternalList::iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);
					/// <summary>
					/// 容器中插入元素
					/// </summary>
					/// <param name="val">值</param>
					/// <returns>插入后的值</returns>
					iterator insert(const value_type &val);
					/// <summary>
					/// 如果容器中存在看key索引存在的元素，则返回指向该元素的迭代器
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回指向该元素的迭代器</returns>
					iterator find( ev_size_t const &key);

					/// <summary>
					/// 如果容器中存在看key索引存在的元素，则返回指向该元素的迭代器
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回指向该元素的迭代器</returns>
					const_iterator find(ev_size_t const &key) const;
					iterator lower_bound(const key_type &_keyval);
					const_iterator lower_bound(const key_type &_keyval) const;
					iterator upper_bound(const key_type &_keyval);
					const_iterator upper_bound(const key_type &_keyval) const;
					std::pair< iterator, iterator > equal_range(_in const key_type &key)
					{
						return mList.equal_range(key);
					}
				private:
					InternalList mList;
				};

				class EV_GRAPHIC_DLL SubMeshList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SubMeshList(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
					typedef vector<EarthView::World::Graphic::CSubMesh *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList);
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns>返回指向新元素的迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Graphic::CSubMesh *const &ref_t);
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					SubMeshList();
					/// <summary>
					/// 在容器的尾部添加值为t的元素
					/// </summary>
					/// <param name="t">添加元素的值</param>
					/// <returns></returns>
					void push_back(EarthView::World::Graphic::CSubMesh  *const &ref_t);
					/// <summary>
					/// 删除容器的最后一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回容器的第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh*& front();
					/// <summary>
					/// 返回容器的最后一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh*& back();
					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Graphic::CSubMesh *const &ref_t);
					/// <summary>
					/// 去掉位置pos处元素的值
					/// </summary>
					/// <param name="pos">元素的位置</param>
					/// <returns>返回容器当前的值</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// 返回标记容器大小是否为0的布尔值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh*& operator[](ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					///由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh *const &operator[](ev_size_t n) const;
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh*& at(ev_size_t n)
					{
						reference t = mList[n];
						return t;
					}
					/// <summary>
					/// 返回下标为n的元素的引用
					/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSubMesh *const &at(ev_size_t n) const;
					/// <summary>
					/// 返回容器中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 调整容器的长度大小，使其能容纳newSize个元素
					/// </summary>
					/// <param name="newSize">长度</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);
					void reserve(ev_size_t count);
					/// <summary>
					/// 删除容器中的所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};

			protected:
				/// 组成模型的子模型列表
				EarthView::World::Graphic::CMesh::SubMeshList mSubMeshList;
				/** Internal method for making the space for a vertex element to hold tangents. */
				void organiseTangentsBuffer(EarthView::World::Graphic::CVertexData *vertexData,
					EarthView::World::Graphic::VertexElementSemantic targetSemantic, ev_uint16 index,
					ev_uint16 sourceTexCoordSet);
			public:
				/// <summary>
				/// 存储SubMesh的名称
				/// </summary>
				class EV_GRAPHIC_DLL SubMeshNameMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SubMeshNameMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					SubMeshNameMap();
					/// <summary>
					/// 在EarthView::World::Core::hashmap容器中添加元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push(const EVString &key, ev_uint16 const &val);
					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					ev_bool exist(const EVString &key);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					ev_uint16 &operator[](const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					ev_uint16 &get(const EVString &key);
					/// <summary>
					/// 删除键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					void erase(const EVString &key);
					/// <summary>
					/// 返回容器的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器的大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef EarthView::World::Core::hashmap<EVString, ev_uint16, _StringHash> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<InternalList::iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
					/// <summary>
					/// 容器中插入元素
					/// </summary>
					/// <param name="val">值</param>
					/// <returns>插入后的键值对</returns>
					_Pairib insert(const value_type &val);
					/// <summary>
					/// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回指向该元素的迭代器</returns>
					iterator find(const EVString &key);
					/// <summary>
					/// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回指向该元素的迭代器</returns>
					const_iterator find(const EVString &key) const;
				private:
					InternalList mList;
				};
				class EV_GRAPHIC_DLL SubMeshNameMapPair : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					SubMeshNameMapPair(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					SubMeshNameMapPair();
					EVString first;
					ev_uint16 second;
				};

			protected:
				EarthView::World::Core::DataStreamPtr mFreshFromDisk;
				EarthView::World::Graphic::CMesh::SubMeshNameMap mSubMeshNameMap ;
				//// Local bounding box volume
				mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
				//// Local bounding sphere radius (centered on object)
				mutable  Real mBoundRadius;
				mutable ev_bool mBoundingBoxDirty;

				//// Optional linked skeleton
				EVString mSkeletonName;
				EarthView::World::Graphic::CSkeletonPtr mSkeleton;

				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList mBoneAssignments;
				//// Flag indicating that bone assignments need to be recompiled
				ev_bool mBoneAssignmentsOutOfDate;
				/// <summary>
				/// 在骨骼索引和混合索引之间建立索引map
				/// </summary>
				/// <param name="boneAssignments"></param>
				/// <param name="boneIndexToBlendIndexMap"></param>
				/// <param name="blendIndexToBoneIndexMap"></param>
				/// <returns></returns>
				void buildIndexMap(const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &boneAssignments,
					EarthView::World::Graphic::IndexMap &boneIndexToBlendIndexMap, EarthView::World::Graphic::IndexMap &blendIndexToBoneIndexMap);
				/// <summary>
				/// 编辑骨骼分配到混合索引和权重缓存
				/// </summary>
				/// <param name="boneAssignments"></param>
				/// <param name="numBlendWeightsPerVertex"></param>
				/// <param name="blendIndexToBoneIndexMap"></param>
				/// <param name="targetVertexData"></param>
				/// <returns></returns>
				void compileBoneAssignments(const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &boneAssignments,
					ev_uint16 numBlendWeightsPerVertex,
					EarthView::World::Graphic::IndexMap &blendIndexToBoneIndexMap,
					EarthView::World::Graphic::CVertexData *targetVertexData);
				const EarthView::World::Graphic::CLodStrategy *mLodStrategy;
				ev_bool mIsLodManual;
				ev_uint16 mNumLods;
				MeshLodUsageList mMeshLodUsageList;
				EarthView::World::Graphic::CHardwareBuffer::Usage mVertexBufferUsage;
				EarthView::World::Graphic::CHardwareBuffer::Usage mIndexBufferUsage;
				ev_bool mVertexBufferShadowBuffer;
				ev_bool mIndexBufferShadowBuffer;

				ev_bool mPreparedForShadowVolumes;
				ev_bool mEdgeListsBuilt;
				ev_bool mAutoBuildEdgeLists;
				//// Storage of morph animations, lookup by name
				typedef map<EVString, EarthView::World::Graphic::CAnimation *> AnimationList;
				AnimationList mAnimationsList;
				//// The vertex animation type associated with the shared vertex data
				mutable EarthView::World::Graphic::VertexAnimationType mSharedVertexDataAnimationType;
				//// Whether vertex animation includes normals
				mutable ev_bool mSharedVertexDataAnimationIncludesNormals;
				//// Do we need to scan animations for animation types?
				mutable ev_bool mAnimationTypesDirty;
				//// List of available poses for shared and dedicated geometryPoseList
				EarthView::World::Graphic::PoseList mPoseList;
				mutable ev_bool mPosesIncludeNormals;
				
ev_internal:
				/// <summary>
				/// 准备的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void prepareImpl();
				/// <summary>
				/// 准备的反过程的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void unprepareImpl();
				/// <summary>
				/// 加载的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void loadImpl();
				/// <summary>
				/// 加载后的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void postLoadImpl();
				/// <summary>
				/// 卸载的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void unloadImpl();
				/// <summary>
				/// 计算资源的大小，只有在load执行之后调用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t calculateSize() const;

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMesh(_in EarthView::World::Core::CNameValuePairList *pList );
			public:
				/// <summary>
				/// 构造函数
				/// 不能直接调用该方法
				/// </summary>
				/// <param name="creator">指向EarthView::World::Graphic::CResourceManager的指针，创建资源</param>
				/// <param name="name">资源的名称</param>
				/// <param name="handle"></param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">确定资源是否手动下载</param>
				/// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针</param>
				/// <returns></returns>
				CMesh(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
					const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
				/// <summary>
				/// 构造函数
				/// 不能直接调用该方法
				/// </summary>
				/// <param name="creator">指向EarthView::World::Graphic::CResourceManager的指针，创建资源</param>
				/// <param name="name">资源的名称</param>
				/// <param name="handle">句柄</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">确定资源是否手动下载</param>
				/// <returns></returns>
				CMesh(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
					const EVString &group, ev_bool isManual);
				/// <summary>
				/// 构造函数
				/// 不能直接调用该方法
				/// </summary>
				/// <param name="creator">指向EarthView::World::Graphic::CResourceManager的指针，创建资源</param>
				/// <param name="name">资源的名称</param>
				/// <param name="handle">句柄</param>
				/// <param name="group">资源组的名称</param>
				/// <returns></returns>
				CMesh(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                      const EVString &group);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CMesh();

				/// <summary>
				/// 检查mesh是否支持instance
				/// </summary>				
				/// <returns>0不支持,1支持IT_ShaderBased，2支持IT_HardwareBased, 3表示前面两种都支持</returns>
				InstanceTechniuqe checkInstanceCapability();

				/// <summary>
				/// 判断是否支持硬件Instance
				/// </summary>				
				/// <returns></returns>
				static ev_bool checkHardwareInstanceCapability();

                /// <summary>
                /// 创建一个新的子模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSubMesh *createSubMesh();
                /// <summary>
                /// 创建一个新的子模型，并初始一个名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSubMesh *createSubMesh(const EVString &name);
                /// <summary>
                /// 给子模型命名
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="index">索引</param>
                /// <returns></returns>
                void nameSubMesh(const EVString &name, ev_uint16 index);
                /// <summary>
                /// 去除掉模型的名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                void unnameSubMesh(const EVString &name);
				/// <summary>
				/// 计算某个子部件的instance索引在所有子部件的全局索引
				/// </summary>
				/// <param name="submeshIndex">子部件索引</param>
				/// <param name="instanceIndex">子部件下面instance索引</param>
				/// <returns>失败返回-1</returns>
				ev_int32 calculateGlobalIndex(ev_uint16 submeshIndex, ev_uint32 instanceIndex);

				/// <summary>
				/// 计算某个全局索引属于哪个子部件的第几个索引
				/// </summary>
				/// <param name="globalIndex">全局索引</param>
				/// <param name="submeshIndex">子部件索引</param>
				/// <param name="instanceIndex">子部件下面instance索引</param>
				/// <returns></returns>
				void calculateInstanceIndex(ev_uint32 globalIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);

				/// <summary>
				/// 获取最大全局索引下标
				/// </summary>
				/// <returns>失败返回-1</returns>
				ev_int32 getMaxGlobalIndex();
                /// <summary>
                /// 获得子模型的索引
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>子模型索引</returns>
                ev_uint16 _getSubMeshIndex(const EVString &name) const;
                /// <summary>
                /// 获得子模型的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumSubMeshes() const;
                /// <summary>
                /// 获得指向子模型的指针
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CSubMesh *getSubMesh(ev_uint16 index) const;
                /// <summary>
                /// 通过给定的名称获得子模型
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CSubMesh *getSubMesh(const EVString &name) const ;
                /// <summary>
                /// 销毁已给索引指向的子模型
                /// </summary>
                /// <param name="index">索引值</param>
                /// <returns></returns>
                void destroySubMesh(ev_uint16 index);
                /// <summary>
                /// 销毁已给名称标识的子模型
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                void destroySubMesh(const EVString &name);
                class EV_GRAPHIC_DLL SubMeshIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SubMeshIterator(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CMesh::SubMeshList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef SubMeshList::iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    SubMeshIterator(IteratorType start, IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CMesh::SubMeshIterator &operator=(_in const EarthView::World::Graphic::CMesh::SubMeshIterator &other);
                    /// <summary>
                    /// 返回集合中的当前元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回集合中当前元素的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PointerType peekNextPtr ()  const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();

                    /// <summary>
                    /// 返回首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回末尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>末尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前迭代器</returns>
                    const IteratorType &current();
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec"></param>
                    /// <returns></returns>
                    SubMeshIterator(EarthView::World::Graphic::CMesh::SubMeshList &vec);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs"></param>
                    /// <returns></returns>
                    SubMeshIterator(const SubMeshIterator &rhs);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~SubMeshIterator();
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前值</returns>
                    EarthView::World::Graphic::CSubMesh *getCurrent();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CSubMesh *next();
                    /// <summary>
                    /// 返回容器首值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    EarthView::World::Graphic::CSubMesh *getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    EarthView::World::Graphic::CSubMesh *getEnd();
                private:
                    InternalIterator *mIterator;
                };
                /// <summary>
                /// 获得一个遍历子模型的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMesh::SubMeshIterator getSubMeshIterator();
                /// 共享顶点数据
                EarthView::World::Graphic::CVertexData *sharedVertexData;
                /// 共享的索引map转换混合索引到骨骼索引
                EarthView::World::Graphic::IndexMap sharedBlendIndexToBoneIndexMap;
                /// <summary>
                /// 克隆模型对象，并赋予一个新的名称
                /// </summary>
                /// <param name="newName">克隆模型的新名称</param>
                /// <param name="newGroup">新组的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr clone(const EVString &newName, const EVString &newGroup);
                /// <summary>
                /// 克隆模型对象，并赋予一个新的名称
                /// </summary>
                /// <param name="newName">克隆模型的新名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr clone(const EVString &newName);
                /// <summary>
                /// 获得该模型的边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBounds()const;
                /// <summary>
                /// 获得边框盒的半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒半径</returns>
                Real getBoundingSphereRadius() const;
                /// <summary>
                /// 设置该模型的边框盒
                /// </summary>
                /// <param name="bounds">边框</param>
                /// <param name="pad">设置为true，外围盒外扩</param>
                /// <returns></returns>
                void _setBounds(const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds, ev_bool pad)const;
                /// <summary>
                /// 设置该模型的边框盒
                /// </summary>
                /// <param name="bounds">边框</param>
                /// <returns></returns>
                void _setBounds(const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds)const;
                /// <summary>
                /// 设置边框盒半径
                /// </summary>
                /// <param name="radius">半径</param>
                /// <returns></returns>
                void _setBoundingSphereRadius(Real radius);
                /// <summary>
                /// 设置骨骼动画
                /// </summary>
                /// <param name="skelName">骨骼文件的名称</param>
                /// <returns></returns>
                void setSkeletonName(const EVString &skelName);
                /// <summary>
                /// 判断该模型是否有骨骼动画
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果有连接的骨骼返回true</returns>
                ev_bool hasSkeleton() const;
                /// <summary>
                /// 判断该模型是否有顶点动画
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果有顶点动画返回true，否则返回false</returns>
                ev_bool hasVertexAnimation() const;
                /// <summary>
                /// 获得骨骼动画
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回骨骼的引用</returns>
                const EarthView::World::Graphic::CSkeletonPtr &getSkeleton() const;
                /// <summary>
                /// 获得骨骼动画的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getSkeletonName() const;
                /// <summary>
                /// 初始化动画集合
                /// </summary>
                /// <param name="animSet">指向动画集合的指针</param>
                /// <returns></returns>
                void _initAnimationState(EarthView::World::Graphic::CAnimationStateSet *animSet);
                /// <summary>
                /// 刷新动画集合
                /// </summary>
                /// <param name="animSet">指向动画集合的指针</param>
                /// <returns></returns>
                void _refreshAnimationState(EarthView::World::Graphic::CAnimationStateSet *animSet);
                /// <summary>
                /// 为骨骼动画的带有权重值的骨头分配顶点
                /// </summary>
                /// <param name="vertBoneAssign"></param>
                /// <returns></returns>
                void addBoneAssignment(const EarthView::World::Graphic::VertexBoneAssignment &vertBoneAssign);
                /// <summary>
                /// 去除掉该模型的所有骨头分配
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearBoneAssignments();
                /// <summary>
                /// 通报骨骼动画
                /// </summary>
                /// <param name="pSkel"></param>
                /// <returns></returns>
                void _notifySkeleton(EarthView::World::Graphic::CSkeletonPtr &pSkel);
                /// <summary>
                /// 获得一个遍历所有骨头分配的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::BoneAssignmentIterator getBoneAssignmentIterator();
                /// <summary>
                /// 获得骨头分配列表的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &getBoneAssignments() const;
                /// <summary>
                /// 返回该模型支持的细节等级的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>细节等级数量</returns>
                ev_uint16 getNumLodLevels() const;
                /// <summary>
                /// 获得已编号的细节等级实体的细节
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::MeshLodUsage &getLodLevel(ev_uint16 index) const;
                /// <summary>
                /// 向模型中添加一个手动的细节等级实体
                /// </summary>
                /// <param name="value">细节等级应用的值</param>
                /// <param name="meshName">模型的名称</param>
                /// <param name="groupName">组的名称</param>
                /// <returns></returns>
                void createManualLodLevel(Real value, const EVString &meshName, const EVString &groupName);
                /// <summary>
                /// 向模型中添加一个手动的细节等级实体
                /// </summary>
                /// <param name="value">细节等级应用的值</param>
                /// <param name="meshName">模型的名称</param>
                /// <returns></returns>
                void createManualLodLevel(Real value, const EVString &meshName);
                /// <summary>
                /// 更新该模型的细节等级
                /// </summary>
                /// <param name="index">细节等级的索引</param>
                /// <param name="meshName">模型的名称</param>
                /// <returns></returns>
                void updateManualLodLevel(ev_uint16 index, const EVString &meshName);
                /// <summary>
                /// 获得已给细节等级值的索引
                /// </summary>
                /// <param name="value">细节等级值</param>
                /// <returns></returns>
                ev_uint16 getLodIndex(Real value) const;
                /// <summary>
                /// 判断该模型是否正在使用手动细节等级
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果使用手动细节等级返回true，否则返回false</returns>
                ev_bool isLodManual() const;
                /** Internal methods for loading LOD, do not use. */
                void _setLodInfo(ev_uint16 numLevels, ev_bool isManual);
                /** Internal methods for loading LOD, do not use. */
                void _setLodUsage(ev_uint16 level, EarthView::World::Graphic::MeshLodUsage &usage);
                /** Internal methods for loading LOD, do not use. */
                void _setSubMeshLodFaceList(ev_uint16 subIdx, ev_uint16 level, EarthView::World::Graphic::CIndexData *facedata);
                /// <summary>
                /// 从该模型中去除掉所有的细节等级数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeLodLevels();
                /// <summary>
                /// 当下载模型时，设置顶点缓冲使用的策略
                /// </summary>
                /// <param name="usage">用法标记</param>
                /// <param name="shadowBuffer">如果设置为true，将会创建一个带阴影缓存的顶点缓存</param>
                /// <returns></returns>
                void setVertexBufferPolicy(EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool shadowBuffer);
                /// <summary>
                /// 当下载模型时，设置顶点缓冲使用的策略
                /// </summary>
                /// <param name="usage">用法标记</param>
                /// <returns></returns>
                void setVertexBufferPolicy(EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /// <summary>
                /// 当下载模型时，设置索引缓冲使用的策略
                /// </summary>
                /// <param name="usage">用法标记</param>
                /// <param name="shadowBuffer">如果设置为true，将会创建一个带阴影缓存的索引缓存</param>
                /// <returns></returns>
                void setIndexBufferPolicy(EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool shadowBuffer);
                /// <summary>
                /// 当下载模型时，设置索引缓冲使用的策略
                /// </summary>
                /// <param name="usage">用法标记</param>
                /// <returns></returns>
                void setIndexBufferPolicy(EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /// <summary>
                /// 获得该模型顶点缓存的用法设置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CHardwareBuffer::Usage getVertexBufferUsage() const;
                /// <summary>
                /// 获得该模型索引缓存的用法设置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CHardwareBuffer::Usage getIndexBufferUsage() const;
                /// <summary>
                /// 判断是否该模型顶点缓存附有阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isVertexBufferShadowed() const;
                /// <summary>
                /// 判断是否该模型索引缓存附有阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isIndexBufferShadowed() const;

                /** Rationalises the passed in bone assignment list.
                @remarks
                EV_World supports up to 4 bone assignments per vertex. The reason for this limit
                is that this is the maximum number of assignments that can be passed into
                a hardware-assisted blending algorithm. This method identifies where there are
                more than 4 bone assignments for a given vertex, and eliminates the bone
                assignments with the lowest weights to reduce to this limit. The remaining
                weights are then re-balanced to ensure that they sum to 1.0.
                @param vertexCount The number of vertices.
                @param assignments The bone assignment list to rationalise. This list will be modified and
                entries will be removed where the limits are exceeded.
                @returns The maximum number of bone assignments per vertex found, clamped to [1-4]
                */
                ev_uint16 _rationaliseBoneAssignments(ev_size_t vertexCount, EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &assignments);
                /// <summary>
                /// 编辑骨骼分配到几何缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _compileBoneAssignments();
                /// <summary>
                /// 更新已编辑的骨骼分配
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _updateCompiledBoneAssignments();
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <param name="sourceTexCoordSet">纹理坐标索引，2D的纹理坐标源</param>
                /// <param name="index">元素索引</param>
                /// <param name="splitMirrored">设置是否分离顶点，当一个镜像的切线空间转换被检查到</param>
                /// <param name="splitRotated">设置是否分离顶点，当一个选装的切线空间转换被检查到</param>
                /// <param name="storeParityInW">设置是否存储4维向量</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                                         ev_uint16 sourceTexCoordSet, ev_uint16 index,
                                         ev_bool splitMirrored , ev_bool splitRotated , ev_bool storeParityInW);
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <param name="sourceTexCoordSet">纹理坐标索引，2D的纹理坐标源</param>
                /// <param name="index">元素索引</param>
                /// <param name="splitMirrored">设置是否分离顶点，当一个镜像的切线空间转换被检查到</param>
                /// <param name="splitRotated">设置是否分离顶点，当一个选装的切线空间转换被检查到</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                                         ev_uint16 sourceTexCoordSet, ev_uint16 index, ev_bool splitMirrored, ev_bool splitRotated );
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <param name="sourceTexCoordSet">纹理坐标索引，2D的纹理坐标源</param>
                /// <param name="index">元素索引</param>
                /// <param name="splitMirrored">设置是否分离顶点，当一个镜像的切线空间转换被检查到</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic , ev_uint16 sourceTexCoordSet , ev_uint16 index , ev_bool splitMirrored);
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <param name="sourceTexCoordSet">纹理坐标索引，2D的纹理坐标源</param>
                /// <param name="index">元素索引</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic, ev_uint16 sourceTexCoordSet, ev_uint16 index );
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <param name="sourceTexCoordSet">纹理坐标索引，2D的纹理坐标源</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic, ev_uint16 sourceTexCoordSet);
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name="targetSemantic">存储切线</param>
                /// <returns></returns>
                void buildTangentVectors(EarthView::World::Graphic::VertexElementSemantic targetSemantic);
                /// <summary>
                /// 建立已给模型的切向量集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void buildTangentVectors();
                /** Ask the mesh to suggest parameters to a future buildTangentVectors call,
                should you wish to use texture coordinates to store the tangents.
                @remarks
                This helper method will suggest source and destination texture coordinate sets
                for a call to buildTangentVectors. It will detect when there are inappropriate
                conditions (such as multiple geometry sets which don't agree).
                Moreover, it will return 'true' if it detects that there are aleady 3D
                coordinates in the mesh, and therefore tangents may have been prepared already.
                @param targetSemantic The semantic you intend to use to store the tangents
                if they are not already present;
                most likely options are VES_TEXTURE_COORDINATES or VES_TANGENT; you should
                use texture coordinates if you want compatibility with older, pre-SM2
                graphics cards, and the tangent binding otherwise.
                @param outSourceCoordSet Reference to a source texture coordinate set which
                will be populated
                @param outIndex Reference to a destination element index (e.g. texture coord set)
                which will be populated
                */
                ev_bool suggestTangentVectorBuildParams(EarthView::World::Graphic::VertexElementSemantic targetSemantic,
                                                        ev_uint16 &outSourceCoordSet, ev_uint16 &outIndex);
                /// <summary>
                /// 建立模型的边界列表，被用来产生阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void buildEdgeList();
                /// <summary>
                /// 销毁或是释放该模型建立的边界列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void freeEdgeList();
                /// <summary>
                /// 该方法为产生可渲染阴影准备模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void prepareForShadowVolume();
                /// <summary>
                /// 获得模型的边界列表
                /// </summary>
                /// <param name="lodIndex">细节等级索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CEdgeData *getEdgeList(ev_uint16 lodIndex);
                /// <summary>
                /// 获得模型的边界列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CEdgeData *getEdgeList();
                /// <summary>
                /// 获得模型的边界列表
                /// </summary>
                /// <param name="lodIndex">细节等级索引</param>
                /// <returns></returns>
                const EarthView::World::Graphic::CEdgeData *getEdgeList(ev_uint16 lodIndex) const;
                /// <summary>
                /// 获得模型的边界列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CEdgeData *getEdgeList() const;
                /// <summary>
                /// 判断该模型是否准备了渲染阴影的几何体
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果是返回true,否则返回false</returns>
                ev_bool isPreparedForShadowVolumes() const;
                /// <summary>
                /// 判断该模型是否有附加的边界列表
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果是返回true,否则返回false</returns>
                ev_bool isEdgeListBuilt() const;
                /// <summary>
                /// 准备软件顶点混合的矩阵
                /// </summary>
                /// <param name="blendMatrices">指向矩阵指针的指针，存储结果</param>
                /// <param name="boneMatrices">指向一组矩阵的指针，用来混合</param>
                /// <param name="indexMap">索引map转换混合索引到骨骼索引</param>
                /// <returns></returns>
                static void prepareMatricesForVertexBlend(const EarthView::World::Spatial::Math::CMatrix4 **blendMatrices,
                        const EarthView::World::Spatial::Math::CMatrix4 *boneMatrices, const EarthView::World::Graphic::IndexMap &indexMap);
                /// <summary>
                /// 执行软件的顶点混合
                /// </summary>
                /// <param name="sourceVertexData">顶点源数据</param>
                /// <param name="targetVertexData">顶点目标数据</param>
                /// <param name="blendMatrices">指向矩阵指针的指针</param>
                /// <param name=" numMatrices">混合矩阵中矩阵的数目</param>
                /// <param name="blendNormals">如果为ture,法线也像位置信息一样被混合</param>
                /// <returns></returns>
                static void softwareVertexBlend(const EarthView::World::Graphic::CVertexData *sourceVertexData,
                                                const EarthView::World::Graphic::CVertexData *targetVertexData,
                                                const EarthView::World::Spatial::Math::CMatrix4 *const *blendMatrices, ev_size_t numMatrices,
                                                ev_bool blendNormals);
                /// <summary>
                /// 执行软件顶点变形，用于变形动画
                /// </summary>
                /// <param name="t">起始缓冲位置和终点缓冲位置的距离</param>
                /// <param name="b1">顶点缓存</param>
                /// <param name="b2">顶点缓存</param>
                /// <param name="targetVertexData">目标顶点数据</param>
                /// <returns></returns>
                static void softwareVertexMorph(Real t,
                                                const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &b1,
                                                const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &b2,
                                                EarthView::World::Graphic::CVertexData *targetVertexData);
                /// <summary>
                /// 执行软件顶点的姿态混合
                /// </summary>
                /// <param name="weight">测量偏移量的权重</param>
                /// <param name="vertexOffsetMap"></param>
                /// <param name="targetVertexData">目标顶点数据</param>
                /// <returns></returns>
                static void softwareVertexPoseBlend(Real weight,
                                                    const EarthView::World::Graphic::CPose::VertexOffsetMap &vertexOffsetMap,
                                                    const EarthView::World::Graphic::CPose::NormalsMap &normalsMap,
                                                    EarthView::World::Graphic::CVertexData *targetVertexData);
                /** Gets a reference to the optional name assignments of the SubMeshes. */
                const EarthView::World::Graphic::CMesh::SubMeshNameMap &getSubMeshNameMap() const;
                /// <summary>
                /// 设置该模型是否应该自动建立边界列表
                /// </summary>
                /// <param name="autobuild"></param>
                /// <returns></returns>
                void setAutoBuildEdgeLists(ev_bool autobuild);
                /// <summary>
                /// 获得该模型是否设置自动建立边界列表
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果设置返回true,否则返回false</returns>
                ev_bool getAutoBuildEdgeLists() const;
                /// <summary>
                /// 获得该模型支持的顶点动画类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::VertexAnimationType getSharedVertexDataAnimationType() const;
                //// Returns whether animation on shared vertex data includes normals
                ev_bool getSharedVertexDataAnimationIncludesNormals() const
                {
                    return mSharedVertexDataAnimationIncludesNormals;
                }

                /// <summary>
                /// 基于变形动画轨迹获得指向顶点数据元素的指针
                /// </summary>
                /// <param name="handle">句柄</param>
                /// <returns></returns>
                EarthView::World::Graphic::CVertexData *getVertexDataByTrackHandle(ev_uint16 handle);
                /// <summary>
                /// 应用材质纹理的别名，遍历所有的子模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void updateMaterialForAllSubMeshes();
                /// <summary>
                /// 如果动画的类型还没有确定，扫描所有的顶点动画并决定顶点数据集的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _determineAnimationTypes() const;
                /** Are the derived animation types out of date? */
                ev_bool _getAnimationTypesDirty() const;
                /// <summary>
                /// 为该模型或者是子模型创建一个新的姿态
                /// </summary>
                /// <param name="target">目标几何体索引</param>
                /// <param name="name">姿态名称</param>
                /// <returns>返回一个新的姿态</returns>
                EarthView::World::Graphic::CPose *createPose(ev_uint16 target, const EVString &name );
                /// <summary>
                /// 为该模型或者是子模型创建一个新的姿态动画
                /// </summary>
                /// <param name="target">目标几何体索引</param>
                /// <returns>返回一个新的姿态动画</returns>
                EarthView::World::Graphic::CPose *createPose(ev_uint16 target);
                /// <summary>
                /// 获得姿态动画的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t getPoseCount() const;
                /// <summary>
                /// 通过索引获得一个已存在的姿态动画
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPose *getPose(ev_uint16 index);
                /// <summary>
                /// 通过名称获得一个已存在的姿态动画
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPose *getPose(const EVString &name);
                /// <summary>
                /// 通过索引删除一个已存在的姿态动画
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                void removePose(ev_uint16 index);
                /// <summary>
                /// 通过名称删除一个已存在的姿态动画
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                void removePose(const EVString &name);
                /// <summary>
                /// 删除所有的姿态动画
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllPoses();
                class EV_GRAPHIC_DLL ConstPoseIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ConstPoseIterator(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::PoseList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef PoseList::const_iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ConstPoseIterator(IteratorType start, IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CMesh::ConstPoseIterator &operator=(_in const EarthView::World::Graphic::CMesh::ConstPoseIterator &other);
                    /// <summary>
                    /// 返回集合中的当前元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();

                    /// <summary>
                    /// 返回首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回末尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>末尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前迭代器</returns>
                    const IteratorType &current();
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec"></param>
                    /// <returns></returns>
                    ConstPoseIterator(EarthView::World::Graphic::PoseList &vec);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs"></param>
                    /// <returns></returns>
                    ConstPoseIterator(const ConstPoseIterator &rhs);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ConstPoseIterator();
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前值</returns>
                    EarthView::World::Graphic::CPose *getCurrent();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CPose *next();
                    /// <summary>
                    /// 返回容器首值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    EarthView::World::Graphic::CPose *getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    EarthView::World::Graphic::CPose *getEnd();
                private:
                    InternalIterator *mIterator;
                };
                class EV_GRAPHIC_DLL PoseIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PoseIterator(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::PoseList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef PoseList::iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    PoseIterator(IteratorType start, IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CMesh::PoseIterator &operator=(_in const EarthView::World::Graphic::CMesh::PoseIterator &other);
                    /// <summary>
                    /// 返回集合中的当前元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回集合中当前元素的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PointerType peekNextPtr ()  const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();

                    /// <summary>
                    /// 返回首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回末尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>末尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前迭代器</returns>
                    const IteratorType &current();
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec"></param>
                    /// <returns></returns>
                    PoseIterator(EarthView::World::Graphic::PoseList &vec);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs"></param>
                    /// <returns></returns>
                    PoseIterator(const PoseIterator &rhs);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~PoseIterator();
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前值</returns>
                    EarthView::World::Graphic::CPose *getCurrent();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CPose *next();
                    /// <summary>
                    /// 返回容器首值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    EarthView::World::Graphic::CPose *getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    EarthView::World::Graphic::CPose *getEnd();
                private:
                    InternalIterator *mIterator;
                };
                /// <summary>
                /// 获得遍历姿态动画的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMesh::PoseIterator getPoseIterator();
                /// <summary>
                /// 获得遍历姿态动画的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMesh::ConstPoseIterator getPoseIterator() const;
                /// <summary>
                /// 获得姿态动画列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::PoseList &getPoseList() const;
                /// <summary>
                /// 获得该模型细节等级策略
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CLodStrategy *getLodStrategy() const;
                /// <summary>
                /// 设置该模型细节等级策略
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setLodStrategy(EarthView::World::Graphic::CLodStrategy *lodStrategy);

				/// <summary>
				/// 从内存流加载模型，本函数是为了手动加载模型，请勿单独使用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void loadFromDataStream(EarthView::World::Core::DataStreamPtr stream);
            };
            class EV_GRAPHIC_DLL VertexBoneAssignmentPair : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                VertexBoneAssignmentPair(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                VertexBoneAssignmentPair();
                ev_size_t first;
                EarthView::World::Graphic::VertexBoneAssignment second;
            };
            class EV_GRAPHIC_DLL BoneAssignmentIterator: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CMesh::VertexBoneAssignmentList> InternalIterator;
                typedef InternalIterator::const_iterator const_iterator;
                typedef InternalIterator::iterator iterator;
                typedef InternalIterator::const_iterator IteratorType;
                typedef InternalIterator::PairType PairType;
                typedef InternalIterator::KeyType KeyType;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="first">首迭代器</param>
                /// <param name="last">尾迭代器</param>
                /// <returns></returns>
                BoneAssignmentIterator(_in iterator first, _in iterator last);
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">NodeTrackIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::BoneAssignmentIterator &operator=(_in const EarthView::World::Graphic::BoneAssignmentIterator &other);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~BoneAssignmentIterator();
                /// <summary>
                /// 返回容器当前的键
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的键</returns>
                KeyType peekNextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType peekNextValue (  ) const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值指针</returns>
                const PointerType peekNextValuePtr ();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType getNext();

                /// <summary>
                /// 返回容器首迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器首迭代器</returns>
                const IteratorType &begin();
                /// <summary>
                /// 返回容器当前迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器当前迭代器</returns>
                IteratorType &current();
                /// <summary>
                /// 返回容器尾迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器尾迭代器</returns>
                const IteratorType &end();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                BoneAssignmentIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="lst">迭代器对应集合</param>
                /// <returns></returns>
                BoneAssignmentIterator(_in EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &lst);
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="other">其它迭代器</param>
                /// <returns></returns>
                BoneAssignmentIterator( _in const BoneAssignmentIterator &other);
                /// <summary>
                /// 判断迭代器是否到达容器末尾
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则false</returns>
                ev_bool hasMoreElements ( ) const;
                /// <summary>
                /// 迭代器位置后移
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void moveNext (  );
                /// <summary>
                /// 返回容器当前的键
                /// </summary>
                /// <param name=""></param>
                /// <returns>键</returns>
                EVString nextKey() const;
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::VertexBoneAssignment nextValue() const;
                /// <summary>
                /// 返回容器当前的值指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>值地址</returns>
                EarthView::World::Graphic::VertexBoneAssignment *nextValuePtr();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                EarthView::World::Graphic::VertexBoneAssignment next();
                /// <summary>
                /// 返回容器首键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                const EarthView::World::Graphic::VertexBoneAssignmentPair &getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                const EarthView::World::Graphic::VertexBoneAssignmentPair &getEnd();
                /// <summary>
                /// 返回容器当前键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前键值对</returns>
                const EarthView::World::Graphic::VertexBoneAssignmentPair &getCurrent();

            private:
                InternalIterator *mIterator;
                EarthView::World::Graphic::VertexBoneAssignmentPair mBeginPair;
                EarthView::World::Graphic::VertexBoneAssignmentPair mCurrentPair;
                EarthView::World::Graphic::VertexBoneAssignmentPair mEndPair;
                EarthView::World::Graphic::VertexBoneAssignment mptr;
                ValueType mvt;
            };

        }
    }
}
/// namespace
#endif

