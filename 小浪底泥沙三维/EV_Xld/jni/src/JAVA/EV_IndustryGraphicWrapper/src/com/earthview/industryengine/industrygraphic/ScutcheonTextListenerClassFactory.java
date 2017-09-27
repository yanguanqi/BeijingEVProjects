package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonTextListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScutcheonTextListener emptyInstance = new ScutcheonTextListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
