package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnotationBuilderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnotationBuilder emptyInstance = new AnnotationBuilder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
