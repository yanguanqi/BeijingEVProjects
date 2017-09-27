package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenOverlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenOverlayer emptyInstance = new ScreenOverlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
