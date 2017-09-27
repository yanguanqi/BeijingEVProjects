package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleVisualDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleVisualData emptyInstance = new ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
