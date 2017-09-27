package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FadeInOutEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FadeInOutEventPtr emptyInstance = new FadeInOutEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
