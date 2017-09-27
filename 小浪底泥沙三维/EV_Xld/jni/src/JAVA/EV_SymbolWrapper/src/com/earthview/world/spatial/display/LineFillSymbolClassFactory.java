package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LineFillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LineFillSymbol emptyInstance = new LineFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
