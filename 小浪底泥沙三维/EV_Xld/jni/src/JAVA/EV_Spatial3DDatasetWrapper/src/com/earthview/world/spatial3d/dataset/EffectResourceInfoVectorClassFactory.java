package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectResourceInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectResourceInfoVector emptyInstance = new EffectResourceInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
