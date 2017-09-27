package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadeAngleDatasClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadeAngleDatas emptyInstance = new ShadeAngleDatas(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
