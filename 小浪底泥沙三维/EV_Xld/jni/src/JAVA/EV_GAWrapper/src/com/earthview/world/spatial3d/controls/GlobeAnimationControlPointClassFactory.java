package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationControlPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeAnimationControlPoint emptyInstance = new GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
