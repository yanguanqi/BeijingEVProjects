package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasLODGeneratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasLODGenerator emptyInstance = new LasLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
