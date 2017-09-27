package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IindexobserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iindexobserver emptyInstance = new Iindexobserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
