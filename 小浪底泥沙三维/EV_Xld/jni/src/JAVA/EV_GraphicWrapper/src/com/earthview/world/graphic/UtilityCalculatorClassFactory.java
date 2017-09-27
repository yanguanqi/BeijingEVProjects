package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UtilityCalculatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UtilityCalculator emptyInstance = new UtilityCalculator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
