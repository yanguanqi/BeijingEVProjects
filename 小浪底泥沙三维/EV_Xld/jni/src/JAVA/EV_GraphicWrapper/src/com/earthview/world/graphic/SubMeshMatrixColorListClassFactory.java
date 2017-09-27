package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshMatrixColorListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubMeshMatrixColorList emptyInstance = new SubMeshMatrixColorList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
