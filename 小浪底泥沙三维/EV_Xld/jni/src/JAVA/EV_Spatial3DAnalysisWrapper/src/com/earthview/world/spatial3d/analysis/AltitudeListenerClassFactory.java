package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AltitudeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AltitudeListener emptyInstance = new AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
