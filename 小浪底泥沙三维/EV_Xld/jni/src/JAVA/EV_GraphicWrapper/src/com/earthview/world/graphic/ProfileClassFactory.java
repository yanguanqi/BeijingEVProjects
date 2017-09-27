package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProfileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Profile emptyInstance = new Profile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
