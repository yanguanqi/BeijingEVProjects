package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageItem emptyInstance = new ImageItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
