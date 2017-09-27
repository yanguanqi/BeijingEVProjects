package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageOverlayer emptyInstance = new ImageOverlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
