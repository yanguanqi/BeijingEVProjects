package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GuieventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guievent emptyInstance = new Guievent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
