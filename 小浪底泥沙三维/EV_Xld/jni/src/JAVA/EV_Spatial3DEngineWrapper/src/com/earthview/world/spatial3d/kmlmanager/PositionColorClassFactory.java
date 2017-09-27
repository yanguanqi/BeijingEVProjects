package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PositionColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PositionColor emptyInstance = new PositionColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
