package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartEntryBoxLabelTypeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartEntryBoxLabelType emptyInstance = new ChartEntryBoxLabelType(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
