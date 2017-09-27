package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayerExtensionFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageOverlayerExtensionFactory emptyInstance = new ImageOverlayerExtensionFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
