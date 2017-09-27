package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSelectionByPoint3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSelectionByPoint3D emptyInstance = new CommandSelectionByPoint3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
