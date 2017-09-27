package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandEffectSelection3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandEffectSelection3D emptyInstance = new CommandEffectSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
