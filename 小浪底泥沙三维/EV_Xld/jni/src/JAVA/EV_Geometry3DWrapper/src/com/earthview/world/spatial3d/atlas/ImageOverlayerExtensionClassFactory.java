package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayerExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageOverlayerExtension emptyInstance = new ImageOverlayerExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
