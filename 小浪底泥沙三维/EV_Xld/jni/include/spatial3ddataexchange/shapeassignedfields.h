#ifndef __SHAPEASSIGNEDFIELDS_H__
#define __SHAPEASSIGNEDFIELDS_H__

#include "core/memoryallocatedobject.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/stringdefines.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{
	
class EV_Spatial3DDataExchange_DLL CScaleField : public EarthView::World::Core::CBaseObject
{
public:
	//缩放的值;
	EVString _XValue;
	EVString _YValue;
	EVString _ZValue;

	//缩放的字段
	EVString _fieldX;
	EVString _fieldY;
	EVString _fieldZ;

	CScaleField();

	CScaleField(const CScaleField& rObj);

	CScaleField& operator= (const CScaleField& rObj);

ev_private:
	CScaleField(_in EarthView::World::Core::CNameValuePairList *pList);

};

//缩放和偏移所用结构一样，用一个类表示;
typedef CScaleField COffsetField;

//四元数 字段和值
class EV_Spatial3DDataExchange_DLL CQuationField : public EarthView::World::Core::CBaseObject
{
public:
	//表示旋转的度数值;如90;
	EVString _XValue;
	EVString _YValue;
	EVString _ZValue;

	//表示指定的四元数字段;
	EVString _fieldQuaternionX;
	EVString _fieldQuaternionY;
	EVString _fieldQuaternionZ;
	EVString _fieldQuaternionW;

	//表示指定的旋转轴字段;按某个轴旋转多少度
	EVString _fieldRotationAxisX;
	EVString _fieldRotationAxisY;
	EVString _fieldRotationAxisZ;

	//表示指定的旋转向量字段;按某个向量旋转多少度
	EVString _fieldRotationVectorX;
	EVString _fieldRotationVectorY;
	EVString _fieldRotationVectorZ;
	
	EVString _fieldRotationAngle;
	
	//单位是弧度还是角度
	EVString _RadianOrDegree;

	CQuationField();

	~CQuationField();

	CQuationField(const CQuationField& rObj);

	CQuationField& operator= (const CQuationField& rObj);
ev_private:
	CQuationField(_in EarthView::World::Core::CNameValuePairList *pList);

};

class EV_Spatial3DDataExchange_DLL CSkewField
{
public:
	EVString _skewAxisX;	//斜切轴
	EVString _skewAxisY;
	EVString _skewAxisZ;

	EVString _skewAngle;	//斜切角
		
	EVString _RadianOrDegree;	//单位是弧度还是角度

public:
	CSkewField();
	~CSkewField();

	CSkewField(const CSkewField& rObj);

	CSkewField& operator=(const CSkewField& rObj);

ev_private:
	CSkewField(_in EarthView::World::Core::CNameValuePairList *pList);
};

/// <summary>
///	界面上制定的shape文件中的部分字段
///<summary>
class EV_Spatial3DDataExchange_DLL CShapeAssignedFields : public EarthView::World::Core::CBaseObject
{
public:
	EVString		_name;						//界面指定的shape文件中模型名所在的字段名;

	ev_int32		_srsID;						//界面指定的shape文件中数据的坐标系，以读取shape文件的坐标系信息为优先采用，读取不到则取界面指定的值;

	ev_bool			_isRecursionPath;			//对于选定的模型路径是否递归查找;默认不递归;

	CScaleField		_scale;						//界面指定的shape文件中的缩放字段和自定义的缩放值;
	COffsetField	_offset;					//界面指定的shape文件中的偏移字段和自定义的偏移值;
	CQuationField	_quation;					//界面指定的shape文件中的旋转字段和自定义的旋转值;
	CSkewField		_skew;						//界面指定的shape文件中的斜切字段

public:
	CShapeAssignedFields();

	CShapeAssignedFields(const CShapeAssignedFields& robj);

	CShapeAssignedFields& operator=(const CShapeAssignedFields& robj);

	~CShapeAssignedFields();

ev_private:
	CShapeAssignedFields(_in EarthView::World::Core::CNameValuePairList *pList);
	
};

}}}}

#endif
