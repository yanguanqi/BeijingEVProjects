package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntegratedPSSM3ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntegratedPSSM3 emptyInstance = new IntegratedPSSM3(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
