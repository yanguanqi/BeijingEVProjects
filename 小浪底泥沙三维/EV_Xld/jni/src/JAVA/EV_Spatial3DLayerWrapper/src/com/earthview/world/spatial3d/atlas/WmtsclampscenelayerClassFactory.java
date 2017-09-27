package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtsclampscenelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtsclampscenelayer emptyInstance = new Wmtsclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
