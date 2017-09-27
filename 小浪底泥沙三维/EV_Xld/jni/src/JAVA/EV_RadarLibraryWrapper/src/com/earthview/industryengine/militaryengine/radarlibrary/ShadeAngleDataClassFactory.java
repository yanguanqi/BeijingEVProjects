package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadeAngleDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadeAngleData emptyInstance = new ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
