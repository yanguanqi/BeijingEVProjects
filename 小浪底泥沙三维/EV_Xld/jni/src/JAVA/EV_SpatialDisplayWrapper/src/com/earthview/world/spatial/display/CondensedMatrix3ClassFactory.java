package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CondensedMatrix3ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CondensedMatrix3 emptyInstance = new CondensedMatrix3(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
