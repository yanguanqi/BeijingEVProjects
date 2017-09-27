package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ianalysis3dtoolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ianalysis3dtool emptyInstance = new Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
