package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrameListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FrameListener emptyInstance = new FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
