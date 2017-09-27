package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleList emptyInstance = new ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
