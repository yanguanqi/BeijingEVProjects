package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonTextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScutcheonText emptyInstance = new ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
