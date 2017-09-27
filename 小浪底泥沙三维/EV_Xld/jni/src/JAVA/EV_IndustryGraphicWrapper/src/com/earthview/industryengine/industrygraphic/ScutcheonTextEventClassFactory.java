package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonTextEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScutcheonTextEvent emptyInstance = new ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
