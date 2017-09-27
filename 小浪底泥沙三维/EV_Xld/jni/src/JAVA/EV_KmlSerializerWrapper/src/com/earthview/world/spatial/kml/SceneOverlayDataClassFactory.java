package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneOverlayDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneOverlayData emptyInstance = new SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
