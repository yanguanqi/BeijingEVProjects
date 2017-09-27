package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DVolumeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DVolume emptyInstance = new Analysis3DVolume(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
