package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingStateMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingStateMap emptyInstance = new EditingStateMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
