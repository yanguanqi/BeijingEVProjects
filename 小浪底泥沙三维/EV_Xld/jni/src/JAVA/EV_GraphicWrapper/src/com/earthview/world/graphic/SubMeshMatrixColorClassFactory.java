package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshMatrixColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubMeshMatrixColor emptyInstance = new SubMeshMatrixColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
