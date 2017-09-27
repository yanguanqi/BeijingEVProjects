package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrameTimeControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FrameTimeControllerValue emptyInstance = new FrameTimeControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
