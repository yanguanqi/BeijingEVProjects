package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AppProjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AppProject emptyInstance = new AppProject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
