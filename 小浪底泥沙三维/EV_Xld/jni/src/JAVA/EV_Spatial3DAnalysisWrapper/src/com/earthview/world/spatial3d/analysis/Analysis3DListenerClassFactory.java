package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DListener emptyInstance = new Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
