package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilayer emptyInstance = new Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
