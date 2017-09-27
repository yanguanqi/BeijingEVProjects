package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DVolumeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DVolume emptyInstance = new Math3DVolume(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
