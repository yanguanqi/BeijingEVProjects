package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfeatureselectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeatureselection emptyInstance = new Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
