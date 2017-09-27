package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfslayerselectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfslayerselection emptyInstance = new Wfslayerselection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
