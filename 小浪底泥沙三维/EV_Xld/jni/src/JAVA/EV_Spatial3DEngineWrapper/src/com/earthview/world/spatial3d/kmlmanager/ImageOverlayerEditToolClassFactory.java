package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayerEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageOverlayerEditTool emptyInstance = new ImageOverlayerEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
