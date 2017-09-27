package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodeSerializer emptyInstance = new NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
