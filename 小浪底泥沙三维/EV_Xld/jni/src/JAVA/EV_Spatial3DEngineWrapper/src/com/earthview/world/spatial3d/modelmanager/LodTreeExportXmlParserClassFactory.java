package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodTreeExportXmlParserClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodTreeExportXmlParser emptyInstance = new LodTreeExportXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
