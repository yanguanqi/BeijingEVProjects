package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlDocumentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlDocument emptyInstance = new KmlDocument(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
