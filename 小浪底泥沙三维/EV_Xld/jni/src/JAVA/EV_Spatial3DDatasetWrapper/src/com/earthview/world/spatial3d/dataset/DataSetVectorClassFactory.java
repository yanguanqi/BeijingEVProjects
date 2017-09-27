package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSetVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSetVector emptyInstance = new DataSetVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
