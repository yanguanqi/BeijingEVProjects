package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureLengthParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureLengthParam emptyInstance = new Analysis3DMeasureLengthParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
