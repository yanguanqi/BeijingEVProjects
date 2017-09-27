package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableCurveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableCurve emptyInstance = new MovableCurve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
