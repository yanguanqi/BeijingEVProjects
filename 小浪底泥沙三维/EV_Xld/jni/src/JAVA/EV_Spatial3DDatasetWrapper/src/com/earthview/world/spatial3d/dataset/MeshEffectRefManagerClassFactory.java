package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshEffectRefManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshEffectRefManager emptyInstance = new MeshEffectRefManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
