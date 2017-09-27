package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ArrowMathEngineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ArrowMathEngine emptyInstance = new ArrowMathEngine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
