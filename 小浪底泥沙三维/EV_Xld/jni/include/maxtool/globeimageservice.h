#ifndef _GLOBEIMAGESERVICE_H_
#define _GLOBEIMAGESERVICE_H_

#include "maxtool/config.h"
#include "core/stringdefines.h"
#include "mathengine/matrix4.h"
#ifdef EV_OS_WIN
#include <windows.h>
#else
#define HANDLE int
#endif

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Controls{
				class CGlobeControl;
			}}}}


namespace EV_MaxTool {

	class EV_MAXTOOL_DLL CGlobeImageService
	{
	public:
		CGlobeImageService(EarthView::World::Spatial3D::Controls::CGlobeControl* Gcontrol);
		~CGlobeImageService();

		// 开启max服务，创建命名管道和子线程
		ev_bool StartServer();
		// 停止max服务，关闭管道句柄
		ev_bool CloseServer();
		HANDLE createPipe();
		const ev_bool GetFlag();
		const HANDLE GetHpipe();
		// 从管道读取信息
		EVString ReadInfoFromPipe();
		// 网管道里面写信息
		bool WriteInfoIntoPipe(const EVString msg);
		// 刷新管道缓存
		void FlushBuffers();
		// MAX请求地形数据，bmarege标识是否合并max中已有的地形数据（max里面已有地形数据是可以拼接）
		void MaxGetTerrianInfo(const ev_bool bmerge); 
		// sketchup请求地形数据，bmarege标识是否合并max中已有的地形数据（max里面已有地形数据是可以拼接）
		void SketchupGetTerrianInfo(const ev_bool bmerge);
		const EarthView::World::Spatial3D::Controls::CGlobeControl* Getcontrol();
		void setControl(EarthView::World::Spatial3D::Controls::CGlobeControl* control);
	private:
		// 截出得图片存放的临时位置，这里即缓存路径
		EVString GetTmpPath();

		EarthView::World::Spatial3D::Controls::CGlobeControl*          m_globeControl;
		HANDLE                  hNamePipe; // 服务器创建的管道句柄
		HANDLE                  hConnThread; //线程句柄 
		ev_bool                 m_flag;      // 线程标记
	};
}
#endif



