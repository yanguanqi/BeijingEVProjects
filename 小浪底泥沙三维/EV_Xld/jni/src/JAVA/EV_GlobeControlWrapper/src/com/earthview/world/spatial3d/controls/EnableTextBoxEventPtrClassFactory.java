package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EnableTextBoxEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EnableTextBoxEventPtr emptyInstance = new EnableTextBoxEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
