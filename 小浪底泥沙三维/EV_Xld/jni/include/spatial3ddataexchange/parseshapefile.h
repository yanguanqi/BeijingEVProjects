#ifndef __PARSESHAPEFILE_H__
#define __PARSESHAPEFILE_H__

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"
#include "spatial3ddataexchange/entitymetadata.h"
#include "spatial3ddataexchange/shapeassignedfields.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{


class EV_Spatial3DDataExchange_DLL ShapeFieldsList : public EarthView::World::Core::CBaseObject
{
ev_private:
	typedef vector<EVString> InternalList;
	typedef InternalList::iterator iterator;
	typedef InternalList::const_iterator const_iterator;
	typedef InternalList::reverse_iterator reverse_iterator;
	typedef InternalList::const_reverse_iterator const_reverse_iterator;
	typedef InternalList::reference reference;
	typedef InternalList::const_reference const_reference;
	typedef InternalList::value_type value_type;
	RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
	iterator insert(iterator pos, EVString t);

ev_private:
	ShapeFieldsList(_in EarthView::World::Core::CNameValuePairList *pList);

private:
	InternalList mList;

public:
	ShapeFieldsList();
	~ShapeFieldsList();

	void push_back(EVString field);
	void pop_back();

	EVString& front();
	EVString& back();
	void insert(ev_uint32 pos, EVString ref_t);
	void remove(ev_size_t pos);
	ev_bool empty() const;
	const EVString& operator[](ev_size_t n);
	const EVString& operator[](ev_size_t n) const;
	const EVString& at(ev_size_t n);
	const EVString& at(ev_size_t n) const;
	ev_size_t size() const;
	void resize(ev_size_t newSize);
	void clear();
};

class EV_Spatial3DDataExchange_DLL EntityMetaDataList : public EarthView::World::Core::CBaseObject
{
ev_private:
	typedef vector<CEntityMetaData> InternalList;
	typedef InternalList::iterator iterator;
	typedef InternalList::const_iterator const_iterator;
	typedef InternalList::reverse_iterator reverse_iterator;
	typedef InternalList::const_reverse_iterator const_reverse_iterator;
	typedef InternalList::reference reference;
	typedef InternalList::const_reference const_reference;
	typedef InternalList::value_type value_type;
	RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
	iterator insert(iterator pos, CEntityMetaData t);

ev_private:
	EntityMetaDataList(_in EarthView::World::Core::CNameValuePairList *pList);

private:
	InternalList mList;

public:
	EntityMetaDataList();
	~EntityMetaDataList();

	void push_back(CEntityMetaData data);
	void pop_back();

	CEntityMetaData& front();
	CEntityMetaData& back();
	void insert(ev_uint32 pos, CEntityMetaData ref_t);
	void remove(ev_size_t pos);
	ev_bool empty() const;
	const CEntityMetaData& operator[](ev_size_t n);
	const CEntityMetaData& operator[](ev_size_t n) const;
	const CEntityMetaData& at(ev_size_t n);
	const CEntityMetaData& at(ev_size_t n) const;
	ev_size_t size() const;
	void resize(ev_size_t newSize);
	void clear();
};

/// <summary>
/// 解析模型Shape文件的工具类
/// </summary>
class EV_Spatial3DDataExchange_DLL CParseShapeFile: public EarthView::World::Core::CBaseObject
{
ev_private:
	CParseShapeFile(_in EarthView::World::Core::CNameValuePairList *pList);
public:
	CParseShapeFile();
	~CParseShapeFile();

public:
	/// <summary>
	/// 打开Shape文件
	/// </summary>
	/// <param name="filename">Shape文件名</param>
	/// <returns>成功返回true，否则返回false</returns>
	ev_bool open(_in const EVString& filename);

	/// <summary>
	/// 读取Shape文件中的字段
	/// </summary>
	/// <param name="file">Shape文件名，完整路径</param>
	/// <param name="fields">字段集合</param>
	/// <returns>成功返回true，否则返回false</returns>
	static ev_bool readFields(const EVString& file, _out ShapeFieldsList& fields);

	/// <summary>
	/// 读取Shape文件中的坐标系
	/// </summary>
	/// <param name="file">Shape文件名，完整路径</param>
	/// <param name="fields">字段集合</param>
	/// <returns>成功返回坐标系编码，否则返回0</returns>
	static ev_int32 readSrsID(const EVString& file);

	/// <summary>
	/// 读取Shape文件中的mesh信息
	/// </summary>
	/// <param name="modelFilePath">shape文件中的mesh对应的文件路径</param>
	/// <param name="meshEntitis">mesh集合</param>
	/// <returns>成功返回true，否则返回false</returns>
	ev_int32 readShapeData(const EVString &modelFilePath, const CShapeAssignedFields& assignedValue, _out EntityMetaDataList& meshEntitis);

private:
	/// <summary>
	/// 在一个根文件夹中根据一个模型名查找包含该名的带扩展名的文件，如果有多个同名但扩展名不同的，则返回先找到的(多级目录则递归查找)
	/// </summary>
	/// <param name="modelFilePath">模型所在文件夹</param>
	/// <param name="modelName">模型名</param>
	/// <param name="fullMeshName">完整路径的文件名</param>
	/// <returns>成功返回true，否则返回false</returns>
	ev_bool findModelFileVague(_in EarthView::World::Core::ev_stringArray &files, const EVString& modelName, _out EVString& fullMeshName);

private:
	EVString m_file;
};

}}}}

#endif