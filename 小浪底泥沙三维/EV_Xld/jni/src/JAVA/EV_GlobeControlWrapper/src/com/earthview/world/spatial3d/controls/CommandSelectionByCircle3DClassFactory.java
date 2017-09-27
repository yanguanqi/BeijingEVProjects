package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSelectionByCircle3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSelectionByCircle3D emptyInstance = new CommandSelectionByCircle3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
