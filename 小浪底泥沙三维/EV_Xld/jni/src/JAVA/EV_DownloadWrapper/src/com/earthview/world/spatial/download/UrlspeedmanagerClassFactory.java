package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UrlspeedmanagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Urlspeedmanager emptyInstance = new Urlspeedmanager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
