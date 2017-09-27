package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxgLayerEditorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshxgLayerEditor emptyInstance = new MeshxgLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
