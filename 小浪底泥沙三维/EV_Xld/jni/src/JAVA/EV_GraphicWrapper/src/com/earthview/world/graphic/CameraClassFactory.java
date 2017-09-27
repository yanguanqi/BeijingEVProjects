package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Camera emptyInstance = new Camera(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
