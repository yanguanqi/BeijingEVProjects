package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MsradarobjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Msradarobject emptyInstance = new Msradarobject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
