package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeAnimationPath emptyInstance = new GlobeAnimationPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
