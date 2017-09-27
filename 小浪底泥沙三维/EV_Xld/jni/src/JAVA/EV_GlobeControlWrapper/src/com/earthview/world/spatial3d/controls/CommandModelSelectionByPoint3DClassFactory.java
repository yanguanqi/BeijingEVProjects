package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandModelSelectionByPoint3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandModelSelectionByPoint3D emptyInstance = new CommandModelSelectionByPoint3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
