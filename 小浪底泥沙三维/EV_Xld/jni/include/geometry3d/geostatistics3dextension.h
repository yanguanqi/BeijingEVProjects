#ifndef GEOSTATISTICS3DEXTENSION_H
#define GEOSTATISTICS3DEXTENSION_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/isymbol.h"
#include "geometry3d/vertex.h"
#include "graphic/entity.h"
#include "graphic/texturemovabletext.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			struct FillVert;
			/// <summary>
			/// 三维统计专题图扩展类
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeoStatistics3DExtension : public EarthView::World::Core::CAllocatedObject
			{
			public:

				/// <summary>
				/// 存放符号和偏移矩阵的结构体
				/// </summary>
				class EV_GEOMETRY3D_DLL TagSymbolTransform : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 封装构造函数
					/// </summary>
					/// <param name="pList">键值对</param>
					/// <returns></returns>
					TagSymbolTransform(_in EarthView::World::Core::CNameValuePairList* pList);
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					TagSymbolTransform();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~TagSymbolTransform();

					EarthView::World::Spatial::Display::ISymbol* mpSymbol;
					EarthView::World::Spatial::Math::CMatrix4 mMatrix4;
				};

ev_private:
				/// <summary>
				/// 封装构造函数
				/// </summary>
				/// <param name="pList">键值对</param>
				/// <returns></returns>
				CGeoStatistics3DExtension(_in EarthView::World::Core::CNameValuePairList* pList);
			public:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="smg">场景管理器</param>
				/// <returns></returns>
				CGeoStatistics3DExtension(EarthView::World::Graphic::CSceneManager* smg);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGeoStatistics3DExtension();

				/// <summary>
				/// 添加符号、偏移矩阵
				/// </summary>
				/// <param name="symbol">符号</param>
				/// <param name="matrix">偏移矩阵</param>
				/// <returns></returns>
				ev_void addSymbolTransform(const EarthView::World::Spatial::Display::ISymbol* symbol, const EarthView::World::Spatial::Math::CMatrix4& matrix);

				/// <summary>
				/// 设置符号、偏移矩阵
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="symbol">符号</param>
				/// <param name="matrix">矩阵</param>
				/// <returns></returns>
				ev_void setSymbolTransform(ev_uint32 index, const EarthView::World::Spatial::Display::ISymbol* symbol, const EarthView::World::Spatial::Math::CMatrix4* matrix);

				/// <summary>
				/// 获取符号偏移矩阵个数
				/// </summary>
				/// <param name="index"></param>
				/// <returns>个数</returns>
				ev_uint32 getSymbolTransformCount() const;

				/// <summary>
				/// 获取符号偏移矩阵
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>偏移矩阵</returns>
				EarthView::World::Spatial::Math::CMatrix4 getTransformMatrix(ev_uint32 index) const;

				/// <summary>
				/// 获取符号
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>符号</returns>
				EarthView::World::Spatial::Display::ISymbol* getSymbol(ev_uint32 index) const;

				/// <summary>
				/// 设置八叉树索引的中心点位置
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>符号</returns>
				ev_void setPosition(const EarthView::World::Spatial::Math::CVector3& position);

				/// <summary>
				/// 建立三维统计专题图扩展对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void build();

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void render();

				/// <summary>
				/// 更新字体注记
				/// </summary>
				/// <param name="resetTextStyle">是否重置字体的样式</param>
				/// <param name="derenderTxt">是否不渲染字体</param>
				/// <param name="reCreate">是否重新创建</param>
				/// <param name="attachLabel">是否挂接</param>
				/// <param name="psymbol">存放字体风格的符号</param>
				/// <returns>如果返回true，则更新字体成功，否则失败</returns>
				ev_bool updateLabel(ev_bool resetTextStyle,ev_bool derenderTxt,ev_bool reCreate,ev_bool attachLabel, EarthView::World::Spatial::Display::ISymbol* psymbol);

				/// <summary>
				/// 不渲染字体以及扩展对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void derender();

				ev_void layoutLabels();

				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				/// <returns></returns>
				virtual ev_void setLabelVisibleDistance(ev_real64 dis);

				/// <summary>
				/// 设置不可见索引
				/// </summary>
				/// <param name="indices">不可见索引</param>
				/// <returns></returns>
				virtual ev_bool setInvisibleIndices(EarthView::World::Core::IntVector indices);
			private:
				ev_void buildPieGeometry();
				ev_void buildBarGeometry();
				ev_void buildStatckedGeometry();
				ev_void writeBuffer(list<FillVert>& vertexVector, list<ev_uint32>& indexVector);
				ev_void calculateFieldValueRatio(EarthView::World::Spatial::Display::ISymbol* psymbol);
				EarthView::World::Core::CUnicodeString setLabelText(EarthView::World::Spatial::Display::ISymbol* symbol, ev_uint32 index);
				ev_void setLabelStyle();

				ev_void reset();
				ev_void resetLabel();

				ev_void derenderLabels();
				ev_void createLabels();
				ev_void renderLabels();

				ev_void cartesion2pixel( const EarthView::World::Spatial::Math::CVector3& worldPt, EarthView::World::Graphic::CViewport* vp, _out ev_real64& px,_out ev_real64& py );

				EarthView::World::Graphic::CEntity* mpEntity;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EarthView::World::Spatial::Math::CVector3 mPosition;

				list<EarthView::World::Spatial::Math::CVector3> mVLabelPosition;

				ev_vector<TagSymbolTransform*> mVSymbolTransform;
				list<EarthView::World::Graphic::CTextureMovableText*> mTextVector;
				EarthView::World::Graphic::CTextureTextStyle* mTextStyle;
				ev_real64 mExHeight;

				ev_bool mLabelCreated;
				ev_bool mLabelAttached;

				ev_real32 mLabelVisibleDis;

				set<ev_uint32> mInvisibleIndices;
			};
		}
	}
}
#endif
