package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingPolylineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingPolyline emptyInstance = new EditingPolyline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
