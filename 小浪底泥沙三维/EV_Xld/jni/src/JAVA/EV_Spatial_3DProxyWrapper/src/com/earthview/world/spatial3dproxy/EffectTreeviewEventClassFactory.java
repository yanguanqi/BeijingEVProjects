package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectTreeviewEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectTreeviewEvent emptyInstance = new EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
