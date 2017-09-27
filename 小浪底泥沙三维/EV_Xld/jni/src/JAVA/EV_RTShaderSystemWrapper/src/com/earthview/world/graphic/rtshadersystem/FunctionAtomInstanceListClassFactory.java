package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionAtomInstanceListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FunctionAtomInstanceList emptyInstance = new FunctionAtomInstanceList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
