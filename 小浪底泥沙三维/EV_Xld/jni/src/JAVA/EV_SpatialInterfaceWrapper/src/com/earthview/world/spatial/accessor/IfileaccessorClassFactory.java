package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfileaccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifileaccessor emptyInstance = new Ifileaccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
