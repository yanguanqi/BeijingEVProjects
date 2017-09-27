package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandModelSelection3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandModelSelection3D emptyInstance = new CommandModelSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
