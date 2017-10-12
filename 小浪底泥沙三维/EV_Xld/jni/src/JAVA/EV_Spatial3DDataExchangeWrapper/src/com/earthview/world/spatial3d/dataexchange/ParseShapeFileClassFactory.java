package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParseShapeFileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParseShapeFile emptyInstance = new ParseShapeFile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
