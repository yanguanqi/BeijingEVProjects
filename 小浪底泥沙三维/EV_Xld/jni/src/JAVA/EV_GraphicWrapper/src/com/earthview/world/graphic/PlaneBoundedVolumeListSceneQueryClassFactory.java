package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneBoundedVolumeListSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaneBoundedVolumeListSceneQuery emptyInstance = new PlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
