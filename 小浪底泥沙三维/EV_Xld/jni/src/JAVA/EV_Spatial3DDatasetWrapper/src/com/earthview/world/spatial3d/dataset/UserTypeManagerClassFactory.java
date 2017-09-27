package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UserTypeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UserTypeManager emptyInstance = new UserTypeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
