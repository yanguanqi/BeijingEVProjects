package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandPageSettingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandPageSetting emptyInstance = new CommandPageSetting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
