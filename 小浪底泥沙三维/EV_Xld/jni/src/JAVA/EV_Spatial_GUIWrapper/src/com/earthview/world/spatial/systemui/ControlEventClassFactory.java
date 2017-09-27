package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlEvent emptyInstance = new ControlEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
