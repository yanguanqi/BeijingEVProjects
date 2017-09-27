package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DSlopeParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DSlopeParam emptyInstance = new Analysis3DSlopeParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
