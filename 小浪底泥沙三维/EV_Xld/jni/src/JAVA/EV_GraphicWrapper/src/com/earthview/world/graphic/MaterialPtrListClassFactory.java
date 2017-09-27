package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialPtrListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialPtrList emptyInstance = new MaterialPtrList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
