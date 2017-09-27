package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleControllerFunctionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleControllerFunction emptyInstance = new ScaleControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
