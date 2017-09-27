package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingPolygonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingPolygon emptyInstance = new EditingPolygon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
