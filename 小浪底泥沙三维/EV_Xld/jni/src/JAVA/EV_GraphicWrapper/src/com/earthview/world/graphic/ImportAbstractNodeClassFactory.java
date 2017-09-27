package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImportAbstractNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImportAbstractNode emptyInstance = new ImportAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
