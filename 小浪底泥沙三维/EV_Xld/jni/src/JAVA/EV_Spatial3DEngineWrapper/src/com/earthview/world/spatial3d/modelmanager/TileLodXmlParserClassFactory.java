package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileLodXmlParserClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileLodXmlParser emptyInstance = new TileLodXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
