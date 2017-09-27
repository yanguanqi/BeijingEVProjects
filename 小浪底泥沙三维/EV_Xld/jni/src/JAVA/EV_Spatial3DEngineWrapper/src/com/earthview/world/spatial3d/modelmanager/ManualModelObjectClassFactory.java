package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ManualModelObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ManualModelObject emptyInstance = new ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
