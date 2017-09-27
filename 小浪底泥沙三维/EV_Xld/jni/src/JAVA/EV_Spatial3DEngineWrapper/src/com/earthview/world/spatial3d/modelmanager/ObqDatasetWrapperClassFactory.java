package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqDatasetWrapperClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqDatasetWrapper emptyInstance = new ObqDatasetWrapper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
