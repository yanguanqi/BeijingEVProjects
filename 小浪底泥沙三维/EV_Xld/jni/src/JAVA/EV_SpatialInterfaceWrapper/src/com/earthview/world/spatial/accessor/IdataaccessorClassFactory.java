package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdataaccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idataaccessor emptyInstance = new Idataaccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
