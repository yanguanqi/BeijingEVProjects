package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationTrailListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationTrailListener emptyInstance = new AnimationTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
