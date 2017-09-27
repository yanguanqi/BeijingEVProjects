package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasconverterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Lasconverter emptyInstance = new Lasconverter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
