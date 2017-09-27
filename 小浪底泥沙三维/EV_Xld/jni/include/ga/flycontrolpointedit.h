#ifndef FLYCONTROLPOINTEDITH_H
#define FLYCONTROLPOINTEDITH_H 1

#include "ga/evga_config.h"
#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "core/stdheaders.h"

#include "graphic/material.h"
#include "graphic/texture.h"
#include "graphic/simplerenderable.h"
#include "graphic/hardwareindexbuffer.h"

#include "mathengine/matrix4.h"
#include "mathengine/vector3.h"
#include "mathengine/ray.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
			class CSceneNode;
			class CSimpleRenderable;
			class CMovableObject;
			class CVertexData;
			class CIndexData;
			class CCamera;
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CPointEditRenderable:public EarthView::World::Graphic::CSimpleRenderable
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数的键值对表</param>
					/// <returns></returns>
					CPointEditRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPointEditRenderable();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CPointEditRenderable(_in const EVString &name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CPointEditRenderable();
					/// <summary>
					/// 获取当前相机
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns></returns>
					virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera *cam);
					/// <summary>
					/// 获取当前矩阵
					/// </summary>
					/// <param name="xform">矩阵</param>
					/// <returns></returns>
					virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const; 
					/// <summary>
					/// 获取临时矩阵
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CMatrix4 getMatrix() const;
				};
				class EV_GA_DLL CPointEdit:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneManger">场景管理器</param>
					/// <returns></returns>
					CPointEdit(_in EarthView::World::Graphic::CSceneManager* ref_sceneManger);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CPointEdit();
					/// <summary>
					/// 挎贝函数
					/// </summary>
					/// <returns></returns>
					CPointEdit(_in const CPointEdit& rhs);
					/// <summary>
					///返回场景节点
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CSceneNode* getNode() const;
					/// <summary>
					///设置场景节点的位置
					/// </summary>
					/// <param name="position">位置</param>
					/// <returns></returns>
					void  setPosition(_in const EarthView::World::Spatial::Math::CVector3& position);
					/// <summary>
					///判断射线是否与其相交
					/// </summary>
					/// <param name="ray">射线</param>
					/// <returns></returns>
					ev_bool intersect(_in const EarthView::World::Spatial::Math::CRay& ray);

				protected:
					/// <summary>
					/// 初始化
					/// </summary>
					/// <returns></returns>
					virtual void init();

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPointEdit(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					EarthView::World::Graphic::CSceneManager* mSceneManager;
					EarthView::World::Graphic::CVertexData* mPointEditVertexData;
					EarthView::World::Graphic::CIndexData* mPointEditIndexData;
					EarthView::World::Spatial3D::Controls::CPointEditRenderable* mPointEditRenderable;
					EarthView::World::Graphic::CSceneNode* mPointEditNode;
					EarthView::World::Graphic::CMaterialPtr mPointEditMaterialPtr;
					EarthView::World::Graphic::CTexturePtr mPointEditTexturePtr;
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mvertexBuffer;
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr mindexBuffer;
					EarthView::World::Spatial::Math::CMatrix4 mworldMatrix;
				};

				class EV_GA_DLL CPointEditList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Controls::CPointEdit*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CPointEditList::iterator insert(_in CPointEditList::iterator pos, _in CPointEdit *const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPointEditList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPointEditList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial3D::Controls::CPointEdit *const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::Controls::CPointEdit *const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Controls::CPointEdit *const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};
			}
		}
	}
}

#endif 
