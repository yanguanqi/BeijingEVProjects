package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingLongCircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingLongCircle emptyInstance = new EditingLongCircle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
