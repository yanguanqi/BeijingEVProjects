package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStateSet emptyInstance = new AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
