package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfplightingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffplighting emptyInstance = new Ffplighting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
