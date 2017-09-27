package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CustomCompositionPassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CustomCompositionPass emptyInstance = new CustomCompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
