package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexDeclarationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexDeclaration emptyInstance = new VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
