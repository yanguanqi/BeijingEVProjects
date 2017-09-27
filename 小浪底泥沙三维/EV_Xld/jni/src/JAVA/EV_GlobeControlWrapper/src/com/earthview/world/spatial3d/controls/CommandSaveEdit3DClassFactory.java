package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSaveEdit3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSaveEdit3D emptyInstance = new CommandSaveEdit3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
