package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FontPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FontPtr emptyInstance = new FontPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
