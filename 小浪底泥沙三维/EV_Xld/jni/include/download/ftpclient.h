#ifndef EV_FTP_CLIENT_H_H
#define EV_FTP_CLIENT_H_H
#include "core/global.h"
#include "core/ev_string.h"
#include "core/string_array.h"
#include "core/datastream.h"
#include "download/downloadglobal.h"

class EV_DOWNLOAD_DLL FTPClient
{
public:
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	FTPClient(const EVString& remotepath);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	FTPClient(const EVString& user, const EVString& password, const EVString& remotepath);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~FTPClient();

	/// <summary>
	/// 获取当前目录
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EVString pwd();

	/// <summary>
	/// 当前目录文件和文件夹列表
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Core::ev_stringArray dir();

	/// <summary>
	/// 改变当前目录
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool cd(const EVString& param);

	/// <summary>
	/// 获取文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Core::MemoryDataStreamPtr get(const EVString& filename, ev_int32 fileformat);

	/// <summary>
	/// 上传文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 put(EarthView::World::Core::MemoryDataStreamPtr data, const EVString& filename, ev_int32 fileformat);

	/// <summary>
	/// 删除文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool remove(const EVString& filename);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 errorCode();
protected:
private:
	class Internal;
	Internal* mpInternal;
};

#endif