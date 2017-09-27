package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSceneSerialzierClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelSceneSerialzier emptyInstance = new ModelSceneSerialzier(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
