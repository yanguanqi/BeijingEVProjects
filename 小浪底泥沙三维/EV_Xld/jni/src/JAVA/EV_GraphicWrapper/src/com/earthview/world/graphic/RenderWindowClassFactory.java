package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderWindowClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderWindow emptyInstance = new RenderWindow(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
