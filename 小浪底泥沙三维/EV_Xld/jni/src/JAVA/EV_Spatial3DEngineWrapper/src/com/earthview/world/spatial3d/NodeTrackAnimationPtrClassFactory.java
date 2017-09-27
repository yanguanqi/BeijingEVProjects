package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeTrackAnimationPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodeTrackAnimationPtr emptyInstance = new NodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
