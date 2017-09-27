package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParadarcharacterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Paradarcharacter emptyInstance = new Paradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
