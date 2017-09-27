package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLODGenerateListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelLODGenerateListener emptyInstance = new ModelLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
