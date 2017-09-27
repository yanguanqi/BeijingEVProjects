package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Isymbol emptyInstance = new Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
