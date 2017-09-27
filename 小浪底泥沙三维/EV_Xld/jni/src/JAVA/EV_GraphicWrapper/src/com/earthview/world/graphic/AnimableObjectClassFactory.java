package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimableObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimableObject emptyInstance = new AnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
