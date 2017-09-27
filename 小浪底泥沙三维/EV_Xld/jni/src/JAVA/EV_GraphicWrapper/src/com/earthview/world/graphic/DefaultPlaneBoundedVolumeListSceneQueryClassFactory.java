package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultPlaneBoundedVolumeListSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultPlaneBoundedVolumeListSceneQuery emptyInstance = new DefaultPlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
