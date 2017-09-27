package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeTagSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodeTagSerializer emptyInstance = new NodeTagSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
