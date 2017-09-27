package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlabelengineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilabelengine emptyInstance = new Ilabelengine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
