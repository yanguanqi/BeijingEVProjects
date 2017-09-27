package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStopTourEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlStopTourEvent emptyInstance = new KmlStopTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
