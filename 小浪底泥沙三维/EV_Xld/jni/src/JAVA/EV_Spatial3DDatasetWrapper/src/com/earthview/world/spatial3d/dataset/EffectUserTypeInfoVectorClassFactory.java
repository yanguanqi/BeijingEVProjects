package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectUserTypeInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectUserTypeInfoVector emptyInstance = new EffectUserTypeInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
