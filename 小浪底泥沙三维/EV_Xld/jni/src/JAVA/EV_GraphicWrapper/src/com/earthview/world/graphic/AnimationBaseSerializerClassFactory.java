package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationBaseSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationBaseSerializer emptyInstance = new AnimationBaseSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
