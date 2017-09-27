package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwebdatametainfosClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwebdatametainfos emptyInstance = new Evwebdatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
