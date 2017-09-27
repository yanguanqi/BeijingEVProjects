package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImagePtrListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImagePtrList emptyInstance = new ImagePtrList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
