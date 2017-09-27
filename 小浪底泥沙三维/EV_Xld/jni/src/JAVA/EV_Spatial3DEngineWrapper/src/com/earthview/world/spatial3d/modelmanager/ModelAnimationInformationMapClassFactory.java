package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelAnimationInformationMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelAnimationInformationMap emptyInstance = new ModelAnimationInformationMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
