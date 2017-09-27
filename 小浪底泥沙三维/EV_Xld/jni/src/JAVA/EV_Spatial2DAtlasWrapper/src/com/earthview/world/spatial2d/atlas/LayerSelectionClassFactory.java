package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerSelection emptyInstance = new LayerSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
