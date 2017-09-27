package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdvistorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idvistor emptyInstance = new Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
