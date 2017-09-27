package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlayoutindexobserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilayoutindexobserver emptyInstance = new Ilayoutindexobserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
