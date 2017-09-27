package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EnvelopListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EnvelopListener emptyInstance = new EnvelopListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
