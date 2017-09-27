package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackAnimationVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackAnimationVector emptyInstance = new TrackAnimationVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
