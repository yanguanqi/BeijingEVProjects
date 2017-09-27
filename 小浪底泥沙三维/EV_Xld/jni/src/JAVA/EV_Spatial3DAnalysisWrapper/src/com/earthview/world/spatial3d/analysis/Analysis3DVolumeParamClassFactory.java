package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DVolumeParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DVolumeParam emptyInstance = new Analysis3DVolumeParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
