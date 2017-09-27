package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Command3DMeasureAzimuthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Command3DMeasureAzimuth emptyInstance = new Command3DMeasureAzimuth(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
