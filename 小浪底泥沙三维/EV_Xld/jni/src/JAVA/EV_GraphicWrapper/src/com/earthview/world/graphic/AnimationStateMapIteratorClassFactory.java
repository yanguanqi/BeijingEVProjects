package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateMapIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStateMapIterator emptyInstance = new AnimationStateMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
