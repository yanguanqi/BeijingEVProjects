package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationSerializerListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationSerializerList emptyInstance = new AnimationSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
