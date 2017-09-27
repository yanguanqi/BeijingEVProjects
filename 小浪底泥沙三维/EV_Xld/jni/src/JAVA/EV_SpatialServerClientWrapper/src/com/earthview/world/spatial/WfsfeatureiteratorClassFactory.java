package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsfeatureiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsfeatureiterator emptyInstance = new Wfsfeatureiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
