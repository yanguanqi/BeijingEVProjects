package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Function emptyInstance = new Function(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
