package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerFunctionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControllerFunction emptyInstance = new ControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
