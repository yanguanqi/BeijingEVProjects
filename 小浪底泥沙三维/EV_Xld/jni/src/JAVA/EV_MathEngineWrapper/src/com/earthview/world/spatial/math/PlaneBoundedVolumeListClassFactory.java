package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneBoundedVolumeListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaneBoundedVolumeList emptyInstance = new PlaneBoundedVolumeList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
