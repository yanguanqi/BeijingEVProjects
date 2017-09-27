package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshStream emptyInstance = new MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
