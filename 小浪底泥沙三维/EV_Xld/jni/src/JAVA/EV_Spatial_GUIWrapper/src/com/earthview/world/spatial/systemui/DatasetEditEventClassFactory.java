package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetEditEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetEditEvent emptyInstance = new DatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
