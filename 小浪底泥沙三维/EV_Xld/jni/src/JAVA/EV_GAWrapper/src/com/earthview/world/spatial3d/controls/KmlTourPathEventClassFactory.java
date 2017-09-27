package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourPathEvent emptyInstance = new KmlTourPathEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
