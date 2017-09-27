package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereTransformKeyFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SphereTransformKeyFrame emptyInstance = new SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
