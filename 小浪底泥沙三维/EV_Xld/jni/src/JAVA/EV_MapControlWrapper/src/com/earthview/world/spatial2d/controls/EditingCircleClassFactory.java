package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingCircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingCircle emptyInstance = new EditingCircle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
