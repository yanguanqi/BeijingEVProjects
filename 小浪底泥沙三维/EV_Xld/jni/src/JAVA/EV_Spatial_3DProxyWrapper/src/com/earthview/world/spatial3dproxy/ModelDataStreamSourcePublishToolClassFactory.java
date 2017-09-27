package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataStreamSourcePublishToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataStreamSourcePublishTool emptyInstance = new ModelDataStreamSourcePublishTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
