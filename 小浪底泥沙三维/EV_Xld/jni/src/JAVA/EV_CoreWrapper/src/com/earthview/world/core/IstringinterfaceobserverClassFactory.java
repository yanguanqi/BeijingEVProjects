package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class IstringinterfaceobserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Istringinterfaceobserver emptyInstance = new Istringinterfaceobserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
