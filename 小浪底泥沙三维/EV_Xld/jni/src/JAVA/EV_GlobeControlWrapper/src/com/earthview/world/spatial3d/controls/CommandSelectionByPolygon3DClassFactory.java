package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSelectionByPolygon3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSelectionByPolygon3D emptyInstance = new CommandSelectionByPolygon3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
