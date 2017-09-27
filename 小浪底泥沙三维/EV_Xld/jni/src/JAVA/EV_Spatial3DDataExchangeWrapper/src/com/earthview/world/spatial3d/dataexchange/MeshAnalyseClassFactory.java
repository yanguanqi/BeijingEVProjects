package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshAnalyseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshAnalyse emptyInstance = new MeshAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
