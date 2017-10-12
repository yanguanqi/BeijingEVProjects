package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageCacheReaderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageCacheReader emptyInstance = new ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
