package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreePlaneBoundedVolumeListSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreePlaneBoundedVolumeListSceneQuery emptyInstance = new OctreePlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
