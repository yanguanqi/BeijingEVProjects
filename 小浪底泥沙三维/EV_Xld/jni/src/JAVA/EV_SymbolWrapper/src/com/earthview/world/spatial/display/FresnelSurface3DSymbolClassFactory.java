package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FresnelSurface3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FresnelSurface3DSymbol emptyInstance = new FresnelSurface3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
