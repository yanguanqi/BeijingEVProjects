package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasOptimizeParamsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasOptimizeParams emptyInstance = new LasOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
