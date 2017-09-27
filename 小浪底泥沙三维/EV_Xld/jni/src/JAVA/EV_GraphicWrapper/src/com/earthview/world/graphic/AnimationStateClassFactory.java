package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationState emptyInstance = new AnimationState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
