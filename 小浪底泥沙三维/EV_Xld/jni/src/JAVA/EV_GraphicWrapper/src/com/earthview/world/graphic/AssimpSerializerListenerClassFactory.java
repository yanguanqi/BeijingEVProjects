package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AssimpSerializerListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AssimpSerializerListener emptyInstance = new AssimpSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
