package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureHeightClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureHeight emptyInstance = new Analysis3DMeasureHeight(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
