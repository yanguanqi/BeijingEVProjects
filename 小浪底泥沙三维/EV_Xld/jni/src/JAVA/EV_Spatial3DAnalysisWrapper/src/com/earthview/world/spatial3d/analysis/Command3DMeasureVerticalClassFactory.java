package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Command3DMeasureVerticalClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Command3DMeasureVertical emptyInstance = new Command3DMeasureVertical(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
