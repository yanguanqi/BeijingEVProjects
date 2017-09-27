package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionPassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionPass emptyInstance = new CompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
