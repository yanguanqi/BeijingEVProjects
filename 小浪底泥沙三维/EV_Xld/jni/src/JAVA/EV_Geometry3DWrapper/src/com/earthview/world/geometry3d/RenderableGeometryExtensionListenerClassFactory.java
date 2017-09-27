package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderableGeometryExtensionListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderableGeometryExtensionListener emptyInstance = new RenderableGeometryExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
