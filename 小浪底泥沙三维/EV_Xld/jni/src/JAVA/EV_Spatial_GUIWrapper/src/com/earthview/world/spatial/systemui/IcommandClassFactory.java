package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IcommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icommand emptyInstance = new Icommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
