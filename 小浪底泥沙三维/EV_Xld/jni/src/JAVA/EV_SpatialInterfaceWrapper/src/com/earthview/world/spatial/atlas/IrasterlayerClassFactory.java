package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrasterlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irasterlayer emptyInstance = new Irasterlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
