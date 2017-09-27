package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartEntryBoxViewCategoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartEntryBoxViewCategory emptyInstance = new ChartEntryBoxViewCategory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
