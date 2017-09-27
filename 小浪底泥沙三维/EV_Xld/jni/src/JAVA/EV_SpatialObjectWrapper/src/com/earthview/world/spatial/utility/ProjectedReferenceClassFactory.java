package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProjectedReferenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProjectedReference emptyInstance = new ProjectedReference(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
