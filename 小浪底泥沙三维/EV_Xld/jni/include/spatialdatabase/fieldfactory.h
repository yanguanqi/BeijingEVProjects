#ifndef _Field_Factory_H_H_
#define _Field_Factory_H_H_
#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialdatabase/field.h"

namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace GeoDataset{

///<summary>
///字段构造工厂类
///提供构造字段的方法
///</summary>
class EV_SPATIALDATABASE_DLL CFieldFactory : public EarthView::World::Core::CBaseObject
{
ev_private:
	///<summary>
	///构造函数
	///</summary>
	///<param name="pList">键值对值</param>
	///<returns></returns>
	CFieldFactory(_in EarthView::World::Core::CNameValuePairList *pList){}
public:
	///<summary>
	///构造字段
	///</summary>
	///<param name="stream">字段信息流</param>
	///<returns>字段</returns>
	static EarthView::World::Spatial::GeoDataset::IField* createField(EarthView::World::Core::CDataStream &stream);
private:
	CFieldFactory();
};




}}}} //End of namespaces

#endif //_Field_Factory_H_H_

