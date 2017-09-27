package com.earthview.world.spatial3dproxy.modeldb;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelInfoPanelParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelInfoPanelParam emptyInstance = new ModelInfoPanelParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
