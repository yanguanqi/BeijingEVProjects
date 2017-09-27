package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimationSerializer emptyInstance = new AnimationSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
