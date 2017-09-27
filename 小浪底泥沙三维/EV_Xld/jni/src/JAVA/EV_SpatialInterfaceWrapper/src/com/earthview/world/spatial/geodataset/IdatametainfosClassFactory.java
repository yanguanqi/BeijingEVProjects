package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatametainfosClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatametainfos emptyInstance = new Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
