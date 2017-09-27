package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Field emptyInstance = new Field(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
