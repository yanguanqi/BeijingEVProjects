package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelPublishToolListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelPublishToolListener emptyInstance = new ModelPublishToolListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
