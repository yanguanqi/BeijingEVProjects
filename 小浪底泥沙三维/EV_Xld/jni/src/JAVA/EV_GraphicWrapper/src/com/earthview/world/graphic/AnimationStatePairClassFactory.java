package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStatePairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStatePair emptyInstance = new AnimationStatePair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
