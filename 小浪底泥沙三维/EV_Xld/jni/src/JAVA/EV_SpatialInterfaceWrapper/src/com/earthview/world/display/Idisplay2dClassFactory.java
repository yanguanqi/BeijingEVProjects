package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Idisplay2dClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idisplay2d emptyInstance = new Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
