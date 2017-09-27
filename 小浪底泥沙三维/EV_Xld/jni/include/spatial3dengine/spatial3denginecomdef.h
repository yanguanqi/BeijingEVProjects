#ifndef EARTHVIEW_WORLD_SPATIAL3D_COMMONDEFINE_H
#define EARTHVIEW_WORLD_SPATIAL3D_COMMONDEFINE_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "geometry3d/visibleobject.h"
#include "mathengine/axisalignedbox.h"
#include "graphic/material.h"
#include "graphic/texture.h"
#include "graphic/gpuprogram.h"
#include "graphic/subentity.h"
#include "graphic/instancedentity.h"
#include "spatialinterface/altitudemode.h"
#include "spatial3dengine/terrainrevisor.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CImage;
			class CInstancedEntity2;
			class CInstanceManager;
		}

		namespace Spatial
		{
			namespace Octree
			{
				class CBaseOctreeNode;
			}
		}

	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager
			{
				class CModelBaseObject;
				class CManualInstanceObject;
				class CManualModelObject;
			}
			namespace EffectManager
			{
				class CEffect;
			}

			class InstancedEntityVector;
			class CComponent;

			/// <summary>
			/// 可见模型对象状态
			/// </summary>
			/// <returns></returns>
			enum ModelObjectState
			{
				VOS_DECLARED=0,
				VOS_LOADED,
				VOS_ATTACHED,
				VOS_DETACHED,
				VOS_UNLOADED
			};

			enum Layer3DEditorType
			{
				LET_Model=0,
				LET_Effect
			};

			enum ModelType
			{
				MT_MODEL,
				MT_INSTANCE
			};

			enum BindedState
			{
				BDST_UnBind=0,
				BDST_BindedAtSubEntity,
				BDST_BindedAtBone,
				BDST_BindedAtNode
			};

			enum TextureState
			{
				TS_DECLARED=0,
				TS_THUMB,
				TS_ORIG
			};

			enum ModelCommandType
			{
				CT_UnKnown,
				CT_Select,
				CT_Edit
			};

			enum ModelRequestType
			{
				MRT_UNLOAD=0,
				MRT_THUMB,
				MRT_ORIG,
				MRT_LOAD,
				MRT_DECLARED,
			};

			enum RenderBoxType
			{
				RBT_OCTREEBOX_AND_LEATBOX=0, //渲染八叉树节点和叶子节点
				RBT_OCTREEBOX, //渲染八叉树节点
				RBT_LEATBOX //渲染叶子节点
			};

			class EV_Spatial3DEngine_DLL CMemoryDataStreamMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CMemoryDataStreamMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CMemoryDataStreamMap();
				/// <summary>
				/// 添加数据
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns></returns>
				ev_bool push(const EVString &key, EarthView::World::Core::MemoryDataStreamPtr const &val);
				/// <summary>
				/// 判断指的指定的键是否存在
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				ev_bool exist(const EVString &key);
				EarthView::World::Core::MemoryDataStreamPtr& operator[](const EVString &key);
				/// <summary>
				/// 根据指定的键返回值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				EarthView::World::Core::MemoryDataStreamPtr& get(EVString key);
				/// <summary>
				/// 根据指定的键删除数据
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				ev_void erase(const EVString &key);
				/// <summary>
				/// 返回长度
				/// </summary>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 清空
				/// </summary>
				/// <returns></returns>
				ev_void clear();
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <returns></returns>
				ev_bool empty() const;
ev_private:
				typedef map<EVString,EarthView::World::Core::MemoryDataStreamPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);

				CMemoryDataStreamMap::_Pairib insert(const value_type &val);
				CMemoryDataStreamMap::iterator find(const EVString &key);
				CMemoryDataStreamMap::const_iterator find(const EVString &key) const;

				ev_void operator = (const CMemoryDataStreamMap& rhs);
			private:
				InternalList mList;
			};

			class EV_Spatial3DEngine_DLL ExtOctNodeInfo : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				ExtOctNodeInfo(EarthView::World::Core::CNameValuePairList *pList)
				{
					frameNumber = 0;
					camDistance = 0;
					id = 0;
					code = "";
				}
			public:
				ev_uint32 frameNumber;
				ev_real64 camDistance;
				EarthView::World::Spatial::Math::CAxisAlignedBox box;
				ev_uint32 id;
				EVString code;
			public:
				ExtOctNodeInfo()
				{
					frameNumber = 0;
					camDistance = 0;
					id = 0;
					code = "";
				}

				friend std::ostream &operator <<( std::ostream &o, const ExtOctNodeInfo &res )
				{
					o << "" <<endl;
					return o;
				}
			};

			class EV_Spatial3DEngine_DLL OctNodeVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<ExtOctNodeInfo> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in ExtOctNodeInfo const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				OctNodeVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				OctNodeVector();

				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in ExtOctNodeInfo const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				ExtOctNodeInfo& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				ExtOctNodeInfo& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				ExtOctNodeInfo& at(_in ev_uint32 pos);

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				ExtOctNodeInfo const &at(_in ev_uint32 pos) const;

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in ExtOctNodeInfo const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				void swap(OctNodeVector& other);
			};

			class EV_Spatial3DEngine_DLL InternalObject : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				InternalObject(EarthView::World::Core::CNameValuePairList *pList)
				{
				}
			public:
				EarthView::World::Geometry3D::CVisibleObjectPtr mpModel;
				ExtOctNodeInfo* mpExtInfo;
			public:
				InternalObject();
				virtual ~InternalObject();
			};

			class  EV_Spatial3DEngine_DLL ImageItem : public EarthView::World::Core::CAllocatedObject
			{
			public:
				ImageItem()
				{
					mIndex =0;
					mpImg=NULL;
				}

ev_private:
				ImageItem(EarthView::World::Core::CNameValuePairList *pList)
				{
					mIndex =0;
					mpImg=NULL;
				}
			public:
				ev_uint32 mIndex;
				EarthView::World::Graphic::CImage* mpImg;
			};

			class EV_Spatial3DEngine_DLL ImageItemVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::ImageItem> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::ImageItem const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ImageItemVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ImageItemVector();

				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Spatial3D::ImageItem const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Spatial3D::ImageItem& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Spatial3D::ImageItem& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::ImageItem& at(_in ev_uint32 pos);

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::ImageItem const &at(_in ev_uint32 pos) const;

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::ImageItem const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void reserve(ev_size_t count);
			};

			class EV_Spatial3DEngine_DLL MaterialPtrVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CMaterialPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CMaterialPtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				MaterialPtrVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				MaterialPtrVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CMaterialPtr const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CMaterialPtr const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CMaterialPtr const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class EV_Spatial3DEngine_DLL TexturePtrVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CTexturePtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CTexturePtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				TexturePtrVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				TexturePtrVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CTexturePtr const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CTexturePtr& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CTexturePtr& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CTexturePtr& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CTexturePtr const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CTexturePtr const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class EV_Spatial3DEngine_DLL GpuPtrVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CGpuProgramPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CGpuProgramPtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				GpuPtrVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				GpuPtrVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CGpuProgramPtr const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CGpuProgramPtr& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CGpuProgramPtr& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CGpuProgramPtr& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CGpuProgramPtr const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CGpuProgramPtr const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class  EV_Spatial3DEngine_DLL InstanceManagerVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CInstanceManager*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CInstanceManager* const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				InstanceManagerVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				InstanceManagerVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CInstanceManager* const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CInstanceManager*& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CInstanceManager*& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CInstanceManager*& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CInstanceManager* const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CInstanceManager* const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class  EV_Spatial3DEngine_DLL InstancedEntityVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CInstancedEntity2*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CInstancedEntity2* const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				InstancedEntityVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				InstancedEntityVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CInstancedEntity2* const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CInstancedEntity2*& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CInstancedEntity2*& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CInstancedEntity2*& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CInstancedEntity2* const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedEntity2* const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class EV_Spatial3DEngine_DLL CEntitySpatialInfo : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				CEntitySpatialInfo(_in EarthView::World::Core::CNameValuePairList* pList)
				{
					mMeshName="";
					mMeshID=0;
					mAltitudeMode=EarthView::World::Spatial::Utility::AM_ClampToGround;
					mAltitudeValue=0;
					mEntID=0;

					mCameraLatitude=0;
					mCameraLongitude=0;
					mCameraHeading=0;
					mCameraTilt=0;
					mCameraAltitude=0;
				}
			public:
				CEntitySpatialInfo()
				{
					mMeshName="";
					mMeshID=0;
					mAltitudeMode=EarthView::World::Spatial::Utility::AM_ClampToGround;
					mAltitudeValue=0;
					mEntID=0;

					mCameraLatitude=0;
					mCameraLongitude=0;
					mCameraHeading=0;
					mCameraTilt=0;
					mCameraAltitude=0;
				}
				ev_uint32 mEntID;

				EVString mMeshName;
				ev_uint32 mMeshID;

				EarthView::World::Spatial::Math::CVector3 mPos;
				EarthView::World::Spatial::Math::CVector3 mScale;
				EarthView::World::Spatial::Math::CQuaternion mQua;

				EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
				ev_real32 mAltitudeValue;

				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;

				ev_real32 mCameraLatitude;
				ev_real32 mCameraLongitude;
				ev_real32 mCameraHeading;
				ev_real32 mCameraTilt;
				ev_real32 mCameraAltitude;
			};

			class  EV_Spatial3DEngine_DLL CEntitySpatialInfos : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CEntitySpatialInfo *> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::CEntitySpatialInfo *const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CEntitySpatialInfos(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEntitySpatialInfos();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Spatial3D::CEntitySpatialInfo *const &t);
				///// <summary>
				///// 在容器头部添加元素
				///// </summary>
				///// <param name="t">元素值</param>
				///// <returns></returns>
				//void push_front(_in CModelObjectBase *const   &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				///// <summary>
				///// 删除头部元素
				///// </summary>
				///// <param name=""></param>
				///// <returns></returns>
				//void pop_front();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Spatial3D::CEntitySpatialInfo*& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Spatial3D::CEntitySpatialInfo*& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::CEntitySpatialInfo*& at(_in ev_uint32 pos);
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CEntitySpatialInfo *const &t);
				///// <summary>
				///// 删除元素
				///// </summary>
				///// <param name="pos">位置</param>
				///// <returns></returns>
				//void remove(_in ev_size_t pos);
				///// <summary>
				///// 删除元素
				///// </summary>
				///// <param name="val">元素值</param>
				///// <returns></returns>
				//void remove( _in CModelObjectBase *const &val);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};

			class EV_Spatial3DEngine_DLL CMaterialResourceInfo : public EarthView::World::Core::CAllocatedObject
			{
			private:
				ev_uint32 mResourceID;
				EVString mFilename;
				ev_uint32 mDataSize;

				ev_uint32 mSubMeshIndex;
				ev_bool mChangeFromTemplate;
				ev_uint32 mRefCount;
				EarthView::World::Spatial3D::Dataset::MaterialResourceType mResourceType;
				ev_byte* mDataBuf;
ev_private:
				CMaterialResourceInfo(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CMaterialResourceInfo();
				virtual ~CMaterialResourceInfo();

				/// <summary>
				/// 设置资源引用数量
				/// </summary>
				/// <param name="count">数量</param>
				/// <returns></returns>

				void setRefCount(ev_uint32 count);

				/// <summary>
				/// 获取资源引用数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>数量</returns>

				ev_uint32 getRefCount();

				/// <summary>
				/// 设置资源id
				/// </summary>
				/// <param name="resourceID">资源ID</param>
				/// <returns></returns>

				void setResourceID(ev_uint32 resourceID);

				/// <summary>
				/// 获取资源id
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				ev_uint32 getResourceID();

				/// <summary>
				/// 设置资源文件名称
				/// </summary>
				/// <param name="filename">资源文件名称</param>
				/// <returns></returns>

				void setFilename(EVString filename);

				/// <summary>
				/// 获取资源文件名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				EVString getFilename();

				/// <summary>
				/// 设置资源数据大小
				/// </summary>
				/// <param name="size">资源大小</param>
				/// <returns></returns>

				void setDataSize(ev_uint32 size);

				/// <summary>
				/// 获取资源数据大小
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				ev_uint32 getDataSize();

				/// <summary>
				/// 设置数据源类型
				/// </summary>
				/// <param name="type">资源类型</param>
				/// <returns></returns>

				void setResourceType(EarthView::World::Spatial3D::Dataset::MaterialResourceType type);

				/// <summary>
				/// 获取数据源类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				EarthView::World::Spatial3D::Dataset::MaterialResourceType getResourceType();

				/// <summary>
				/// 设置submehs序号
				/// </summary>
				/// <param name="index">submesh序号</param>
				/// <returns></returns>

				void setSubMeshIndex(ev_uint32 index);

				/// <summary>
				/// 获取submesh序号
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>				
				ev_uint32 getSubMeshIndex();

				/// <summary>
				/// 设置从模板改变
				/// </summary>
				/// <param name="flag">true改变，false不改变</param>
				/// <returns></returns>				
				void setChangeFromTemplate(ev_bool flag);

				/// <summary>
				/// 获取是否改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>			
				ev_bool getChangeFromTemplate();

				/// <summary>
				/// 设置资源数据流
				/// </summary>
				/// <param name="buf">资源数据流</param>
				/// <returns></returns>			
				void setDataBufRef(ev_byte* buf);

				/// <summary>
				/// 获取资源数据流
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				ev_byte* getDataBufRef();
			};

			class EV_Spatial3DEngine_DLL CMeshDataInfo : public EarthView::World::Core::CAllocatedObject
			{
			private:
				ev_uint32 mMeshID;
				ev_uint32 mTemplateID;
				ev_uint32 mInstanceNum;
				double mMaxDistance;
				double mMinDistance;
				EVString mName;
				EVString mFileName;
				ev_byte* mDataBuf;
				ev_uint32 mDataSize;
				ev_uint32 mRefCount;
				vector<EarthView::World::Spatial3D::CMaterialResourceInfo*> mMaterialResources;
ev_private:
				CMeshDataInfo(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CMeshDataInfo();
				virtual ~CMeshDataInfo();

				/// <summary>
				/// 设置引用数量
				/// </summary>
				/// <param name="refCount">引用数量</param>
				/// <returns></returns>				
				void setRefCount(ev_uint32 refCount);

				/// <summary>
				/// 获取引用数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>			
				ev_uint32 getRefCount();

				/// <summary>
				/// 设置mesh id
				/// </summary>
				/// <param name="meshID">mesh ID</param>
				/// <returns></returns>				
				void setMeshID(ev_uint32 meshID);

				/// <summary>
				/// 获取mesh id
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>				
				ev_uint32 getMeshID();

				/// <summary>
				/// 设置模板id
				/// </summary>
				/// <param name="templateID">模板ID</param>
				/// <returns></returns>				
				void setTemplateID(ev_uint32 templateID);

				/// <summary>
				/// 获取模板id
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				ev_uint32 getTemplateID();

				/// <summary>
				/// 设置instance数量
				/// </summary>
				/// <param name="num">instance数量</param>
				/// <returns></returns>		
				void setInstanceNum(ev_uint32 num);

				/// <summary>
				/// 获取instance 数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getInstanceNum();

				/// <summary>
				/// 设置可视距离
				/// </summary>
				/// <param name="minDistance">最近距离</param>
				/// <param name="maxDistance">最远距离</param>
				/// <returns></returns>
				void setVisibleDistance(double minDistance, double maxDistance);

				/// <summary>
				/// 获取可视距离
				/// </summary>
				/// <param name="minDistance">最近距离</param>
				/// <param name="maxDistance">最远距离</param>
				/// <returns></returns>		
				void getVisibleDistance(double& minDistance, double& maxDistance);

				/// <summary>
				/// 设置mesh名称
				/// </summary>
				/// <param name="">mesh名称</param>
				/// <returns></returns>
				void setName(const EVString &name);

				/// <summary>
				/// 获取mesh名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getName();

				/// <summary>
				/// 设置mesh文件名称
				/// </summary>
				/// <param name="filename">mesh文件名称</param>
				/// <returns></returns>
				void setFileName(const EVString &filename);

				/// <summary>
				/// 获取mesh文件名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getFileName();

				/// <summary>
				/// 设置mesh数据流
				/// </summary>
				/// <param name="buf">mesh数据流</param>
				/// <returns></returns>
				void setDataBufRef(ev_byte* buf);

				/// <summary>
				/// 获取mesh数据流
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_byte* getDataBufRef();

				/// <summary>
				/// 设置mesh数据流大小
				/// </summary>
				/// <param name="size">数据流大小</param>
				/// <returns></returns>
				void setDataSize(ev_uint32 size);

				/// <summary>
				/// 获取mesh数据流大小
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getDataSize();

				/// <summary>
				/// 添加资源数据信息
				/// </summary>
				/// <param name="resource">资源信息</param>
				/// <returns></returns>
				void addResourceRef(EarthView::World::Spatial3D::CMaterialResourceInfo* resource);

				/// <summary>
				/// 获取资源数据信息
				/// </summary>
				/// <param name="index">标记索引</param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CMaterialResourceInfo* getResourceRef(ev_uint32 index);

				/// <summary>
				/// 获取资源数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getResourceNum();

				/// <summary>
				/// 克隆
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CMeshDataInfo* clone();

				/// <summary>
				/// 清理数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clearBuffer();
			};

			class EV_Spatial3DEngine_DLL CComponentVector:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CComponentVector(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CComponentVector();

ev_private:
				typedef vector<EarthView::World::Spatial3D::CComponent > InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个模型组件
				/// </summary>
				/// <param name="t">模型组件</param>
				/// <returns></returns>
				void push_back(EarthView::World::Spatial3D::CComponent const &t);

				/// <summary>
				/// 删除最后一个数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型组件的引用</returns>
				EarthView::World::Spatial3D::CComponent& front();

				/// <summary>
				/// 传回容器中最后一个模型组件,不检查这个模型组件是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型组件的引用</returns>
				EarthView::World::Spatial3D::CComponent& back();

				/// <summary>
				/// 在pos位置插入一个模型组件
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">模型组件</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, EarthView::World::Spatial3D::CComponent const &t);

				/// <summary>
				/// 删除pos位置的数据
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;


				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Spatial3D::CComponent& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Spatial3D::CComponent const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Spatial3D::CComponent& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Spatial3D::CComponent const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			class EV_Spatial3DEngine_DLL CSubEntityVector:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CSubEntityVector(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSubEntityVector();

ev_private:
				typedef vector<EarthView::World::Graphic::CSubEntity *> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个模型组件
				/// </summary>
				/// <param name="t">模型组件</param>
				/// <returns></returns>
				void push_back(EarthView::World::Graphic::CSubEntity *const &t);

				/// <summary>
				/// 删除最后一个数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型组件的引用</returns>
				EarthView::World::Graphic::CSubEntity*& front();

				/// <summary>
				/// 传回容器中最后一个模型组件,不检查这个模型组件是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型组件的引用</returns>
				EarthView::World::Graphic::CSubEntity*& back();

				/// <summary>
				/// 在pos位置插入一个模型组件
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">模型组件</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, EarthView::World::Graphic::CSubEntity *const &t);

				/// <summary>
				/// 删除pos位置的数据
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;


				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Graphic::CSubEntity*& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Graphic::CSubEntity *const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Graphic::CSubEntity*& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个模型组件的引用 </returns>
				EarthView::World::Graphic::CSubEntity *const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			struct ComponentUnit
			{
				ev_uint32 SubEntityIndex;
				ev_int32 IndexBegun;	//起始索引
				ev_int32 IndexEnd;		//终止索引
			};

			class EV_Spatial3DEngine_DLL ComponentUnits:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ComponentUnits(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ComponentUnits();

ev_private:
				typedef vector<EarthView::World::Spatial3D::ComponentUnit > InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个元素
				/// </summary>
				/// <param name="t">元素</param>
				/// <returns></returns>
				void push_back(EarthView::World::Spatial3D::ComponentUnit const &t);

				/// <summary>
				/// 删除最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素</returns>
				EarthView::World::Spatial3D::ComponentUnit& front();

				/// <summary>
				/// 传回容器中最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素</returns>
				EarthView::World::Spatial3D::ComponentUnit& back();

				/// <summary>
				/// 在pos位置插入一个元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, EarthView::World::Spatial3D::ComponentUnit const &t);

				/// <summary>
				/// 删除pos位置的元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;


				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的元素的引用 </returns>
				EarthView::World::Spatial3D::ComponentUnit& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的元素的引用 </returns>
				EarthView::World::Spatial3D::ComponentUnit const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的元素的引用 </returns>
				EarthView::World::Spatial3D::ComponentUnit& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的元素的引用 </returns>
				EarthView::World::Spatial3D::ComponentUnit const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			class EV_Spatial3DEngine_DLL CComponent:public EarthView::World::Core::CAllocatedObject
			{
				friend class EarthView::World::Spatial3D::ModelManager::CModelBaseObject;
				friend class EarthView::World::Spatial3D::ModelManager::CManualInstanceObject;
				friend class EarthView::World::Spatial3D::ModelManager::CManualModelObject;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CComponent(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CComponent();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CComponent();

				/// <summary>
				/// 返回组件名字
				/// </summary>
				/// <returns></returns>
				const EVString& getName()const;

				/// <summary>
				/// 设置组件名字
				/// </summary>
				/// <returns></returns>
				ev_void setName(const EVString& val);

				/// <summary>
				/// 返回组件下的子组件
				/// </summary>
				/// <returns></returns>
				const EarthView::World::Spatial3D::CComponentVector& getSubComponents()const;


				/// <summary>
				/// 返回组件下的组件单元集合
				/// </summary>
				/// <returns>索引集合</returns>
				const EarthView::World::Spatial3D::ComponentUnits& getComponentUnits()const;



				/// <summary>
				/// 返回组件下的模型的类型					
				/// </summary>
				/// <returns></returns>
				ModelType getModelType()const;

				/// <summary>
				/// 清除组件下的节点和subEntity
				/// </summary>
				/// <returns></returns>
				ev_void clear();

				const EarthView::World::Spatial::Math::CMatrix4& getOffsetMatrix();
				ev_void setOffsetMatrix(const EarthView::World::Spatial::Math::CMatrix4& offsetMatrix);

				const EarthView::World::Spatial::Math::CAxisAlignedBox& getBounds();

				ev_uint32 getID();
			ev_private:
				EarthView::World::Spatial3D::CComponentVector mSubComponents;				
				EarthView::World::Spatial3D::ComponentUnits mComponentUnits;				
				EVString name;
				EarthView::World::Spatial3D::ModelType mModelType;
				EarthView::World::Spatial::Math::CMatrix4 mOffsetMatrix;
				EarthView::World::Spatial::Math::CAxisAlignedBox mBounds;
				ev_uint32 mID;
			};

			/// <summary>
			/// 特效容器类
			/// </summary>
			class EV_Spatial3DEngine_DLL CEffectVector:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CEffectVector(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEffectVector();

ev_private:
				typedef vector<EarthView::World::Spatial3D::EffectManager::CEffect *> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个特效
				/// </summary>
				/// <param name="t">特效</param>
				/// <returns></returns>
				void push_back(EarthView::World::Spatial3D::EffectManager::CEffect *const &t);

				/// <summary>
				/// 删除最后一个数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效的引用</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect*& front();

				/// <summary>
				/// 传回容器中最后一个特效,不检查这个特效是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效的引用</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect*& back();

				/// <summary>
				/// 在pos位置插入一个特效
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">特效</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, EarthView::World::Spatial3D::EffectManager::CEffect *const &t);

				/// <summary>
				/// 删除pos位置的数据
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;


				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效的引用 </returns>
				EarthView::World::Spatial3D::EffectManager::CEffect*& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效的引用 </returns>
				EarthView::World::Spatial3D::EffectManager::CEffect *const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效的引用 </returns>
				EarthView::World::Spatial3D::EffectManager::CEffect*& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效的引用 </returns>
				EarthView::World::Spatial3D::EffectManager::CEffect *const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			class EV_Spatial3DEngine_DLL ModelDataStream : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ModelDataStream(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				ModelDataStream()
				{
					mpMeshFeature = NULL;
				}
				virtual ~ModelDataStream(){}
			public:
				void releaseAllFeature();
				void setAllFeatureDataStreamNull();

				EarthView::World::Spatial::GeoDataset::IFeature* mpMeshFeature;
				EarthView::World::Spatial3D::Dataset::FeatureVector mThumbTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector mOrigTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector mCubeTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector mMaterials;
				EarthView::World::Spatial3D::Dataset::FeatureVector mProgs;
				EarthView::World::Spatial3D::Dataset::FeatureVector mGpus;
				EarthView::World::Spatial3D::Dataset::FeatureVector mSkeletons;
				EarthView::World::Spatial3D::Dataset::FeatureVector mAnimations;
			};

			class EV_Spatial3DEngine_DLL ModelResource : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ModelResource(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				ModelResource(){}
				virtual ~ModelResource(){}
			public:
				EarthView::World::Graphic::CMeshPtr mMeshObj;
				EarthView::World::Graphic::CMeshPtr mMeshAnimationObj;
				EarthView::World::Spatial3D::TexturePtrVector mTextureObjs;
				EarthView::World::Spatial3D::TexturePtrVector mThumbTextureObjs;
				EarthView::World::Spatial3D::TexturePtrVector mCubeTextureObjs;			
				EarthView::World::Spatial3D::MaterialPtrVector mMaterialObjs;
				EarthView::World::Spatial3D::GpuPtrVector mGpuObjs;
				EarthView::World::Graphic::CSkeletonPtr mSkeletonObj;
			};

			class EV_Spatial3DEngine_DLL TerrainRevisorVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CTerrainRevisor> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::CTerrainRevisor const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				TerrainRevisorVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				TerrainRevisorVector();

				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Spatial3D::CTerrainRevisor const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Spatial3D::CTerrainRevisor& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Spatial3D::CTerrainRevisor& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::CTerrainRevisor& at(_in ev_uint32 pos);

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::CTerrainRevisor const &at(_in ev_uint32 pos) const;

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CTerrainRevisor const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void reserve(ev_size_t count);
			};
		}
	}
}
#endif
