package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 代表一个数据库的连接通过一个数据库连接提供访问数据库的接口
 */
public class SqlDatabase extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDatabase", new SqlDatabaseClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SqlDatabase() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlDatabase", null);
	}

	/**
	 * 拷贝构造函数
	 */
	public SqlDatabase(com.earthview.world.core.database.SqlDatabase other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlDatabase", list);
	}

	native private long OperatorAssign_CSqlDatabase(long pNativeObject, long other);
	/**
	 * 复制操作符的重载
	 * @param other EarthView::World::Core::Database::CSqlDatabase对象的引用
	 * @return 当前对象的引
	 */
	public com.earthview.world.core.database.SqlDatabase OperatorAssign(com.earthview.world.core.database.SqlDatabase other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlDatabase(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private boolean open_void(long pNativeObject);
	/**
	 * 使用当前的连接值打开数据库连接
	 * @param  
	 * @return 打开成功返回true，打开失败返回false
	 */
	public boolean open()
	{
		boolean returnValue = open_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean open_ev_wstring_ev_wstring(long pNativeObject, String user, String password);
	/**
	 * 使用给定的用户名和密码打开数据库连接
	 * @param user 用户名
	 * @param password 密码
	 * @return 打开成功返回true，打开失败返回false
	 */
	public boolean open(String user, String password)
	{
		String userParamValue = user;
		String passwordParamValue = password;
		boolean returnValue = open_ev_wstring_ev_wstring(this.nativeObject.pointer, userParamValue, passwordParamValue);
		return returnValue;
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
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 是否有一个有效的数据库驱动
	 * @param  
	 * @return 有效返回true，否则返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean transaction_void(long pNativeObject);
	/**
	 * 开始事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean transaction()
	{
		boolean returnValue = transaction_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean commit_void(long pNativeObject);
	/**
	 * 提交事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean commit()
	{
		boolean returnValue = commit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rollback_void(long pNativeObject);
	/**
	 * 撤销事务
	 * @return 成功返回true，失败返回false
	 */
	public boolean rollback()
	{
		boolean returnValue = rollback_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDatabaseName_ev_wstring(long pNativeObject, String name);
	/**
	 * 设置数据库名
	 * @param name 数据库名
	 */
	public void setDatabaseName(String name)
	{
		String nameParamValue = name;
		setDatabaseName_ev_wstring(this.nativeObject.pointer, nameParamValue);
	}
	native private void setUserName_ev_wstring(long pNativeObject, String name);
	/**
	 * 设置用户名
	 * @param name 用户名
	 */
	public void setUserName(String name)
	{
		String nameParamValue = name;
		setUserName_ev_wstring(this.nativeObject.pointer, nameParamValue);
	}
	native private void setPassword_ev_wstring(long pNativeObject, String password);
	/**
	 * 设置密码
	 * @param password 密码
	 */
	public void setPassword(String password)
	{
		String passwordParamValue = password;
		setPassword_ev_wstring(this.nativeObject.pointer, passwordParamValue);
	}
	native private void setHostName_ev_wstring(long pNativeObject, String host);
	/**
	 * 设置主机名
	 * @param host 主机名
	 */
	public void setHostName(String host)
	{
		String hostParamValue = host;
		setHostName_ev_wstring(this.nativeObject.pointer, hostParamValue);
	}
	native private void setPort_ev_int32(long pNativeObject, int p);
	/**
	 * 设置端口
	 * @param p 端口号
	 */
	public void setPort(int p)
	{
		int pParamValue = p;
		setPort_ev_int32(this.nativeObject.pointer, pParamValue);
	}
	native private void setConnectOptions_ev_wstring(long pNativeObject, String options);
	/**
	 * 设置连接选项
	 * @param options 连接选项
	 */
	public void setConnectOptions(String options)
	{
		String optionsParamValue = options;
		setConnectOptions_ev_wstring(this.nativeObject.pointer, optionsParamValue);
	}
	native private long databaseName_void(long pNativeObject);
	/**
	 * 获取数据库名
	 * @param  
	 * @return 数据库名
	 */
	public WideStringPointer databaseName()
	{
		long returnValue = databaseName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long userName_void(long pNativeObject);
	/**
	 * 获取用户名
	 * @param  
	 * @return 用户名
	 */
	public WideStringPointer userName()
	{
		long returnValue = userName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long password_void(long pNativeObject);
	/**
	 * 获取密码
	 * @param  
	 * @return 密码
	 */
	public WideStringPointer password()
	{
		long returnValue = password_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long hostName_void(long pNativeObject);
	/**
	 * 获取主机名
	 * @param  
	 * @return 主机名
	 */
	public WideStringPointer hostName()
	{
		long returnValue = hostName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long driverName_void(long pNativeObject);
	/**
	 * 获取驱动名
	 * @param  
	 * @return 驱动名
	 */
	public WideStringPointer driverName()
	{
		long returnValue = driverName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int port_void(long pNativeObject);
	/**
	 * 获取端口号
	 * @param  
	 * @return 端口号
	 */
	public int port()
	{
		int returnValue = port_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long connectOptions_void(long pNativeObject);
	/**
	 * 获取连接选项
	 * @param  
	 * @return 连接选项
	 */
	public WideStringPointer connectOptions()
	{
		long returnValue = connectOptions_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long connectionName_void(long pNativeObject);
	/**
	 * 获取连接名
	 * @param  
	 * @return 连接名
	 */
	public WideStringPointer connectionName()
	{
		long returnValue = connectionName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long driver_void(long pNativeObject);
	/**
	 * 获取连接当前数据库的驱动对象
	 * @param  
	 * @return 数据库驱动对象
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
	native private long tables_EVTableType(long pNativeObject, int type);
	/**
	 * 返回数据库指定类型的所有表
	 * @param tablename 表名
	 * @return 返回包含的表名的EarthView::World::Core::CWStringArray
	 */
	public com.earthview.world.core.Wstringarray tables(com.earthview.world.core.database.EVTableType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = tables_EVTableType(this.nativeObject.pointer, typeParamValue);
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
	native private long record_ev_wstring(long pNativeObject, String tablename);
	/**
	 * 返回指定表的元信息，包含各个字段信息
	 * @param tablename 表名
	 * @return 返回对应的表的元信息的record
	 */
	public com.earthview.world.core.database.SqlRecord record(String tablename)
	{
		String tablenameParamValue = tablename;
		long returnValue = record_ev_wstring(this.nativeObject.pointer, tablenameParamValue);
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
	native private long primaryIndex_ev_wstring(long pNativeObject, String tablename);
	/**
	 * 返回表的主键索引
	 * @param tablename 表名
	 * @return 返回对应的表的EarthView::World::Core::Database::CSqlIndex
	 */
	public com.earthview.world.core.database.SqlIndex primaryIndex(String tablename)
	{
		String tablenameParamValue = tablename;
		long returnValue = primaryIndex_ev_wstring(this.nativeObject.pointer, tablenameParamValue);
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
	native private static long addDatabase_ev_wstring_ev_wstring(String type, String connectionName);
	/**
	 * 添加数据库
	 * @param type 数据库类型字符串
	 * @param connectionName 连接字符串
	 * @return 返回对应的数据库
	 */
	public static com.earthview.world.core.database.SqlDatabase addDatabase(String type, String connectionName)
	{
		String typeParamValue = type;
		String connectionNameParamValue = connectionName;
		long returnValue = addDatabase_ev_wstring_ev_wstring(typeParamValue, connectionNameParamValue);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private static long addDatabase_CSqlDriver_ev_wstring(long driver, String connectionName);
	/**
	 * 添加数据库
	 * @param driver 数据库驱动
	 * @param connectionName 连接字符串
	 * @return 返回对应的数据库
	 */
	public static com.earthview.world.core.database.SqlDatabase addDatabase(com.earthview.world.core.database.SqlDriver driver, String connectionName)
	{
		long driverParamValue = (driver == null ? 0L : driver.nativeObject.pointer);
		String connectionNameParamValue = connectionName;
		long returnValue = addDatabase_CSqlDriver_ev_wstring(driverParamValue, connectionNameParamValue);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private static long cloneDatabase_CSqlDatabase_ev_wstring(long other, String connectionName);
	/**
	 * 克隆数据库
	 * @param other 数据库
	 * @param connectionName 连接字符串
	 * @return 返回克隆的数据库
	 */
	public static com.earthview.world.core.database.SqlDatabase cloneDatabase(com.earthview.world.core.database.SqlDatabase other, String connectionName)
	{
		long otherParamValue = other.nativeObject.pointer;
		String connectionNameParamValue = connectionName;
		long returnValue = cloneDatabase_CSqlDatabase_ev_wstring(otherParamValue, connectionNameParamValue);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private static long database_ev_wstring_ev_bool(String connectionName, boolean open);
	/**
	 * 查找数据库
	 * @param connectionName 连接字符串
	 * @param open 如果没有是否打开
	 * @return 返回数据库
	 */
	public static com.earthview.world.core.database.SqlDatabase database(String connectionName, boolean open)
	{
		String connectionNameParamValue = connectionName;
		boolean openParamValue = open;
		long returnValue = database_ev_wstring_ev_bool(connectionNameParamValue, openParamValue);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private static void removeDatabase_ev_wstring(String connectionName);
	/**
	 * 移除数据库
	 * @param connectionName 连接字符串
	 */
	public static void removeDatabase(String connectionName)
	{
		String connectionNameParamValue = connectionName;
		removeDatabase_ev_wstring(connectionNameParamValue);
	}
	native private static boolean contains_ev_wstring(String connectionName);
	/**
	 * 判断是否包含了数据库
	 * @param connectionName 连接字符串
	 * @return 如果已存在，返回true，否则，false
	 */
	public static boolean contains(String connectionName)
	{
		String connectionNameParamValue = connectionName;
		boolean returnValue = contains_ev_wstring(connectionNameParamValue);
		return returnValue;
	}
	native private static long drivers_void();
	/**
	 * 获取所有的driver的对应字符串标识
	 * @return 返回所有的driver的对应标识字符串数组
	 */
	public static com.earthview.world.core.Wstringarray drivers()
	{
		long returnValue = drivers_void();
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
	native private static long connectionNames_void();
	/**
	 * 获取所有的连接名
	 * @return 返回所有的连接名字符串数组
	 */
	public static com.earthview.world.core.Wstringarray connectionNames()
	{
		long returnValue = connectionNames_void();
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
	native private static void registerSqlDriver_ev_wstring_CSqlDriverCreatorBase(String name, long creator);
	/**
	 * 注册数据库driver
	 * @param name 数据库类型字符串
	 * @param creator driver的创建者
	 */
	public static void registerSqlDriver(String name, com.earthview.world.core.database.SqlDriverCreatorBase creator)
	{
		String nameParamValue = name;
		long creatorParamValue = (creator == null ? 0L : creator.nativeObject.pointer);
		registerSqlDriver_ev_wstring_CSqlDriverCreatorBase(nameParamValue, creatorParamValue);
	}
	native private static boolean isDriverAvailable_ev_wstring(String name);
	/**
	 * 是否已经注册数据库driver
	 * @param name 数据库类型字符串
	 * @return 如果已注册返回true，否则false
	 */
	public static boolean isDriverAvailable(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isDriverAvailable_ev_wstring(nameParamValue);
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
	public SqlDatabase(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlDatabase(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlDatabase fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlDatabase obj = null;
 		if(baseObj instanceof SqlDatabase)
		{
			obj = (SqlDatabase)baseObj;
		} else {
			obj = new SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlDatabase");
			obj.increaseCast();
		}

		return obj;
	}
}
