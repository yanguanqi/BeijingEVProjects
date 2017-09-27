package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntegratedPSSM3FactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntegratedPSSM3Factory emptyInstance = new IntegratedPSSM3Factory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
