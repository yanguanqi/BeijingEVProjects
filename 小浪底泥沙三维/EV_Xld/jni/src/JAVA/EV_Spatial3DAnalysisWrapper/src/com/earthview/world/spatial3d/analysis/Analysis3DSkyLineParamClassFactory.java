package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DSkyLineParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DSkyLineParam emptyInstance = new Analysis3DSkyLineParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
