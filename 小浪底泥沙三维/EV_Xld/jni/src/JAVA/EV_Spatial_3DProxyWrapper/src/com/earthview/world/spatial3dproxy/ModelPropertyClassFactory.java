package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelPropertyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelProperty emptyInstance = new ModelProperty(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
