package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileAltitudeToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileAltitudeTool emptyInstance = new TileAltitudeTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
