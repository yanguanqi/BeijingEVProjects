package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialResourceInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialResourceInfo emptyInstance = new MaterialResourceInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
