package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasLODParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasLODParam emptyInstance = new LasLODParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
