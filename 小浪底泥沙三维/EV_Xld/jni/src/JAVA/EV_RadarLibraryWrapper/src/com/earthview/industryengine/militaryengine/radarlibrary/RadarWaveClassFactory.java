package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadarWaveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RadarWave emptyInstance = new RadarWave(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
