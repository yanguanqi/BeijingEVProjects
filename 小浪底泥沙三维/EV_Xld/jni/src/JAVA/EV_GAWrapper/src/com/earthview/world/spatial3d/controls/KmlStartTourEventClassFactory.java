package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartTourEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlStartTourEvent emptyInstance = new KmlStartTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
