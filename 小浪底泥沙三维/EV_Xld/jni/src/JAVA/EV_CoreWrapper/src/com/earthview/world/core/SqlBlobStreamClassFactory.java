package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class SqlBlobStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlBlobStream emptyInstance = new SqlBlobStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
