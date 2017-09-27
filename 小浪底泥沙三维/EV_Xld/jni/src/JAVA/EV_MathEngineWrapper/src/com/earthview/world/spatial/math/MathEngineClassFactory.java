package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathEngineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MathEngine emptyInstance = new MathEngine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
