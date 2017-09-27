package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SymbolConvertorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SymbolConvertor emptyInstance = new SymbolConvertor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
