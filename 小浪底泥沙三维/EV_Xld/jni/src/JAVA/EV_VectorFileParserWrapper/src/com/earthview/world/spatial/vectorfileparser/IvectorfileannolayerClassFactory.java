package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfileannolayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfileannolayer emptyInstance = new Ivectorfileannolayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
