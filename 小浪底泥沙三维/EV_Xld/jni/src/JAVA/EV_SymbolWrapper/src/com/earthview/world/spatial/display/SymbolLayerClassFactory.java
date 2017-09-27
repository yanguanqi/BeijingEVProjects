package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SymbolLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SymbolLayer emptyInstance = new SymbolLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
