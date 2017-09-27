package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfptexturingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffptexturing emptyInstance = new Ffptexturing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
