package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvplacenamerecordClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evplacenamerecord emptyInstance = new Evplacenamerecord(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
