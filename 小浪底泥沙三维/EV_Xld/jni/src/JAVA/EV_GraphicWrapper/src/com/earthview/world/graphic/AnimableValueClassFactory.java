package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimableValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimableValue emptyInstance = new AnimableValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
