package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageItemVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageItemVector emptyInstance = new ImageItemVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
