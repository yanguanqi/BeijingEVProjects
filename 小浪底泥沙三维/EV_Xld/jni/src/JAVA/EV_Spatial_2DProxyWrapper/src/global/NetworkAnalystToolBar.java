package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /网络分析工具条类/
 */
public class NetworkAnalystToolBar extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CNetworkAnalystToolBar", new NetworkAnalystToolBarClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public NetworkAnalystToolBar() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNetworkAnalystToolBar", null);
	}

	native private int getCmdCount_void(long pNativeObject);
	/**
	 * 获取命令个数
	 * @param  
	 * @return 命令个数
	 */
	public int getCmdCount()
	{
		int returnValue = getCmdCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCommand_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取给定索引处的命令
	 * @param index 索引号
	 * @return 命令
	 */
	public com.earthview.world.spatial.systemui.Icommand getCommand(long index)
	{
		long indexParamValue = index;
		long returnValue = getCommand_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Icommand __returnValue = new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate, "ICommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Icommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICommand");
		}
		return __returnValue;
	}
	public NetworkAnalystToolBar(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NetworkAnalystToolBar(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NetworkAnalystToolBar fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NetworkAnalystToolBar obj = null;
 		if(baseObj instanceof NetworkAnalystToolBar)
		{
			obj = (NetworkAnalystToolBar)baseObj;
		} else {
			obj = new NetworkAnalystToolBar(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNetworkAnalystToolBar");
			obj.increaseCast();
		}

		return obj;
	}
}
