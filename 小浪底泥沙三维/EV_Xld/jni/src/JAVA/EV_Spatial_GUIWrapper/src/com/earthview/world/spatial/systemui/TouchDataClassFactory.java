package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TouchDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TouchData emptyInstance = new TouchData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
