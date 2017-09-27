package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshEffectRefInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshEffectRefInfoVector emptyInstance = new MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
