package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleAnalyseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleAnalyse emptyInstance = new ParticleAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
