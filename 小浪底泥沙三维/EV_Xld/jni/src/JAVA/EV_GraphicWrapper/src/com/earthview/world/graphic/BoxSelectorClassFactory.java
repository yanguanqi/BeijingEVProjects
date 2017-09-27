package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoxSelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BoxSelector emptyInstance = new BoxSelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
