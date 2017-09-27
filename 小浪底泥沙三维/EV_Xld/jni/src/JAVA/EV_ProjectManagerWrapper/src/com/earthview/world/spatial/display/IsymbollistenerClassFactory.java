package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsymbollistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Isymbollistener emptyInstance = new Isymbollistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
