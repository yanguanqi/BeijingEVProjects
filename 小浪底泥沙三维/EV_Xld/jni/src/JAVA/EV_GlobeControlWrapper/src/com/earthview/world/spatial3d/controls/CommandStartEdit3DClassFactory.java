package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandStartEdit3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandStartEdit3D emptyInstance = new CommandStartEdit3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
