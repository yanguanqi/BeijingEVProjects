package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadarCharacterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RadarCharacter emptyInstance = new RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
