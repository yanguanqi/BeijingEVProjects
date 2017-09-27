package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SelectedGeometryStringInterfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SelectedGeometryStringInterface emptyInstance = new SelectedGeometryStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
