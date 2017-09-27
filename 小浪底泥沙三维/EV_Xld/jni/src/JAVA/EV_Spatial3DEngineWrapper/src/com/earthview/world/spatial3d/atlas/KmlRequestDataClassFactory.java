package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlRequestDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlRequestData emptyInstance = new KmlRequestData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
