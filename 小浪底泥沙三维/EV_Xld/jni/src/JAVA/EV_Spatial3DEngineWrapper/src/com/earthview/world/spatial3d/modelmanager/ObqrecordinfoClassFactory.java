package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqrecordinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqrecordinfo emptyInstance = new Obqrecordinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
