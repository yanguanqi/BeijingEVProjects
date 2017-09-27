package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasconverterlistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Lasconverterlistener emptyInstance = new Lasconverterlistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
