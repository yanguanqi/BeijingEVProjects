package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonTextEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScutcheonTextEventObject emptyInstance = new ScutcheonTextEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
