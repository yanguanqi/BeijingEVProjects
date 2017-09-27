package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObjectAbstractNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObjectAbstractNode emptyInstance = new ObjectAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
