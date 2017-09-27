#ifndef _GEOMETRY_FIELD_H_H_
#define _GEOMETRY_FIELD_H_H_

#include "spatialinterface/ifield.h"
#include "spatialinterface/igeometryfield.h"
#include "spatialdatabase/field.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

///<summary>
///几何字段构造类
///包括几何字段属性信息的设置等
///</summary>
class EV_SPATIALDATABASE_DLL CGeometryField : public EarthView::World::Spatial::GeoDataset::IGeometryField
{
public:	
	///<summary>
	///析构函数
	///</summary>
	virtual ~CGeometryField();
public:
	///<summary>
	///获取类型
	///</summary>
	///<param name=""></param>
	///<returns>类型</returns>
	virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
	///<summary>
	///设置类型
	///</summary>
	///<param name="type">类型</param>
	///<returns></returns>
	virtual ev_void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type);
	///<summary>
	///获取空间参考
	///</summary>
	///<param name=""></param>
	///<returns>空间参考</returns>
	virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
	///<summary>
	///设置空间参考
	///</summary>
	///<param name="sr">空间参考</param>
	///<returns></returns>
	virtual ev_void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);

	/// <summary>
	/// 获取字段名称
	/// </summary>					
	/// <returns>字段名称</returns>
	virtual EVString getName() const;
	/// <summary>
	/// 获取字段别名
	/// </summary>					
	/// <returns>字段别名</returns>
	virtual EVString getAliasName() const;
	/// <summary>
	/// 获取字段类型
	/// </summary>
	/// <returns>字段类型</returns>
	virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;
	/// <summary>
	/// 获取字段大小，一般用于EVString类型
	/// </summary>
	/// <returns>字段大小</returns>
	virtual ev_uint32 getSize() const;
	/// <summary>
	/// 获取字段精度，一般用于Real类型
	/// </summary>
	/// <returns>字段精度</returns>
	virtual ev_uint32 getPrecision() const;
	/// <summary>
	/// 获取字段描述
	/// </summary>
	/// <returns>字段描述</returns>
	virtual EVString getDescription() const;
	/// <summary>
	/// 判断是否必需字段
	/// </summary>
	/// <returns>是，返回true；否则，返回false</returns>
	virtual ev_bool isRequest() const;
	/// <summary>
	/// 判断是否支持编辑，一般情况下，不允许编辑。
	/// </summary>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool canEdit() const;
	/// <summary>
	/// 判断是否支持删除，一般情况下，必需字段不允许删除。
	/// </summary>
	/// <returns>是，返回true；否则，返回false</returns>
	virtual ev_bool canDelete() const;
	/// <summary>
	/// 判断是否支持空值。
	/// </summary>
	/// <returns>是，返回true；否则，返回false</returns>
	virtual ev_bool canNull() const;
	/// <summary>
	/// 设置字段别名
	/// </summary>
	/// <param name="value">字段别名</param>
	/// <returns></returns>
	virtual ev_void setAliasName(const EVString& name);
	/// <summary>
	/// 设置字段大小
	/// </summary>
	/// <param name="value">字段大小</param>					
	/// <returns></returns>
	virtual ev_void setSize(ev_uint32 value);
	/// <summary>
	/// 设置字段精度
	/// </summary>
	/// <param name="value">字段精度</param>
	/// <returns></returns>
	virtual ev_void setPrecision(ev_uint32 value);
	/// <summary>
	/// 设置字段描述
	/// </summary>
	/// <param name="description">字段描述</param>
	/// <returns></returns>
	virtual ev_void setDescription(const EVString& description);
	/// <summary>
	/// 深度拷贝
	/// </summary>
	/// <param name=""></param>
	/// <returns>拷贝对象</returns>
	virtual EarthView::World::Spatial::GeoDataset::IField* clone() const;
	/// <summary>
	/// 设置字段名
	/// </summary>
	/// <param name="name">字段名</param>
	/// <returns></returns>
	virtual ev_void setName(const EVString& name);
	/// <summary>
	/// 设置字段是否可以为空
	/// </summary>
	/// <param name="value">是否</param>
	/// <returns></returns>
	virtual ev_void setCanNull(ev_bool value);
	/// <summary>
	/// 设置字段是否可以编辑
	/// </summary>
	/// <param name="value"></param>
	/// <returns></returns>
	virtual ev_void setCanEdit(ev_bool value);
	/// <summary>
	/// 设置字段是否可以被删除
	/// </summary>
	/// <param name="value"></param>
	/// <returns></returns>
	virtual ev_void setCanDelete(ev_bool value);
public:
	//CGeometryField(EarthView::World::Core::CDataStream &stream);
	/// <summary>
	/// 序列化字段信息
	/// </summary>
	/// <param name="stream">流</param>
	/// <param name="hasHead">是否有头信息</param>
	/// <returns></returns>
	virtual void toStream(EarthView::World::Core::CDataStream & stream,bool hasHead) const;
	///<summary>
	///构造函数
	///</summary>
	CGeometryField();
	///<summary>
	///拷贝构造函数
	///</summary>
	///<param name="geofield">几何体字段对象</param>
	///<returns></returns>
	CGeometryField(const CGeometryField &geofield);
ev_private:
	/// <summary>
	/// 用于封装的构造函数
	/// </summary>
	/// <param name="pList">参数健值对</param>
	/// <returns></returns>
	CGeometryField(EarthView::World::Core::CNameValuePairList *pList);
private:
	EarthView::World::Spatial::Geometry::ISpatialReference*			m_pSR;
	EarthView::World::Spatial::Geometry::EVGeometryType				m_type;
	EarthView::World::Spatial::GeoDataset::IField						*m_field;

	friend class CFieldFactory;
};


}}}} //End of namespace

#endif 
