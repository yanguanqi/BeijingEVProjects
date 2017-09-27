package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RevolvingVolumeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RevolvingVolume emptyInstance = new RevolvingVolume(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
