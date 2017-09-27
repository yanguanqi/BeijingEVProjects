package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Animation emptyInstance = new Animation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
