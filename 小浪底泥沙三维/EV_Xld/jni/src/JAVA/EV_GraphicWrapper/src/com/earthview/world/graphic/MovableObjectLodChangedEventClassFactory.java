package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableObjectLodChangedEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableObjectLodChangedEvent emptyInstance = new MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
