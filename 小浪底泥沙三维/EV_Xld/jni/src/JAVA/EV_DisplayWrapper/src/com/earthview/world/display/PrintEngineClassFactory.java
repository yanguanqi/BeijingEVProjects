package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrintEngineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PrintEngine emptyInstance = new PrintEngine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
