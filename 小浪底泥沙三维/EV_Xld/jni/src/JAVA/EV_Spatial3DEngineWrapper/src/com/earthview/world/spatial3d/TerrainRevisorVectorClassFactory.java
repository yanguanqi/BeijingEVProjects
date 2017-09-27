package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainRevisorVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainRevisorVector emptyInstance = new TerrainRevisorVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
