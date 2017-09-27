package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshSerializer emptyInstance = new MeshSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
