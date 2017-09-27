package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MsradarcharacterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Msradarcharacter emptyInstance = new Msradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
