package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvmaplayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evmaplayerinfo emptyInstance = new Evmaplayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
