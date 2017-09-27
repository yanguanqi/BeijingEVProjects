package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Altitude3DListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Altitude3DListener emptyInstance = new Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
