package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationControlPointMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationControlPointMap emptyInstance = new AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
