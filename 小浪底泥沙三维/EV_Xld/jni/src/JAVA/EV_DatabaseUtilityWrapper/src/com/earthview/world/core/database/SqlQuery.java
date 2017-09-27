package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 提供执行和生成sql语句的方法
 */
public class SqlQuery extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlQuery", new SqlQueryClassFactory());
	}

	///<summary>
	///构造函数
	///</summary>
	///<param name="r">result指针</param>
	///<returns><returns>
	public SqlQuery(com.earthview.world.core.database.SqlResult r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CSqlQuery", list);
	}

	///<summary>
	///构造函数
	///</summary>
	///<param name=""></param>
	///<returns><returns>
	public SqlQuery() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlQuery", null);
	}

	///<summary>
	///构造函数
	///</summary>
	///<param name="query">sql语句</param>
	///<returns><returns>
	public SqlQuery(String query) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer queryPtr = new BasePointer(query);
		list.add("query", queryPtr.get());
		Create("CSqlQuery", list);
	}

	///<summary>
	///构造函数
	///</summary>
	///<param name="query">sql语句</param>
	///<param name="db">数据库连接对象</param>
	///<returns><returns>
	public SqlQuery(String query, com.earthview.world.core.database.SqlDatabase db) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer queryPtr = new BasePointer(query);
		list.add("query", queryPtr.get());
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		Create("CSqlQuery", list);
	}

	///<summary>
	///显示构造函数
	///</summary>
	///<param name="query">数据库连接对象</param>
	///<returns><returns>
	public SqlQuery(com.earthview.world.core.database.SqlDatabase db) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		Create("CSqlQuery", list);
	}

	///<summary>
	///默认构造函数
	///</summary>
	///<param name="other">query对象</param>
	///<returns><returns>
	public SqlQuery(com.earthview.world.core.database.SqlQuery other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlQuery", list);
	}

	native private long OperatorAssign_CSqlQuery(long pNativeObject, long other);
	///<summary>
	///重载赋值操作符
	///</summary>
	///<param name="other">query对象</param>
	///<returns><returns>
	public com.earthview.world.core.database.SqlQuery OperatorAssign(com.earthview.world.core.database.SqlQuery other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlQuery(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlQuery __returnValue = new com.earthview.world.core.database.SqlQuery(CreatedWhenConstruct.CWC_NotToCreate, "CSqlQuery");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlQuery)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlQuery");
		}
		return __returnValue;
	}
	native private void bindValue_ev_wstring_CVariant_EVParamType(long pNativeObject, String placeholder, long val, int type);
	/**
	 * 绑定数据到指定的位置
	 * @param placeholder 绑定位置的占位符
	 * @param val 待绑定的数据
	 * @param type 绑定类型
	 * @return void
	 */
	public void bindValue(String placeholder, com.earthview.world.core.Variant val, com.earthview.world.core.database.EVParamType type)
	{
		String placeholderParamValue = placeholder;
		long valParamValue = val.nativeObject.pointer;
		int typeParamValue = type.getValue();
		bindValue_ev_wstring_CVariant_EVParamType(this.nativeObject.pointer, placeholderParamValue, valParamValue, typeParamValue);
	}
	native private void bindValue_ev_int32_CVariant_EVParamType(long pNativeObject, int pos, long val, int type);
	///<summary>
	/// 绑定数据到指定的位置
	/// </summary>
	/// <para m name="pos">绑定位置的索引</param>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
	public void bindValue(int pos, com.earthview.world.core.Variant val, com.earthview.world.core.database.EVParamType type)
	{
		int posParamValue = pos;
		long valParamValue = val.nativeObject.pointer;
		int typeParamValue = type.getValue();
		bindValue_ev_int32_CVariant_EVParamType(this.nativeObject.pointer, posParamValue, valParamValue, typeParamValue);
	}
	native private void addBindValue_CVariant_EVParamType(long pNativeObject, long val, int type);
	/**
	 * 添加绑定数据到下一个绑定位置，按顺序绑定
	 * @param val 待绑定的数据
	 * @param type 绑定类型
	 * @return void
	 */
	public void addBindValue(com.earthview.world.core.Variant val, com.earthview.world.core.database.EVParamType type)
	{
		long valParamValue = val.nativeObject.pointer;
		int typeParamValue = type.getValue();
		addBindValue_CVariant_EVParamType(this.nativeObject.pointer, valParamValue, typeParamValue);
	}
	native private long boundValue_ev_wstring(long pNativeObject, String placeholder);
	/**
	 * 返回指定位置的绑定数据
	 * @param placeholder 指定绑定位置的占位符
	 * @return 已绑定的数据
	 */
	public com.earthview.world.core.Variant boundValue(String placeholder)
	{
		String placeholderParamValue = placeholder;
		long returnValue = boundValue_ev_wstring(this.nativeObject.pointer, placeholderParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long boundValue_ev_int32(long pNativeObject, int pos);
	/**
	 * 返回指定位置的绑定数据
	 * @param pos 指定绑定位置的索引
	 * @return 已绑定的数据
	 */
	public com.earthview.world.core.Variant boundValue(int pos)
	{
		int posParamValue = pos;
		long returnValue = boundValue_ev_int32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空对象的所有状态
	 * @return void
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long driver_void(long pNativeObject);
	/**
	 * 返回driver
	 * @return 返回driver指针
	 */
	public com.earthview.world.core.database.SqlDriver driver()
	{
		long returnValue = driver_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.database.SqlDriver __returnValue = new com.earthview.world.core.database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDriver");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDriver)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDriver");
		}
		return __returnValue;
	}
	native private boolean exec_ev_wstring(long pNativeObject, String query);
	/**
	 * 执行SQL语句
	 * @param query SQL语句
	 * @return 成功返回true，失败返回false
	 */
	public boolean exec(String query)
	{
		String queryParamValue = query;
		boolean returnValue = exec_ev_wstring(this.nativeObject.pointer, queryParamValue);
		return returnValue;
	}
	native private boolean exec_void(long pNativeObject);
	/**
	 * 执行已准备好的SQL语句
	 * @return 成功返回true，失败返回false
	 */
	public boolean exec()
	{
		boolean returnValue = exec_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean execBatch_EVBatchExecutionMode(long pNativeObject, int mode);
	/**
	 * 执行已准备好的SQL语句,主要用于批量导入。
	 * @return 成功返回true，失败返回false
	 */
	public boolean execBatch(com.earthview.world.core.database.EVBatchExecutionMode mode)
	{
		int modeParamValue = mode.getValue();
		boolean returnValue = execBatch_EVBatchExecutionMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private String executedQuery_void(long pNativeObject);
	/**
	 * 返回已执行的SQL语句
	 * @return 已执行的SQL语句
	 */
	public String executedQuery()
	{
		String returnValue = executedQuery_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void finish_void(long pNativeObject);
	/**
	 * 结束当前的数据库操作，清空当前操作状态
	 * @return void
	 */
	public void finish()
	{
		finish_void(this.nativeObject.pointer);
	}
	native private boolean first_void(long pNativeObject);
	/**
	 * 索引到第一个select的结果
	 * @return 成功返回true，失败返回false
	 */
	public boolean first()
	{
		boolean returnValue = first_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean last_void(long pNativeObject);
	/**
	 * 索引到最后一个select的结果
	 * @return 成功返回true，失败返回false
	 */
	public boolean last()
	{
		boolean returnValue = last_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean next_void(long pNativeObject);
	/**
	 * 索引到下一个select的结果
	 * @return 成功返回true，失败返回false
	 */
	public boolean next()
	{
		boolean returnValue = next_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean previous_void(long pNativeObject);
	/**
	 * 索引到上一个select的结果
	 * @return 成功返回true，失败返回false
	 */
	public boolean previous()
	{
		boolean returnValue = previous_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isActive_void(long pNativeObject);
	/**
	 * 是否是活动状态
	 * @return 是返回true，否返回false
	 */
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isForwardOnly_void(long pNativeObject);
	/**
	 * 是否只支持前向查询
	 * @return 是返回true，否返回false
	 */
	public boolean isForwardOnly()
	{
		boolean returnValue = isForwardOnly_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean seek_ev_int32_ev_bool(long pNativeObject, int index, boolean relative);
	/**
	 * /索引到指定的位置/
	 * @param index 索引的位置
	 * @param relative 是否是相对当前的位置
	 * @return 成功返回true，失败返回false
	 */
	public boolean seek(int index, boolean relative)
	{
		int indexParamValue = index;
		boolean relativeParamValue = relative;
		boolean returnValue = seek_ev_int32_ev_bool(this.nativeObject.pointer, indexParamValue, relativeParamValue);
		return returnValue;
	}
	native private long result_void(long pNativeObject);
	/**
	 * 返回result的引用
	 * @return 返回result指针
	 */
	public com.earthview.world.core.database.SqlResult result()
	{
		long returnValue = result_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.database.SqlResult __returnValue = new com.earthview.world.core.database.SqlResult(CreatedWhenConstruct.CWC_NotToCreate, "CSqlResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlResult");
		}
		return __returnValue;
	}
	native private long record_void(long pNativeObject);
	/**
	 * 返回当前的record
	 * @return 当前的record
	 */
	public com.earthview.world.core.database.SqlRecord record()
	{
		long returnValue = record_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlRecord __returnValue = new com.earthview.world.core.database.SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlRecord");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlRecord)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlRecord");
		}
		return __returnValue;
	}
	native private long value_ev_int32(long pNativeObject, int i);
	/**
	 * 返回当前记录中的指定字段的值
	 * @param index 字段的索引的位置
	 * @return 返回字段的值
	 */
	public com.earthview.world.core.Variant value(int i)
	{
		int iParamValue = i;
		long returnValue = value_ev_int32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private int size_void(long pNativeObject);
	/**
	 * 返回result的记录个数
	 * @return 成功返回记录个数，失败（可能数据库不支持，或者无法确定个数）返回-1
	 */
	public int size()
	{
		int returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 当前是否是在有效的记录上
	 * @return 是返回true，否返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isNull_ev_int32(long pNativeObject, int field);
	/**
	 * 当前记录的指定位置字段是否为空
	 * @return 是返回true，否返回false
	 */
	public boolean isNull(int field)
	{
		int fieldParamValue = field;
		boolean returnValue = isNull_ev_int32(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private int at_void(long pNativeObject);
	/**
	 * 当前记录的位置
	 * @return 位置索引
	 */
	public int at()
	{
		int returnValue = at_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelect_void(long pNativeObject);
	/**
	 * 是否是查询状态
	 * @return 是返回true，否返回false
	 */
	public boolean isSelect()
	{
		boolean returnValue = isSelect_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setForwardOnly_ev_bool(long pNativeObject, boolean forward);
	/**
	 * 设置是否仅前向
	 * @param forward 是否
	 * @return void
	 */
	public void setForwardOnly(boolean forward)
	{
		boolean forwardParamValue = forward;
		setForwardOnly_ev_bool(this.nativeObject.pointer, forwardParamValue);
	}
	native private boolean prepare_ev_wstring(long pNativeObject, String query);
	/**
	 * 准备查询语句
	 * @return 成功返回true，失败返回false
	 */
	public boolean prepare(String query)
	{
		String queryParamValue = query;
		boolean returnValue = prepare_ev_wstring(this.nativeObject.pointer, queryParamValue);
		return returnValue;
	}
	native private long lastInsertId_void(long pNativeObject);
	/**
	 * 获取最后插入的记录的ID
	 * @return 返回包含ID的EarthView::World::Core::CVariant
	 */
	public com.earthview.world.core.Variant lastInsertId()
	{
		long returnValue = lastInsertId_void(this.nativeObject.pointer);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private int numRowsAffected_void(long pNativeObject);
	/**
	 * 返回sql操作对结果集影响的行数
	 * @param  
	 * @return sql操作对结果集影响的行数
	 */
	public int numRowsAffected()
	{
		int returnValue = numRowsAffected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNumericalPrecisionPolicy_EVNumericalPrecisionPolicy(long pNativeObject, int precisionPolicy);
	/**
	 * 设置当前数据库的精度
	 * @param precisionPolicy 精度
	 */
	public void setNumericalPrecisionPolicy(com.earthview.world.core.database.EVNumericalPrecisionPolicy precisionPolicy)
	{
		int precisionPolicyParamValue = precisionPolicy.getValue();
		setNumericalPrecisionPolicy_EVNumericalPrecisionPolicy(this.nativeObject.pointer, precisionPolicyParamValue);
	}
	native private int numericalPrecisionPolicy_void(long pNativeObject);
	/**
	 * 获取当前数据库的精度
	 * @param  
	 * @return 精度值
	 */
	public com.earthview.world.core.database.EVNumericalPrecisionPolicy numericalPrecisionPolicy()
	{
		int returnValue = numericalPrecisionPolicy_void(this.nativeObject.pointer);
		return com.earthview.world.core.database.EVNumericalPrecisionPolicy.toEnum(returnValue);
	}
	native private boolean nextResult_void(long pNativeObject);
	/**
	 * 删除当前结果集并定位到下一个可用结果集
	 * @param  
	 * @return 成功返回true,否则返回false
	 */
	public boolean nextResult()
	{
		boolean returnValue = nextResult_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SqlQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlQuery obj = null;
 		if(baseObj instanceof SqlQuery)
		{
			obj = (SqlQuery)baseObj;
		} else {
			obj = new SqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
