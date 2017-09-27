package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationControllerFunctionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationControllerFunction emptyInstance = new AnimationControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
