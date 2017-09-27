package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneBoundedVolumeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaneBoundedVolume emptyInstance = new PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
