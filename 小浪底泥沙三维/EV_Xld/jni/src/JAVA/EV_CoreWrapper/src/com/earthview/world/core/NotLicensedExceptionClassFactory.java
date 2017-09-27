package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class NotLicensedExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NotLicensedException emptyInstance = new NotLicensedException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
