package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasurePointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasurePoint emptyInstance = new Analysis3DMeasurePoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
