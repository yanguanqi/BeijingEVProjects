package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectMgrEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectMgrEventObject emptyInstance = new EffectMgrEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
