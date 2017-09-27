package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandPool extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("CCommandPool", new CommandPoolClassFactory());
	}

	public CommandPool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCommandPool", null);
	}

	native private void connect_ISpatialControl(long pNativeObject, long ref_ctrl);
	/**
	 * 与指定控件相关联
	 * @param ctrl 指定控件
	 */
	public void connect(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		connect_ISpatialControl(this.nativeObject.pointer, ref_ctrlParamValue);
	}
	native private long getCommand_ev_uint32(long pNativeObject, long type);
	/**
	 * 获取指定类型的命令
	 * @param type 命令项的类型
	 * @return 命令项
	 */
	public com.earthview.world.spatial.systemui.Icommand getCommand(long type)
	{
		long typeParamValue = type;
		long returnValue = getCommand_ev_uint32(this.nativeObject.pointer, typeParamValue);
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
	native private void addCommand_ICommand(long pNativeObject, long ref_cmd);
	/**
	 * 添加命令项
	 * @param cmd 命令项
	 */
	public void addCommand(com.earthview.world.spatial.systemui.Icommand ref_cmd)
	{
		long ref_cmdParamValue = (ref_cmd == null ? 0L : ref_cmd.nativeObject.pointer);
		addCommand_ICommand(this.nativeObject.pointer, ref_cmdParamValue);
	}
	native private void removeCommand_ev_uint32(long pNativeObject, long type);
	/**
	 * 移除命令项
	 * @param type 待移除的命令项类型
	 */
	public void removeCommand(long type)
	{
		long typeParamValue = type;
		removeCommand_ev_uint32(this.nativeObject.pointer, typeParamValue);
	}
	public CommandPool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommandPool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CommandPool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommandPool obj = null;
 		if(baseObj instanceof CommandPool)
		{
			obj = (CommandPool)baseObj;
		} else {
			obj = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommandPool");
			obj.increaseCast();
		}

		return obj;
	}
}
