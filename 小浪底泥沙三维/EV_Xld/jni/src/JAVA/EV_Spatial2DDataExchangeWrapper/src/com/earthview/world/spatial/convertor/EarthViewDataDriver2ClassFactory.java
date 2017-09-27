package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EarthViewDataDriver2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EarthViewDataDriver2 emptyInstance = new EarthViewDataDriver2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
