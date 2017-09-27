package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinearSkinningClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinearSkinning emptyInstance = new LinearSkinning(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
