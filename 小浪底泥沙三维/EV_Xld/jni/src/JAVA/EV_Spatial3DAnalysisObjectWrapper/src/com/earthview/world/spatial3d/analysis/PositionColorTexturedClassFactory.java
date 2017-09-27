package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PositionColorTexturedClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PositionColorTextured emptyInstance = new PositionColorTextured(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
