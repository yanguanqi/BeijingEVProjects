package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BilstructClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Bilstruct emptyInstance = new Bilstruct(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
