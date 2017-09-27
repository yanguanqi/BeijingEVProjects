package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqrecordinfolistClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqrecordinfolist emptyInstance = new Obqrecordinfolist(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
