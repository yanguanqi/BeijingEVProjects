#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELDATAPARAMS_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELDATAPARAMS_H

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 纹理合并、mesh合并的参数结构体
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CMeshParams:public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CMeshParams(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CMeshParams();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CMeshParams();

					/// <summary>
					/// 纹理渲染的类型
					/// </summary>
					enum CompositeType 
					{
						CT_EffectFirst, //渲染效果优先
						CT_EfficiencyFirst, //渲染效率优先
					};
					/// <summary>
					///CoordinateSystemType 坐标系的类型
					/// </summary>
					enum CSType 
					{
						CST_LeftHandle = 1,
						CST_RightHandle = 2,
					};


				public:
					ev_bool		   m_bOnlyForPC;		  // 是否只用于PC机
					ev_bool        m_bCreateLod;		  // 是否创建LOD
					ev_bool        m_bYAxisUp;			  // 是否Y轴向上
					ev_bool        m_bShareGeometry;	  // 是否共享顶点
					ev_bool        m_exportLine;		  // 是否导出线
					ev_bool        AnimationResample;	  // 设置帧动画重采样

					//     3dmax

					ev_bool		   mbImportModelDB;
					ev_bool        mbscenefile;          // 导数据集，并且scene文件来自文件夹 新加的
					ev_bool		   mbTraverseFolder;     // 是否循环遍历scene文件夹的子文件夹 新加的

					CSType         CoordType;          // 源坐标系 分左手系和右手系
					ev_int32       SrsID;              // 源坐标系的id标示

					ev_bool        CompositeSubMesh;   // 是否合并子网格
					ev_bool        BothSide;           // 是否双面贴图
					ev_bool        BuildEageList;      // 是否创建边列表 
					ev_bool        mbIsCompress;       // 是否压缩mesh和ani文件

					CompositeType  Method;             // 纹理合并的类型 

					ev_uint32      MaxWidth;            // 合并图片的最大宽度
					ev_uint32      MaxHeight;           // 合并图像的最大高度
					ev_uint32      Margin;              // 边沿像素

					ev_uint32		m_TextureCoordScope;	//纹理平铺上限。选择渲染效果优先时，当纹理寻址模式为wrap或者mirror的时候，纹理坐标值小于这个值的时候合并，否则不合并。合法值是大于或等于1的整形值。默认为1;

					ev_bool        m_bClearTarget;		  // 入库前是否清除目标

					static const CMeshParams DEFAULT;
					ev_byte AlphaRejection;
				};
			}
		}
	}
}
#endif

