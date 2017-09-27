package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationStateControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationStateControllerValue emptyInstance = new AnimationStateControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
