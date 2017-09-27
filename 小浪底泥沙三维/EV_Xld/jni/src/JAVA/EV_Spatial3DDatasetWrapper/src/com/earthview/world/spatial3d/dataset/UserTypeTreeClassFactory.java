package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UserTypeTreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UserTypeTree emptyInstance = new UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
