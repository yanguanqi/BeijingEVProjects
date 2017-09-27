package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoLayerSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoLayerSelection emptyInstance = new AnnoLayerSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
