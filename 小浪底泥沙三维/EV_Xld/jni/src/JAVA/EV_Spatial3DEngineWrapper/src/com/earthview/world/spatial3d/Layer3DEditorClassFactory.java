package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DEditorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Layer3DEditor emptyInstance = new Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
