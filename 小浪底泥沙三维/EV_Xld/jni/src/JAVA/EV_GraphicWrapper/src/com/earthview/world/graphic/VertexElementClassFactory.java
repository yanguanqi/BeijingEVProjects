package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexElement emptyInstance = new VertexElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
