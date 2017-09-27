package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Command3DMeasureLengthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Command3DMeasureLength emptyInstance = new Command3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
