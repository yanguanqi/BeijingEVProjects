package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileAltitudeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileAltitudeListener emptyInstance = new TileAltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
