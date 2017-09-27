package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartEntryBoxColorModeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartEntryBoxColorMode emptyInstance = new ChartEntryBoxColorMode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
