package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewportClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Viewport emptyInstance = new Viewport(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
