package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntitySelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntitySelection emptyInstance = new EntitySelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
