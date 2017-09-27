package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLayerEditorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelLayerEditor emptyInstance = new ModelLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
