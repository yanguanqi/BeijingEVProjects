package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsceneClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iscene emptyInstance = new Iscene(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
