package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextInsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextInsert emptyInstance = new TextInsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
