package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStateMap emptyInstance = new AnimationStateMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
