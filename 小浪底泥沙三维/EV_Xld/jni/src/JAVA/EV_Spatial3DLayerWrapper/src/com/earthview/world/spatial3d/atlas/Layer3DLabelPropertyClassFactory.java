package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DLabelPropertyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Layer3DLabelProperty emptyInstance = new Layer3DLabelProperty(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
