#ifndef EARTHVIEW_WORLD_SPATIAL3DENGINE_TEXTURECOMPOSITOR_H
#define EARTHVIEW_WORLD_SPATIAL3DENGINE_TEXTURECOMPOSITOR_H

#include <core/multibytestring.h>
#include <core/unicodestring.h>


#include <gdip.h>
typedef PixelFormat GdiPixelFormat;

#include <math.h>
#include <core/guid.h>
#include <core/dir.h>
#include <core/file.h>
#include <core/sharedptr.h>

#include <mathengine/ev_math.h>
#include <mathengine/vector3.h>

#include <graphic/root.h>
#include <graphic/submesh.h>
#include <graphic/mesh.h>
#include <graphic/meshmanager.h>
#include <graphic/meshserializer.h>
#include <graphic/material.h>
#include <graphic/materialserializer.h>
#include <graphic/technique.h>
#include <graphic/pass.h>
#include <graphic/texture.h>
#include <graphic/texturemanager.h>
#include <graphic/textureunitstate.h>
#include <graphic/resourcegroupmanager.h>
#include <graphic/image.h>
#include <graphic/hardwarebuffermanager.h>

#include "spatial3dcalculator/spatialcalculator.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include <core/commonstringpairlist.h>


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DEngine_DLL CTextureCompositor:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CTextureCompositor(EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>	
				CTextureCompositor();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>	
				~CTextureCompositor();

			public:
				/// <summary>
				/// 生成小纹理
				/// </summary>
				/// <param name="path">结果文件路径</param>
				/// <param name="imagefilename">结果文件名</param>
				/// <returns></returns>	
				void thumbImage(const EarthView::World::Core::ev_wstring& path,const EarthView::World::Core::ev_wstring& imagefilename);
					
ev_private:

				/// <summary>
				/// 生成小纹理
				/// </summary>
				/// <param name="path">结果文件路径</param>
				/// <param name="imagefilename">结果文件名</param>
				/// <param name="bmp">bmp对象</param>
				/// <returns></returns>	
				void thumbImage(const EarthView::World::Core::ev_wstring& path,const EarthView::World::Core::ev_wstring& imagefilename,GpImage* bmp);

				/// <summary>
				/// 创建bitmap对象
				/// </summary>
				/// <param name="fpath">结果文件路径</param>
				/// <param name="fname">结果文件名</param>
				/// <param name="image">传出的内存bmp对象指针</param>
				/// <returns>true成功,false失败</returns>	
				bool createBitmap(const EVString& fpath,const EVString& fname, _out GpBitmap** image);

				/// <summary>
				/// 获取编码的clsid
				/// </summary>
				/// <param name="format">文件格式</param>
				/// <param name="clsid">clsid</param>
				/// <returns>true成功,false失败</returns>	
				bool getEncoderClsid( const EVString& format, _out CLSID *clsid );

					
	
			};
		}
	}
}
#endif


