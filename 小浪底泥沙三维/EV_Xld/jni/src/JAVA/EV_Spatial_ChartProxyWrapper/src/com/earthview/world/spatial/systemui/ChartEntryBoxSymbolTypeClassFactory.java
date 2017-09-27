package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartEntryBoxSymbolTypeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartEntryBoxSymbolType emptyInstance = new ChartEntryBoxSymbolType(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
