package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureLengthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureLength emptyInstance = new Analysis3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
