package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshTemplateIterator emptyInstance = new MeshTemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
