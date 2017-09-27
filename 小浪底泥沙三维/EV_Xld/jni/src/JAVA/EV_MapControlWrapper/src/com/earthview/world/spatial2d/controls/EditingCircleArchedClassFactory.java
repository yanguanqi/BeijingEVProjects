package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingCircleArchedClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingCircleArched emptyInstance = new EditingCircleArched(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
