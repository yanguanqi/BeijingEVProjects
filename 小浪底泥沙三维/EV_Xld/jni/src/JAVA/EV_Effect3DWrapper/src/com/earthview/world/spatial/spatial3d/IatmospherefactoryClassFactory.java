package com.earthview.world.spatial.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IatmospherefactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iatmospherefactory emptyInstance = new Iatmospherefactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
