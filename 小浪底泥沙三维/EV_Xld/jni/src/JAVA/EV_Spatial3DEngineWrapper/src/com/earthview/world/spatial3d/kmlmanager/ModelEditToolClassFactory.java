package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelEditTool emptyInstance = new ModelEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
