package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DMeasureLengthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DMeasureLength emptyInstance = new Math3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
