package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MetaFileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MetaFile emptyInstance = new MetaFile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
