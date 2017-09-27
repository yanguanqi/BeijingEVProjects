package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelRenderer emptyInstance = new LabelRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
