package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStateList emptyInstance = new AnimationStateList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
