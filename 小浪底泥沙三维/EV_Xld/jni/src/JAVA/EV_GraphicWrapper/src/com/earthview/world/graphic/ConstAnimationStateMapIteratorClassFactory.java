package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConstAnimationStateMapIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConstAnimationStateMapIterator emptyInstance = new ConstAnimationStateMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
