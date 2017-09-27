package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshSerializerListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubMeshSerializerList emptyInstance = new SubMeshSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
