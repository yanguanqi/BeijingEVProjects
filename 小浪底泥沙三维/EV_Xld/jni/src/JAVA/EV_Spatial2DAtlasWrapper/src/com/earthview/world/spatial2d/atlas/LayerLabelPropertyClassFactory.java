package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerLabelPropertyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerLabelProperty emptyInstance = new LayerLabelProperty(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
