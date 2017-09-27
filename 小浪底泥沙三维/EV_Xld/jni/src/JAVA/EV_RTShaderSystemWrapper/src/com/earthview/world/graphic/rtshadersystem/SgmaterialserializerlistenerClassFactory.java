package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SgmaterialserializerlistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sgmaterialserializerlistener emptyInstance = new Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
