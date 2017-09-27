package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public class NewNonPointTypeToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NewNonPointTypeTool emptyInstance = new NewNonPointTypeTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
