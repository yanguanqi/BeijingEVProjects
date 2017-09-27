package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WstringarrayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wstringarray emptyInstance = new Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
