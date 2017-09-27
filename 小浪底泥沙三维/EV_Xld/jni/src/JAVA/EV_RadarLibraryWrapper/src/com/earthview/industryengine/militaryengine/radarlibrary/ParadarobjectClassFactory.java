package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParadarobjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Paradarobject emptyInstance = new Paradarobject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
