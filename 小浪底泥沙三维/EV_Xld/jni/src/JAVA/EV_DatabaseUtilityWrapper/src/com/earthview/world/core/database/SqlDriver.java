package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 访问指定数据库的数据库驱动基类
 */
public class SqlDriver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDriver", new SqlDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlDriverProxy", new SqlDriverClassFactory());
	}

	/**
	 * 数据库特性枚举
	 */
	public enum EVDriverFeature implements INativeEnum<EVDriverFeature> {
		DF_Transactions(EVDriverFeatureHelper.ENUM_VALUES[0]),
		DF_QuerySize(EVDriverFeatureHelper.ENUM_VALUES[1]),
		DF_BLOB(EVDriverFeatureHelper.ENUM_VALUES[2]),
		DF_Unicode(EVDriverFeatureHelper.ENUM_VALUES[3]),
		DF_PreparedQueries(EVDriverFeatureHelper.ENUM_VALUES[4]),
		DF_NamedPlaceholders(EVDriverFeatureHelper.ENUM_VALUES[5]),
		DF_PositionalPlaceholders(EVDriverFeatureHelper.ENUM_VALUES[6]),
		DF_LastInsertId(EVDriverFeatureHelper.ENUM_VALUES[7]),
		DF_BatchOperations(EVDriverFeatureHelper.ENUM_VALUES[8]),
		DF_SimpleLocking(EVDriverFeatureHelper.ENUM_VALUES[9]),
		DF_LowPrecisionNumbers(EVDriverFeatureHelper.ENUM_VALUES[10]),
		DF_EventNotifications(EVDriverFeatureHelper.ENUM_VALUES[11]),
		DF_FinishQuery(EVDriverFeatureHelper.ENUM_VALUES[12]),
		DF_MultipleResultSets(EVDriverFeatureHelper.ENUM_VALUES[13]);
		private int value;
		EVDriverFeature(int i) {
			this.value = i;
		}
		public EVDriverFeature getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVDriverFeature toEnum(int retval) {
			if(retval == DF_Transactions.value){
				return DF_Transactions;
			}
			else if(retval == DF_QuerySize.value){
				return DF_QuerySize;
			}
			else if(retval == DF_BLOB.value){
				return DF_BLOB;
			}
			else if(retval == DF_Unicode.value){
				return DF_Unicode;
			}
			else if(retval == DF_PreparedQueries.value){
				return DF_PreparedQueries;
			}
			else if(retval == DF_NamedPlaceholders.value){
				return DF_NamedPlaceholders;
			}
			else if(retval == DF_PositionalPlaceholders.value){
				return DF_PositionalPlaceholders;
			}
			else if(retval == DF_LastInsertId.value){
				return DF_LastInsertId;
			}
			else if(retval == DF_BatchOperations.value){
				return DF_BatchOperations;
			}
			else if(retval == DF_SimpleLocking.value){
				return DF_SimpleLocking;
			}
			else if(retval == DF_LowPrecisionNumbers.value){
				return DF_LowPrecisionNumbers;
			}
			else if(retval == DF_EventNotifications.value){
				return DF_EventNotifications;
			}
			else if(retval == DF_FinishQuery.value){
				return DF_FinishQuery;
			}
			else if(retval == DF_MultipleResultSets.value){
				return DF_MultipleResultSets;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVDriverFeatureHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 	SQL语句类型枚举
	 */
	public enum EVStatementType implements INativeEnum<EVStatementType> {
		ST_WhereStatement(EVStatementTypeHelper.ENUM_VALUES[0]),
		ST_SelectStatement(EVStatementTypeHelper.ENUM_VALUES[1]),
		ST_UpdateStatement(EVStatementTypeHelper.ENUM_VALUES[2]),
		ST_InsertStatement(EVStatementTypeHelper.ENUM_VALUES[3]),
		ST_DeleteStatement(EVStatementTypeHelper.ENUM_VALUES[4]);
		private int value;
		EVStatementType(int i) {
			this.value = i;
		}
		public EVStatementType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVStatementType toEnum(int retval) {
			if(retval == ST_WhereStatement.value){
				return ST_WhereStatement;
			}
			else if(retval == ST_SelectStatement.value){
				return ST_SelectStatement;
			}
			else if(retval == ST_UpdateStatement.value){
				return ST_UpdateStatement;
			}
			else if(retval == ST_InsertStatement.value){
				return ST_InsertStatement;
			}
			else if(retval == ST_DeleteStatement.value){
				return ST_DeleteStatement;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVStatementTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 	标识类型枚举
	 */
	public enum EVIdentifierType implements INativeEnum<EVIdentifierType> {
		IT_FieldName(EVIdentifierTypeHelper.ENUM_VALUES[0]),
		IT_TableName(EVIdentifierTypeHelper.ENUM_VALUES[1]);
		private int value;
		EVIdentifierType(int i) {
			this.value = i;
		}
		public EVIdentifierType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVIdentifierType toEnum(int retval) {
			if(retval == IT_FieldName.value){
				return IT_FieldName;
			}
			else if(retval == IT_TableName.value){
				return IT_TableName;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVIdentifierTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  long handle_void_callback()
	{
		com.earthview.world.core.Variant returnValue = handle();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long handle_void(long pNativeObject);
	/**
	 * 返回数据库的句柄
	 * @return 数据库句柄
	 */
	public com.earthview.world.core.Variant handle()
	{
		long returnValue = handle_void(this.nativeObject.pointer);
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
	native private long handle_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.Variant handle_NoVirtual()
	{
		long returnValue = handle_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean hasFeature_EVDriverFeature_callback(int f)
	{
		com.earthview.world.core.database.SqlDriver.EVDriverFeature fParamValue = com.earthview.world.core.database.SqlDriver.EVDriverFeature.toEnum(f);
		boolean returnValue = hasFeature(fParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasFeature_EVDriverFeature(long pNativeObject, int f);
	/**
	 * 判断数据库是否支持某一特性
	 * @param f 数据库特性
	 * @return 如果支持返回true，否则false
	 */
	public boolean hasFeature(com.earthview.world.core.database.SqlDriver.EVDriverFeature f)
	{
		int fParamValue = f.getValue();
		boolean returnValue = hasFeature_EVDriverFeature(this.nativeObject.pointer, fParamValue);
		return returnValue;
	}
	native private boolean hasFeature_EVDriverFeature_NoVirtual(long pNativeObject, int f);
	protected boolean hasFeature_NoVirtual(com.earthview.world.core.database.SqlDriver.EVDriverFeature f)
	{
		int fParamValue = f.getValue();
		boolean returnValue = hasFeature_EVDriverFeature_NoVirtual(this.nativeObject.pointer, fParamValue);
		return returnValue;
	}

	protected  boolean isOpen_void_callback()
	{
		boolean returnValue = isOpen();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isOpen_void(long pNativeObject);
	/**
	 * 当前数据库是否打开
	 * @param  
	 * @return 打开返回true，否则返回false
	 */
	public boolean isOpen()
	{
		boolean returnValue = isOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isOpen_void_NoVirtual(long pNativeObject);
	protected boolean isOpen_NoVirtual()
	{
		boolean returnValue = isOpen_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isOpenError_void(long pNativeObject);
	/**
	 * 打开数据库时是否出错
	 * @param  
	 * @return 打开出错返回true，否则返回false
	 */
	public boolean isOpenError()
	{
		boolean returnValue = isOpenError_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long lastError_void(long pNativeObject);
	/**
	 * 获取发生在数据库上面的最后的错误
	 * @param  
	 * @return 包含发生在数据库上面的最后的错误信息的EarthView::World::Core::Database::CSqlError对象
	 */
	public com.earthview.world.core.database.SqlError lastError()
	{
		long returnValue = lastError_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlError __returnValue = new com.earthview.world.core.database.SqlError(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlError");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlError)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlError");
		}
		return __returnValue;
	}
	protected  boolean exist_ev_wstring_callback(String dbname)
	{
		String dbnameParamValue = dbname;
		boolean returnValue = exist(dbnameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exist_ev_wstring(long pNativeObject, String dbname);
	/**
	 * 判断指定数据库是否存在
	 * @param dbname 数据库名
	 * @return 返回TrueorFalse
	 */
	public boolean exist(String dbname)
	{
		String dbnameParamValue = dbname;
		boolean returnValue = exist_ev_wstring(this.nativeObject.pointer, dbnameParamValue);
		return returnValue;
	}
	native private boolean exist_ev_wstring_NoVirtual(long pNativeObject, String dbname);
	protected boolean exist_NoVirtual(String dbname)
	{
		String dbnameParamValue = dbname;
		boolean returnValue = exist_ev_wstring_NoVirtual(this.nativeObject.pointer, dbnameParamValue);
		return returnValue;
	}

	protected  long tables_EVTableType_callback(int tableType)
	{
		com.earthview.world.core.database.EVTableType tableTypeParamValue = com.earthview.world.core.database.EVTableType.toEnum(tableType);
		com.earthview.world.core.Wstringarray returnValue = tables(tableTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long tables_EVTableType(long pNativeObject, int tableType);
	/**
	 * 检索数据库的指定类型的所有表名
	 * @param tableType 表类型
	 * @return 返回数据库的指定类型的所有表名
	 */
	public com.earthview.world.core.Wstringarray tables(com.earthview.world.core.database.EVTableType tableType)
	{
		int tableTypeParamValue = tableType.getValue();
		long returnValue = tables_EVTableType(this.nativeObject.pointer, tableTypeParamValue);
		com.earthview.world.core.Wstringarray __returnValue = new com.earthview.world.core.Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CWStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Wstringarray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CWStringArray");
		}
		return __returnValue;
	}
	native private long tables_EVTableType_NoVirtual(long pNativeObject, int tableType);
	protected com.earthview.world.core.Wstringarray tables_NoVirtual(com.earthview.world.core.database.EVTableType tableType)
	{
		int tableTypeParamValue = tableType.getValue();
		long returnValue = tables_EVTableType_NoVirtual(this.nativeObject.pointer, tableTypeParamValue);
		com.earthview.world.core.Wstringarray __returnValue = new com.earthview.world.core.Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CWStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Wstringarray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CWStringArray");
		}
		return __returnValue;
	}

	protected  long primaryIndex_ev_wstring_callback(String tableName)
	{
		String tableNameParamValue = tableName;
		com.earthview.world.core.database.SqlIndex returnValue = primaryIndex(tableNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long primaryIndex_ev_wstring(long pNativeObject, String tableName);
	/**
	 * 返回表的主键索引
	 * @param tablename 表名
	 * @return 返回对应的表的EarthView::World::Core::Database::CSqlIndex
	 */
	public com.earthview.world.core.database.SqlIndex primaryIndex(String tableName)
	{
		String tableNameParamValue = tableName;
		long returnValue = primaryIndex_ev_wstring(this.nativeObject.pointer, tableNameParamValue);
		com.earthview.world.core.database.SqlIndex __returnValue = new com.earthview.world.core.database.SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlIndex");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlIndex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlIndex");
		}
		return __returnValue;
	}
	native private long primaryIndex_ev_wstring_NoVirtual(long pNativeObject, String tableName);
	protected com.earthview.world.core.database.SqlIndex primaryIndex_NoVirtual(String tableName)
	{
		String tableNameParamValue = tableName;
		long returnValue = primaryIndex_ev_wstring_NoVirtual(this.nativeObject.pointer, tableNameParamValue);
		com.earthview.world.core.database.SqlIndex __returnValue = new com.earthview.world.core.database.SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlIndex");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlIndex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlIndex");
		}
		return __returnValue;
	}

	protected  long record_ev_wstring_callback(String tableName)
	{
		String tableNameParamValue = tableName;
		com.earthview.world.core.database.SqlRecord returnValue = record(tableNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long record_ev_wstring(long pNativeObject, String tableName);
	/**
	 * 返回指定表的元信息，包含各个字段信息
	 * @param tablename 表名
	 * @return 返回对应的表的元信息的record
	 */
	public com.earthview.world.core.database.SqlRecord record(String tableName)
	{
		String tableNameParamValue = tableName;
		long returnValue = record_ev_wstring(this.nativeObject.pointer, tableNameParamValue);
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
	native private long record_ev_wstring_NoVirtual(long pNativeObject, String tableName);
	protected com.earthview.world.core.database.SqlRecord record_NoVirtual(String tableName)
	{
		String tableNameParamValue = tableName;
		long returnValue = record_ev_wstring_NoVirtual(this.nativeObject.pointer, tableNameParamValue);
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

	protected  boolean open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback(String db, String user, String password, String host, int port, String connOpts)
	{
		String dbParamValue = db;
		String userParamValue = user;
		String passwordParamValue = password;
		String hostParamValue = host;
		int portParamValue = port;
		String connOptsParamValue = connOpts;
		boolean returnValue = open(dbParamValue, userParamValue, passwordParamValue, hostParamValue, portParamValue, connOptsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(long pNativeObject, String db, String user, String password, String host, int port, String connOpts);
	/**
	 * 根据给定的信息打开数据库
	 * @param db 数据库名
	 * @param user 用户名
	 * @param password 密码
	 * @param host 主机名
	 * @param port 端口号
	 * @param connOpts 连接选项
	 * @return 打开成功返回true,否则返回false
	 */
	public boolean open(String db, String user, String password, String host, int port, String connOpts)
	{
		String dbParamValue = db;
		String userParamValue = user;
		String passwordParamValue = password;
		String hostParamValue = host;
		int portParamValue = port;
		String connOptsParamValue = connOpts;
		boolean returnValue = open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(this.nativeObject.pointer, dbParamValue, userParamValue, passwordParamValue, hostParamValue, portParamValue, connOptsParamValue);
		return returnValue;
	}
	native private boolean open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_NoVirtual(long pNativeObject, String db, String user, String password, String host, int port, String connOpts);
	protected boolean open_NoVirtual(String db, String user, String password, String host, int port, String connOpts)
	{
		String dbParamValue = db;
		String userParamValue = user;
		String passwordParamValue = password;
		String hostParamValue = host;
		int portParamValue = port;
		String connOptsParamValue = connOpts;
		boolean returnValue = open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_NoVirtual(this.nativeObject.pointer, dbParamValue, userParamValue, passwordParamValue, hostParamValue, portParamValue, connOptsParamValue);
		return returnValue;
	}

	protected  void close_void_callback()
	{
		close();
	}

	native private void close_void(long pNativeObject);
	/**
	 * 关闭数据库连接
	 * @param  
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void close_void_NoVirtual(long pNativeObject);
	protected void close_NoVirtual()
	{
		close_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long createResult_void_callback()
	{
		com.earthview.world.core.database.SqlResult returnValue = createResult();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createResult_void(long pNativeObject);
	/**
	 * 创建对应的EarthView::World::Core::Database::CSqlResult对象
	 * @return 返回driver对应的result对象
	 */
	public com.earthview.world.core.database.SqlResult createResult()
	{
		long returnValue = createResult_void(this.nativeObject.pointer);
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
	native private long createResult_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.database.SqlResult createResult_NoVirtual()
	{
		long returnValue = createResult_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean beginTransaction_void_callback()
	{
		boolean returnValue = beginTransaction();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean beginTransaction_void(long pNativeObject);
	/**
	 * 开始事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean beginTransaction()
	{
		boolean returnValue = beginTransaction_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean beginTransaction_void_NoVirtual(long pNativeObject);
	protected boolean beginTransaction_NoVirtual()
	{
		boolean returnValue = beginTransaction_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean commitTransaction_void_callback()
	{
		boolean returnValue = commitTransaction();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean commitTransaction_void(long pNativeObject);
	/**
	 * 提交事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean commitTransaction()
	{
		boolean returnValue = commitTransaction_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean commitTransaction_void_NoVirtual(long pNativeObject);
	protected boolean commitTransaction_NoVirtual()
	{
		boolean returnValue = commitTransaction_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean rollbackTransaction_void_callback()
	{
		boolean returnValue = rollbackTransaction();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean rollbackTransaction_void(long pNativeObject);
	/**
	 * 撤销事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean rollbackTransaction()
	{
		boolean returnValue = rollbackTransaction_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rollbackTransaction_void_NoVirtual(long pNativeObject);
	protected boolean rollbackTransaction_NoVirtual()
	{
		boolean returnValue = rollbackTransaction_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback(int type, String tableName, long rec, boolean preparedStatement)
	{
		com.earthview.world.core.database.SqlDriver.EVStatementType typeParamValue = com.earthview.world.core.database.SqlDriver.EVStatementType.toEnum(type);
		String tableNameParamValue = tableName;
		com.earthview.world.core.database.SqlRecord recParamValue = new com.earthview.world.core.database.SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
		recParamValue.setDelegate(true);
		recParamValue.setInstancePointer(new InstancePointer(rec));
		IClassFactory recParamValueClassFactory = GlobalClassFactoryMap.get(recParamValue.getCppInstanceTypeName());
		if (recParamValueClassFactory != null)
		{
			recParamValue.setDelegate(true);
			recParamValue = (com.earthview.world.core.database.SqlRecord)recParamValueClassFactory.create();
			recParamValue.setDelegate(true);
			recParamValue.setInstancePointer(new InstancePointer(rec));
		}
		boolean preparedStatementParamValue = preparedStatement;
		String returnValue = sqlStatement(typeParamValue, tableNameParamValue, recParamValue, preparedStatementParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool(long pNativeObject, int type, String tableName, long rec, boolean preparedStatement);
	/**
	 * 根据所给参数信息，构造sql语句
	 * @param type sql语句类型
	 * @param tablename 表名
	 * @param rec 表的元信息
	 * @param preparedStatement 是否是准备语句
	 * @return sql语句
	 */
	public String sqlStatement(com.earthview.world.core.database.SqlDriver.EVStatementType type, String tableName, com.earthview.world.core.database.SqlRecord rec, boolean preparedStatement)
	{
		int typeParamValue = type.getValue();
		String tableNameParamValue = tableName;
		long recParamValue = rec.nativeObject.pointer;
		boolean preparedStatementParamValue = preparedStatement;
		String returnValue = sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool(this.nativeObject.pointer, typeParamValue, tableNameParamValue, recParamValue, preparedStatementParamValue);
		return returnValue;
	}
	native private String sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_NoVirtual(long pNativeObject, int type, String tableName, long rec, boolean preparedStatement);
	protected String sqlStatement_NoVirtual(com.earthview.world.core.database.SqlDriver.EVStatementType type, String tableName, com.earthview.world.core.database.SqlRecord rec, boolean preparedStatement)
	{
		int typeParamValue = type.getValue();
		String tableNameParamValue = tableName;
		long recParamValue = rec.nativeObject.pointer;
		boolean preparedStatementParamValue = preparedStatement;
		String returnValue = sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_NoVirtual(this.nativeObject.pointer, typeParamValue, tableNameParamValue, recParamValue, preparedStatementParamValue);
		return returnValue;
	}

	protected  boolean isIdentifierEscaped_ev_wstring_EVIdentifierType_callback(String identifier, int type)
	{
		String identifierParamValue = identifier;
		com.earthview.world.core.database.SqlDriver.EVIdentifierType typeParamValue = com.earthview.world.core.database.SqlDriver.EVIdentifierType.toEnum(type);
		boolean returnValue = isIdentifierEscaped(identifierParamValue, typeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIdentifierEscaped_ev_wstring_EVIdentifierType(long pNativeObject, String identifier, int type);
	/**
	 * 是否为需要跳过的标示符
	 * @param identifier 标示符
	 * @param type 标示符类型
	 * @return 是需要跳过的标示符返回true,否则返回false
	 */
	public boolean isIdentifierEscaped(String identifier, com.earthview.world.core.database.SqlDriver.EVIdentifierType type)
	{
		String identifierParamValue = identifier;
		int typeParamValue = type.getValue();
		boolean returnValue = isIdentifierEscaped_ev_wstring_EVIdentifierType(this.nativeObject.pointer, identifierParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean isIdentifierEscaped_ev_wstring_EVIdentifierType_NoVirtual(long pNativeObject, String identifier, int type);
	protected boolean isIdentifierEscaped_NoVirtual(String identifier, com.earthview.world.core.database.SqlDriver.EVIdentifierType type)
	{
		String identifierParamValue = identifier;
		int typeParamValue = type.getValue();
		boolean returnValue = isIdentifierEscaped_ev_wstring_EVIdentifierType_NoVirtual(this.nativeObject.pointer, identifierParamValue, typeParamValue);
		return returnValue;
	}

	protected  String escapeIdentifier_ev_wstring_EVIdentifierType_callback(String identifier, int type)
	{
		String identifierParamValue = identifier;
		com.earthview.world.core.database.SqlDriver.EVIdentifierType typeParamValue = com.earthview.world.core.database.SqlDriver.EVIdentifierType.toEnum(type);
		String returnValue = escapeIdentifier(identifierParamValue, typeParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String escapeIdentifier_ev_wstring_EVIdentifierType(long pNativeObject, String identifier, int type);
	/**
	 * 跳过标示符
	 * @param identifier 标示符
	 * @param type 标示符类型
	 * @return 跳过标示后的字符串
	 */
	public String escapeIdentifier(String identifier, com.earthview.world.core.database.SqlDriver.EVIdentifierType type)
	{
		String identifierParamValue = identifier;
		int typeParamValue = type.getValue();
		String returnValue = escapeIdentifier_ev_wstring_EVIdentifierType(this.nativeObject.pointer, identifierParamValue, typeParamValue);
		return returnValue;
	}
	native private String escapeIdentifier_ev_wstring_EVIdentifierType_NoVirtual(long pNativeObject, String identifier, int type);
	protected String escapeIdentifier_NoVirtual(String identifier, com.earthview.world.core.database.SqlDriver.EVIdentifierType type)
	{
		String identifierParamValue = identifier;
		int typeParamValue = type.getValue();
		String returnValue = escapeIdentifier_ev_wstring_EVIdentifierType_NoVirtual(this.nativeObject.pointer, identifierParamValue, typeParamValue);
		return returnValue;
	}

	protected  String formatValue_CSqlField_ev_bool_callback(long field, boolean trimStrings)
	{
		com.earthview.world.core.database.SqlField fieldParamValue = new com.earthview.world.core.database.SqlField(CreatedWhenConstruct.CWC_NotToCreate);
		fieldParamValue.setDelegate(true);
		fieldParamValue.setInstancePointer(new InstancePointer(field));
		IClassFactory fieldParamValueClassFactory = GlobalClassFactoryMap.get(fieldParamValue.getCppInstanceTypeName());
		if (fieldParamValueClassFactory != null)
		{
			fieldParamValue.setDelegate(true);
			fieldParamValue = (com.earthview.world.core.database.SqlField)fieldParamValueClassFactory.create();
			fieldParamValue.setDelegate(true);
			fieldParamValue.setInstancePointer(new InstancePointer(field));
		}
		boolean trimStringsParamValue = trimStrings;
		String returnValue = formatValue(fieldParamValue, trimStringsParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String formatValue_CSqlField_ev_bool(long pNativeObject, long field, boolean trimStrings);
	/**
	 * 格式化字段值
	 * @param field 字段
	 * @param trimStrings 是否截断filed尾部的所有空白字符
	 * @return 格式化后的字符串
	 */
	public String formatValue(com.earthview.world.core.database.SqlField field, boolean trimStrings)
	{
		long fieldParamValue = field.nativeObject.pointer;
		boolean trimStringsParamValue = trimStrings;
		String returnValue = formatValue_CSqlField_ev_bool(this.nativeObject.pointer, fieldParamValue, trimStringsParamValue);
		return returnValue;
	}
	native private String formatValue_CSqlField_ev_bool_NoVirtual(long pNativeObject, long field, boolean trimStrings);
	protected String formatValue_NoVirtual(com.earthview.world.core.database.SqlField field, boolean trimStrings)
	{
		long fieldParamValue = field.nativeObject.pointer;
		boolean trimStringsParamValue = trimStrings;
		String returnValue = formatValue_CSqlField_ev_bool_NoVirtual(this.nativeObject.pointer, fieldParamValue, trimStringsParamValue);
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
	public SqlDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handle_void(long pNativeObject, String method);
	native protected void register_hasFeature_EVDriverFeature(long pNativeObject, String method);
	native protected void register_isOpen_void(long pNativeObject, String method);
	native protected void register_exist_ev_wstring(long pNativeObject, String method);
	native protected void register_tables_EVTableType(long pNativeObject, String method);
	native protected void register_primaryIndex_ev_wstring(long pNativeObject, String method);
	native protected void register_record_ev_wstring(long pNativeObject, String method);
	native protected void register_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(long pNativeObject, String method);
	native protected void register_close_void(long pNativeObject, String method);
	native protected void register_createResult_void(long pNativeObject, String method);
	native protected void register_beginTransaction_void(long pNativeObject, String method);
	native protected void register_commitTransaction_void(long pNativeObject, String method);
	native protected void register_rollbackTransaction_void(long pNativeObject, String method);
	native protected void register_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool(long pNativeObject, String method);
	native protected void register_isIdentifierEscaped_ev_wstring_EVIdentifierType(long pNativeObject, String method);
	native protected void register_escapeIdentifier_ev_wstring_EVIdentifierType(long pNativeObject, String method);
	native protected void register_formatValue_CSqlField_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handle_void(this.nativeObject.pointer, "handle_void_callback");
			this.register_hasFeature_EVDriverFeature(this.nativeObject.pointer, "hasFeature_EVDriverFeature_callback");
			this.register_isOpen_void(this.nativeObject.pointer, "isOpen_void_callback");
			this.register_exist_ev_wstring(this.nativeObject.pointer, "exist_ev_wstring_callback");
			this.register_tables_EVTableType(this.nativeObject.pointer, "tables_EVTableType_callback");
			this.register_primaryIndex_ev_wstring(this.nativeObject.pointer, "primaryIndex_ev_wstring_callback");
			this.register_record_ev_wstring(this.nativeObject.pointer, "record_ev_wstring_callback");
			this.register_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(this.nativeObject.pointer, "open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback");
			this.register_close_void(this.nativeObject.pointer, "close_void_callback");
			this.register_createResult_void(this.nativeObject.pointer, "createResult_void_callback");
			this.register_beginTransaction_void(this.nativeObject.pointer, "beginTransaction_void_callback");
			this.register_commitTransaction_void(this.nativeObject.pointer, "commitTransaction_void_callback");
			this.register_rollbackTransaction_void(this.nativeObject.pointer, "rollbackTransaction_void_callback");
			this.register_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool(this.nativeObject.pointer, "sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback");
			this.register_isIdentifierEscaped_ev_wstring_EVIdentifierType(this.nativeObject.pointer, "isIdentifierEscaped_ev_wstring_EVIdentifierType_callback");
			this.register_escapeIdentifier_ev_wstring_EVIdentifierType(this.nativeObject.pointer, "escapeIdentifier_ev_wstring_EVIdentifierType_callback");
			this.register_formatValue_CSqlField_ev_bool(this.nativeObject.pointer, "formatValue_CSqlField_ev_bool_callback");
		}
	}
	
	public static SqlDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlDriver obj = null;
 		if(baseObj instanceof SqlDriver)
		{
			obj = (SqlDriver)baseObj;
		} else {
			obj = new SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
