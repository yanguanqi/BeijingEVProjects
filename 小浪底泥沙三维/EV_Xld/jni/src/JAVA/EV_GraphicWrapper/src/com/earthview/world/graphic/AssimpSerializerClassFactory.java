package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AssimpSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AssimpSerializer emptyInstance = new AssimpSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
