package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IwebaccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iwebaccessor emptyInstance = new Iwebaccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
