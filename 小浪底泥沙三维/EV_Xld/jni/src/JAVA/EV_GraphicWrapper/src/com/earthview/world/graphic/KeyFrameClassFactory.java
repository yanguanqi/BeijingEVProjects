package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KeyFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KeyFrame emptyInstance = new KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
