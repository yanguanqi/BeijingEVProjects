#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "spatialinterface/ilabelproperty.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Display{
///<summary>
///图层label页的属性类
///提供label页属性的设置和描述的方法
///</summary>
class EV_SPATIAL2DDISPLAY_DLL CLayerLabelProperty:
	public EarthView::World::Spatial::Display::ILabelProperty
{
public:
	CLayerLabelProperty();
	~CLayerLabelProperty();

public:

	/// <summary>
	/// 获取名称
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	EVString getName() const;

	/// <summary>
	/// 设置名称
	/// </summary>
	/// <param name="strName">名称</param>
	/// <returns></returns>

	ev_void setName(EVString strName);

	/// <summary>
	/// 图层注记是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	ev_bool isVisible() const;

	/// <summary>
	/// 设置图层注记是否可见
	/// </summary>
	/// <param name="bVisible">是否可见</param>
	/// <returns></returns>

	ev_void setVisible( _in ev_bool bVisible );

	/// <summary>
	/// 是否按比例尺显示
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	ev_bool ignoreScale() const;

	/// <summary>
	/// 设置是否按比例尺显示
	/// </summary>
	/// <param name="bIgnore">是否忽略</param>
	/// <returns></returns>

	ev_void setIgnoreScale( _in ev_bool bIgnore );

	/// <summary>
	/// 获取最小比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	ev_real64 getMinScale() const;

	/// <summary>
	/// 设置最小比例尺
	/// </summary>
	/// <param name="dMinScale">最小比例尺</param>
	/// <returns></returns>

	ev_void setMinScale( _in ev_real64 dMinScale );

	/// <summary>
	/// 获取最大比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	ev_real64 getMaxScale() const;

	/// <summary>
	/// 设置最大比例尺
	/// </summary>
	/// <param name="dMaxScale">最大比例尺</param>
	/// <returns></returns>

	ev_void setMaxScale( _in ev_real64 dMaxScale );

	/// <summary>
	/// 检测标注是否在要素的上面
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果在要素上面返回true,反之则否</returns>
	ev_bool isOnTopOfFeature() const;
	/// <summary>
	/// 设置标注是否在要素之上
	/// </summary>
	/// <param name="bOnTop">如果为true,则在要素的上面,反之则否</param>
	/// <returns></returns>
	ev_void setOnTopOfFeature( ev_bool bOnTop );
	/// <summary>
	/// 获取点标注的位置及其相应的优先级（围绕点要素标注时）
	/// </summary>
	/// <returns>点标注的位置及其优先级</returns>
	EVString getPointLabelPositionPriority();
	/// <summary>
	/// 设置点标注的位置及其相应的优先级
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setPointLabelPositionPriority(EVString positionPriority);
	/// <summary>
	/// 判断标注是否一直平行于线
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果一直平行与线则返回true,反之则否</returns>
	ev_bool isParallelToLineAlways() const;
	/// <summary>
	/// 设置标注是否一直平行于线
	/// </summary>
	/// <param name="bParalle">如果为true,则标注一直平行于线,反之则否</param>
	/// <returns></returns>
	ev_void setParallelToLineAlways( ev_bool bParallel );

	// <summary>
	/// 判断是否分段标注线
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果分段标注线则返回true,反之则否</returns>
	ev_bool isSegmentLabelLine() const;
	/// <summary>
	/// 设置是否分段标注线
	/// </summary>
	/// <param name="bHorizontal">如果为true,则分段标注线,反之则否</param>
	/// <returns></returns>
	ev_void setSegmentLabelLine(ev_bool bSegmentLabel);
	/// <summary>
	/// 判断标注是否一直保持水平
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果始终保持水平,则返回true,反之则否</returns>
	ev_bool isHorizontalAlways() const;
	/// <summary>
	/// 设置标注是否保持水平
	/// </summary>
	/// <param name="bHorizontal">如果为true,则标注保持水平,反之则否</param>
	/// <returns></returns>
	ev_void setHorizontalAlways( ev_bool bHorizontal );

	/// <summary>
	/// 判断标注是否一直在面的内部
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果标注一直在面的内部则返回true,反之则否</returns>
	ev_bool isInPolygon() const;
	/// <summary>
	/// 设置标注是否一直面内部
	/// </summary>
	/// <param name="bIn">如果为true,则保持标注一直在面的内部,反之则否</param>
	/// <returns></returns>
	ev_void setInPolygon( ev_bool bIn );

	/// <summary>
	/// 获取图层标注是否去除重复的注记
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual EarthView::World::Spatial::Display::EVLabelDuplicateFlag getDuplicateFlag() const;
	/// <summary>
	/// 设置图层标注是否去除重复的注记
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void setDuplicateFlag( EarthView::World::Spatial::Display::EVLabelDuplicateFlag flag );

	/// <summary>
	/// 获取标注与轴的关系
	/// </summary>
	/// <param name=""></param>
	/// <returns>字体与轴的关系</returns>
	EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const;
	/// <summary>
	/// 设置字体与轴的关系
	/// </summary>
	/// <param name="type">字体与轴的关系类型</param>
	/// <returns></returns>
	ev_void setRelationOfFontAndAxis( EarthView::World::Spatial::Display::EVFontAndAxisRelationType type );

	/// <summary>
	/// 设置是否允许注记压盖要素
	/// </summary>
	/// <param name="b">是否允许注记压盖要素</param>
	/// <returns></returns>
	virtual ev_void setFeatureWeightEnable(ev_bool b);

	/// <summary>
	/// 是否允许注记压盖要素
	/// </summary>
	/// <param name=""></param>
	/// <returns>若允许注记压盖要素返回true, 否则返回false</returns>
	virtual ev_bool getFeatureWeightEnable();

	/// <summary>
	/// 设置文本风格
	/// </summary>
	/// <param name="pSymbol">文本风格</param>
	/// <returns></returns>
	ev_void setTextSymbol( const EarthView::World::Spatial::Display::ISymbol *pSymbol );
	/// <summary>
	/// 获取文本风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>文本风格</returns>
	EarthView::World::Spatial::Display::ISymbol *getTextSymbol() const;

	/// <summary>
	/// 设置标注的字段
	/// </summary>
	/// <param name="field">字段名称</param>
	/// <returns></returns>
	ev_void setField( const EVString &field );
	/// <summary>
	/// 获取标注的字段
	/// </summary>
	/// <param name=""></param>
	/// <returns>字段名称</returns>
	EVString getField() const;
	/// <summary>
	/// 创建子标注
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ILabelProperty *createSubLabelProperty();

	/// <summary>
	/// 添加子标注
	/// </summary>
	/// <param name="">标注属性</param>
	/// <returns></returns>
	ev_void addSubLabelProperty(EarthView::World::Spatial::Display::ILabelProperty * pLProperty);

	/// <summary>
	/// 移除子标注
	/// </summary>
	/// <param name="">标注属性</param>
	/// <returns></returns>
	ev_void removeSubLabelProperty(EarthView::World::Spatial::Display::ILabelProperty * pLProperty);

	/// <summary>
	/// 获取子标注个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>子标注个数</returns>
	ev_int32 getSubLabelPropertyCount() const;

	/// <summary>
	/// 获取子标注
	/// </summary>
	/// <param name="">子标注索引</param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ILabelProperty *getSubLabelProperty(ev_int32 nIndex);

	/// <summary>
	/// 是否分类显示注记
	/// </summary>
	/// <param name=""></param>
	/// <returns>若分类显示，则返回true,否则返回false</returns>
	ev_bool isClassify();

	/// <summary>
	/// 设置是否分类显示注记
	/// </summary>
	/// <param name=""></param>
	/// <returns>标注属性</returns>
	ev_void setClassify(ev_bool bClassify);

	/// <summary>
	/// 判断是不是子标注
	/// </summary>
	/// <param name=""></param>
	/// <returns>若分类显示，则返回true,否则返回false</returns>
	ev_bool isSubLabelProperty();

	/// <summary>
	/// 设置注记显示过滤条件
	/// </summary>
	/// <param name="filter">过滤条件</param>
	/// <returns></returns>
	ev_void setDisplayFilter(const EVString & filter);

	/// <summary>
	/// 获取注记显示过滤条件
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回过滤条件</returns>
	EVString getDisplayFilter() const;

	/// <summary>
	/// 获取注记占位扩展缓冲区（像素）
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回缓冲区大小</returns>
	ev_uint32 getLabelConflictBuffer();

	/// <summary>
	/// 设置注记占位扩展缓冲区（像素）
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setLabelConflictBuffer(ev_uint32 labelBuffer);

	/// <summary>
	/// 清空子标注
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearSubLabelProperty();

	/// <summary>
	/// 复制
	/// </summary>
	/// <param name=""></param>
	/// <returns>标注属性</returns>
	EarthView::World::Spatial::Display::ILabelProperty * clone() const;
	/// <summary>
	/// 从xml中恢复标注属性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
	/// <summary>
	/// 把标注属性保存成xml要素
	/// </summary>
	/// <param name=""></param>
	/// <returns>xml要素</returns>
	EarthView::World::Core::CXmlElement toXmlElement() const;
	/// <summary>
	/// 把标注属性保存到流中
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
	ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
	CLayerLabelProperty( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CLayerLabelProperty )

	/// <summary>
	/// 是否可见
	/// </summary>
	ev_bool m_bVisible;
	/// <summary>
	/// 是否按比例尺显示
	/// </summary>
	ev_bool m_bIgnoreScale;
	/// <summary>
	/// 最小比例尺
	/// </summary>
	ev_real64 m_dMinScale;
	/// <summary>
	/// 最大比例尺
	/// </summary>
	ev_real64 m_dMaxScale;
	/// <summary>
	/// 标注类型
	/// </summary>
	EarthView::World::Spatial::Display::EVLabelType m_eType;
	/// <summary>
	/// 点
	/// </summary>
	ev_bool m_bOnTopOfFeature;
	// 存储点的标注位置(1~8)及其优相应先级(0~4)（围绕点周围标注时,例如：1122324253637283）
	EVString m_mPositionPriority;
	/// <summary>
	/// 线
	/// </summary>
	ev_bool m_bParallelAlways;
	ev_bool m_bSegmentLabel;
	/// <summary>
	/// 面
	/// </summary>
	ev_bool m_bHorizontalAlways;
	ev_bool m_bInPolygon;
	/// <summary>
	/// 线、面的共同属性
	/// </summary>
	EarthView::World::Spatial::Display::EVFontAndAxisRelationType m_eRelationType;
	/// <summary>
	/// 标注字段
	/// </summary>
	EVString m_szExpression;
	/// <summary>
	/// 标注风格
	/// </summary>
	EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
	ev_uint32 m_lableConflictBuffer;  // 注记占位扩展缓冲区大小
	ev_bool m_bFeatureWight;
	EarthView::World::Spatial::Display::EVLabelDuplicateFlag mdDuplicateFlag;
	ev_vector<EarthView::World::Spatial::Display::ILabelProperty *> m_vLabelProperty;
	EVString m_strName;
	ev_bool m_bClassify;
	ev_bool m_bSubLabel;
	EVString m_strSQLFilter;
};
}}}}