package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerAnnotationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerAnnotation emptyInstance = new ServerAnnotation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
