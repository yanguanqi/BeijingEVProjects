package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IentryboxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ientrybox emptyInstance = new Ientrybox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
