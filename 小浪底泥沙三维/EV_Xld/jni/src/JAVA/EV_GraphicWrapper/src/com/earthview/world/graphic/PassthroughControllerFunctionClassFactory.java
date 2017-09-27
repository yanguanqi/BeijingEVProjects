package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PassthroughControllerFunctionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PassthroughControllerFunction emptyInstance = new PassthroughControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
