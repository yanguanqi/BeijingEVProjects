package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerMeshObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerMeshObject emptyInstance = new ServerMeshObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
