package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureAzimuthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureAzimuth emptyInstance = new Analysis3DMeasureAzimuth(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
