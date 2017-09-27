package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDatasetEditEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDatasetEditEvent emptyInstance = new ModelDatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
