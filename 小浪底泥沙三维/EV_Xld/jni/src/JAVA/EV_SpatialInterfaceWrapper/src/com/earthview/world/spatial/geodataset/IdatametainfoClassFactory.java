package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatametainfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatametainfo emptyInstance = new Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
