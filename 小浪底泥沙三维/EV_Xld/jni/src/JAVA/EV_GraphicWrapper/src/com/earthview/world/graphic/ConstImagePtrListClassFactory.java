package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConstImagePtrListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConstImagePtrList emptyInstance = new ConstImagePtrList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
