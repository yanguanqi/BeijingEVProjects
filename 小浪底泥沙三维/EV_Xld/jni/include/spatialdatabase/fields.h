#ifndef _FIELDS_H_H_
#define _FIELDS_H_H_

#include "spatialinterface/ifields.h"
#include "spatialdatabase/spatialdatabaseconfig.h"

namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace GeoDataset{
///<summary>
///字段序列类
///</summary>
class EV_SPATIALDATABASE_DLL CFields : public EarthView::World::Spatial::GeoDataset::IFields
{
ev_private:
	/// <summary>
	/// 用于封装的构造函数
	/// </summary>
	/// <param name="pList">参数健值对</param>
	/// <returns></returns>
	CFields(EarthView::World::Core::CNameValuePairList *pList);
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <returns></returns>
	CFields();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <returns></returns>
	~CFields();
public:
	/// <summary>
	/// 获取字段总数
	/// </summary>
	/// <param name=""></param>
	/// <returns>字段总数</returns>
	virtual ev_uint32 getCount() const;
	/// <summary>
	/// 获取索引index处的字段
	/// </summary>
	/// <param name="index">索引号</param>
	/// <returns>字段</returns>
	virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
	/// <summary>
	/// 查询字段
	/// </summary>
	/// <param name="fieldName">字段名</param>
	/// <returns>成功返回字段索引号，失败返回-1</returns>
	virtual ev_int32 findField(const EVString& fieldName) const;
	/// <summary>
	/// 添加字段
	/// </summary>
	/// <param name="field">字段</param>
	/// <returns>字段总数</returns>
	virtual ev_uint32 addField(const EarthView::World::Spatial::GeoDataset::IField* field);
	/// <summary>
	/// 删除索引index处的字段
	/// </summary>
	/// <param name="index">索引号</param>
	/// <returns>成功返回0，索引号小于0或者大于字段总数返回-1</returns>
	virtual ev_uint32 removeField(ev_uint32 index);
	/// <summary>
	/// 删除所有字段
	/// </summary>
	/// <param name=""></param>
	/// <returns>0</returns>
	virtual ev_uint32 clear();
	/// <summary>
	/// 移动字段
	/// </summary>
	/// <param name="srcIndex">原索引位置</param>
	/// <param name="srcIndex">目标索引位置</param>
	/// <returns>成功返回true,失败返回false</returns>
	virtual ev_bool moveField(ev_uint32 srcIndex,ev_uint32 destIndex);
	/// <summary>
	/// 深度拷贝
	/// </summary>
	/// <param name=""></param>
	/// <returns>拷贝对象</returns>
	virtual EarthView::World::Spatial::GeoDataset::IFields * clone() const;
private:
	/* 字段映射 */
	ev_vector<EarthView::World::Spatial::GeoDataset::IField*>* mpFieldList;
	C_DISABLE_COPY(CFields);
};


} //GeoDataset
} //Spatial
} //World
} //EarthView


#endif //_FIELDS_H_H_

