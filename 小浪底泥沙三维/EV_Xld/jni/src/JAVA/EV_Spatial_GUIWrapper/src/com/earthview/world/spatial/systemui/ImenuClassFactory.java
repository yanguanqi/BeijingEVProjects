package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImenuClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imenu emptyInstance = new Imenu(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
