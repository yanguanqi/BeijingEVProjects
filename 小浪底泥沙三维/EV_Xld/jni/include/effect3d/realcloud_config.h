#ifndef _REALCLOUDCONFIG_H
#define _REALCLOUDCONFIG_H
#include <vector>
#include <effect3d/effect3d_config.h>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
			}
			namespace Effect3D
			{
				class CRegionAtmosphere;
#define REALCLOUDRESOURCEGROUP "Caelum"

//云图图片大小
#define PICSIZE			2000
//网格段数
#define MESHSEGMENTS	360
//每个网格内划分的行列数
#define MESHSPLITNUM	4
//贴图大小
#define MAPTILESIZE   6
//云团初始数量
#define DEFAULTPOINTNUMBERS 8000
				
				//四叉树节点类型
				enum CloudTreeType
				{
					//左上
					CLOUDNW,
					//右上
					CLOUDNE,
					//左下
					CLOUDSW,
					//右下
					CLOUDSE,
					//左
					CLOUDLEFT,
					//右
					CLOUDRIGHT
				};
				inline int getIndex()
				{
					static int index = 0;
					return index++;
				}
			}
		}
	}
}
#endif 