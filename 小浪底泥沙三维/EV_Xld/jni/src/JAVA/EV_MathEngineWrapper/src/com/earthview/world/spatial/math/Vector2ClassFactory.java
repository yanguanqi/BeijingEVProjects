package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Vector2 emptyInstance = new Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
