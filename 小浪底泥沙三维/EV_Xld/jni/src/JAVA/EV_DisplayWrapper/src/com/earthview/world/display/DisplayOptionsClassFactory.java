package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DisplayOptionsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DisplayOptions emptyInstance = new DisplayOptions(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
