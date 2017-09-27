package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DualQuaternionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DualQuaternion emptyInstance = new DualQuaternion(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
