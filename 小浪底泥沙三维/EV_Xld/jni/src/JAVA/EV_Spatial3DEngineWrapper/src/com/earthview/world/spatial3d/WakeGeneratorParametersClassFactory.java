package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WakeGeneratorParametersClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WakeGeneratorParameters emptyInstance = new WakeGeneratorParameters(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
