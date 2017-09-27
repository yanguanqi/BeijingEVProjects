package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SelectionChangedEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SelectionChangedEvent emptyInstance = new SelectionChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
