package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfslayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfslayer emptyInstance = new Wfslayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
