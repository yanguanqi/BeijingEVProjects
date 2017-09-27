package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectInfoPanelParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectInfoPanelParam emptyInstance = new EffectInfoPanelParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
