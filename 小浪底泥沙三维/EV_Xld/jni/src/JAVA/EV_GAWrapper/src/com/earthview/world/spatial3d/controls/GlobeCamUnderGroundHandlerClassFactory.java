package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeCamUnderGroundHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeCamUnderGroundHandler emptyInstance = new GlobeCamUnderGroundHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
