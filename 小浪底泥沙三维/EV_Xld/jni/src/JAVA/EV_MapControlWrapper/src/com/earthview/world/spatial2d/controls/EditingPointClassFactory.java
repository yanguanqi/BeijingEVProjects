package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingPoint emptyInstance = new EditingPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
