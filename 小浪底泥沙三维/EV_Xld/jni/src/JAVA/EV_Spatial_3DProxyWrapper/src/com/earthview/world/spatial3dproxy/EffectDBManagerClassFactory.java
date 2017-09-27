package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectDBManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectDBManager emptyInstance = new EffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
