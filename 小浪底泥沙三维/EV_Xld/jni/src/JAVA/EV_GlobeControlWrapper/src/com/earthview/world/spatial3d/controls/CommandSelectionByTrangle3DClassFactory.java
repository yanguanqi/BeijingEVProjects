package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSelectionByTrangle3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSelectionByTrangle3D emptyInstance = new CommandSelectionByTrangle3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
