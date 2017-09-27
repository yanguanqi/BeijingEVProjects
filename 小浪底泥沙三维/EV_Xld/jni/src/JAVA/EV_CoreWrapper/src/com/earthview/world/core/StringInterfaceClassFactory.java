package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringInterfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StringInterface emptyInstance = new StringInterface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
