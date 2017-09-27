
#ifndef GISDATATYPE_H_
#define GISDATATYPE_H_

#include "mathengine/vector3.h"
namespace EarthView
{
	namespace GISDataType 
	{
		class CGrdData
		{
		ev_private:

		/*	/// <summary>
			/// 该文件是否有效
			/// </summary>
			CGrdData(EarthView::World::Core::CNameValuePairList* pList);*/

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			ev_real64 mNoDataValue;

		public:

			/// <summary>
			/// 默认构造函数
			/// </summary>
			inline CGrdData()
			{
				ZValues = NULL;
				MaxX = -1;
				MinX = -1;
				MaxY = -1;
				MinY = -1;
				MaxZ = -9999;
				MinZ = -9999;
				RowCount = 0;
				ColumnCount = 0;
				FileName = "";
				XInterval = 0;
				YInterval = 0;
				IsValid = false;
				Head1 = "";
				mNoDataValue = 1.70141e+038;
			}

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			~CGrdData();

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			EVString Head1;
			
			/// <summary>
			/// 存储Z值的二维数组
			/// </summary>
			ev_real64** ZValues;

			/// <summary>
			/// 最大X值
			/// </summary>
			ev_real64 MaxX;

			/// <summary>
			/// 最大Y值
			/// </summary>
			ev_real64 MaxY;

			/// <summary>
			/// 最大Z值
			/// </summary>
			ev_real64 MaxZ;

			/// <summary>
			/// 最小X值
			/// </summary>
			ev_real64 MinX;

			/// <summary>
			/// 最小Y值
			/// </summary>
			ev_real64 MinY;

			/// <summary>
			/// 最小Z值
			/// </summary>
			ev_real64 MinZ;

			/// <summary>
			/// 行数
			/// </summary>
			ev_uint64 RowCount;

			/// <summary>
			/// 列数
			/// </summary>
			ev_uint64 ColumnCount;

			/// <summary>
			/// x间隔
			/// </summary>
			ev_real64 XInterval;

			/// <summary>
			/// y间隔
			/// </summary>
			ev_real64 YInterval;

			/// <summary>
			/// grd文件的文件名(绝对路径)
			/// </summary>
			EVString FileName;

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			ev_bool IsValid;

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			ev_real64 GetXPix();

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			ev_real64 GetYPix();

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			void SetGrdNoDataValue(const ev_real64 noDataValue);

			/// <summary>
			/// 该文件是否有效
			/// </summary>
			ev_real64 GetGrdNoDataValue();

			/// <summary>
			/// 拷贝一个grd文件
			/// </summary>
			static CGrdData* CopyFrom(CGrdData* srcData,bool isWithZValues);

		};

		/*class CGrdDataSet : public EarthView::World::Core::CBaseObject
		{
		ev_private:
			
			typedef vector<EarthView::GISDataType::CGrdData> InternalList;
			typedef vector<EarthView::GISDataType::CGrdData>::iterator iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::const_iterator const_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::reverse_iterator reverse_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::const_reverse_iterator const_reverse_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::reference reference;
			typedef vector<EarthView::GISDataType::CGrdData>::const_reference const_reference;
			typedef vector<EarthView::GISDataType::CGrdData>::value_type value_type;

			RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

		ev_private:
			/// <summary>
			/// 构造函数
			/// </summary>
			/// <param name="pList">构造函数参数键值对表</param>
			CGrdDataSet(EarthView::World::Core::CNameValuePairList *pList);

		public:
			CGrdDataSet();

			~CGrdDataSet();

			/// <summary>
			/// 在容器最后添加元素
			/// </summary>
			/// <param name="data">元素值</param>
			void push_back(_in EarthView::GISDataType::CGrdData const &data);

			/// <summary>
			/// 删除容器最后元素
			/// </summary>
			void pop_back();

			/// <summary>
			/// 容器中间位置插入元素
			/// </summary>
			/// <param name="pos">位置</param>
			/// <param name="data">元素值</param>
			void insert(_in ev_uint32 pos, _in EarthView::GISDataType::CGrdData const &data);

			/// <summary>
			/// 删除容器中间位置元素
			/// </summary>
			/// <param name="pos">位置</param>
			void remove(_in ev_size_t pos);

			/// <summary>
			/// 返回容器是否为空
			/// </summary>
			/// <returns>容器为空返回true，否则false</returns>
			ev_bool empty() const;

			/// <summary>
			/// 重载[]操作符
			/// </summary>
			/// <param name="n">下标位置</param>
			/// <returns>返回下标对应的值</returns>
			EarthView::GISDataType::CGrdData& operator[](_in ev_size_t n);

			/// <summary>
			/// 重载[]操作符
			/// </summary>
			/// <param name="n">下标位置</param>
			/// <returns>返回下标对应的值</returns>
			EarthView::GISDataType::CGrdData const& operator[](_in ev_size_t n) const;

			/// <summary>
			/// 返回某位置的元素值
			/// </summary>
			/// <param name="n">位置</param>
			/// <returns>返回位置对应的值</returns>
			EarthView::GISDataType::CGrdData& at(_in ev_size_t n);

			/// <summary>
			/// 返回某位置的元素值
			/// </summary>
			/// <param name="n">位置</param>
			/// <returns>返回位置对应的值</returns>
			EarthView::GISDataType::CGrdData const &at(_in ev_size_t n) const;

			/// <summary>
			/// 返回元素的数量大小
			/// </summary>
			/// <returns>返回元素的数量大小</returns>
			ev_size_t size() const;

			/// <summary>
			/// 改变容器中元素数量大小
			/// </summary>
			/// <param name="newSize">改变的容器中元素数量大小</param>
			void resize(_in ev_size_t newSize);

			/// <summary>
			/// 改变容器中最小的元素容纳数量
			/// </summary>
			/// <param name="count">最小的元素容纳数量</param>
			void reserve(_in ev_size_t count);

			/// <summary>
			/// 清空所有元素
			/// </summary>
			void clear();

		private:
			InternalList mList;
			
		};*/
	}
}
#endif

