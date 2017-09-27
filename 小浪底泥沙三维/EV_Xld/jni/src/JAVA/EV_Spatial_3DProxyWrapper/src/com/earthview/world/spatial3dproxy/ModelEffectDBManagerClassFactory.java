package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEffectDBManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelEffectDBManager emptyInstance = new ModelEffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
