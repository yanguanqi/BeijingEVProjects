package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LicenseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		License emptyInstance = new License(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
