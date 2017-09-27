package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloatGpuParameterControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloatGpuParameterControllerValue emptyInstance = new FloatGpuParameterControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
