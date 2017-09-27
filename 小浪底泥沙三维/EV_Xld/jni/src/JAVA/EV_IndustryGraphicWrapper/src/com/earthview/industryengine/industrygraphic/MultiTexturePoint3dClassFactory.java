package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiTexturePoint3dClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiTexturePoint3d emptyInstance = new MultiTexturePoint3d(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
