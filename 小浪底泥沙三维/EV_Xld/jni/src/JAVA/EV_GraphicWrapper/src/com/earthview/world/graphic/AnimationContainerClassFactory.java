package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationContainerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationContainer emptyInstance = new AnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
