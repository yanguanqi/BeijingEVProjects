package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IscenefactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iscenefactory emptyInstance = new Iscenefactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
