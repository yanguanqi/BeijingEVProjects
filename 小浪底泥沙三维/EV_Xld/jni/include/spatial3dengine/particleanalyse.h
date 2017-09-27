#ifndef __PARTICLEANALYSE_H__
#define __PARTICLEANALYSE_H__
#pragma once
#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/movableobject.h"
#include "spatial3ddataset/effectdatasource.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace EffectManager
			{
				/// <summary>
				/// 粒子分析类
				/// </summary>
				class EV_Spatial3DEngine_DLL CParticleAnalyse:public EarthView::World::Core::CAllocatedObject
				{

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CParticleAnalyse(EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CParticleAnalyse();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CParticleAnalyse();

					/// <summary>
					/// 查找粒子特效
					/// </summary>
					/// <param name="folder">文件路径</param>
					/// <param name="partilceFileNames">文件名队列</param>
					/// <param name="particleNames">特效名队列</param>
					/// <returns></returns>
					void findParticles(EVString folder,_out EarthView::World::Core::CStringArray& partilceFileNames,_out EarthView::World::Core::CStringArray& particleNames);

					/// <summary>
					/// 解析粒子特效
					/// </summary>
					/// <param name="folder">文件路径</param>
					/// <param name="particleFileName">粒子文件名称</param>
					/// <param name="particleName">粒子名称</param>
					/// <param name="materilname">材质名称</param>
					/// <param name="textures">纹理</param>
					/// <param name="gpus">gpus脚本文件名</param>
					/// <param name="progs">progs脚本文件名</param>
					/// <param name="errors">错误信息</param>
					/// <returns></returns>
					void analyseParticle(EVString folder,EVString particleFileName,EVString particleName,_out EVString& materilname, _out EarthView::World::Core::CStringArray& textures,_out EarthView::World::Core::CStringArray& gpus, _out EarthView::World::Core::CStringArray& progs,_out EarthView::World::Core::CStringArray& errors);				
					
					/// <summary>
					/// 获取文件名
					/// </summary>
					/// <param name="file">文件路径</param>
					/// <returns>文件名</returns>
					EVString getFilename(const EVString& file);
				private:
					EVString mResourceGroupName;
					EVString mFolder;
				};

			}
		}
	}
}
#endif


