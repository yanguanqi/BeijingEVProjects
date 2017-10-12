package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerLabelRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerLabelRenderer emptyInstance = new LayerLabelRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
