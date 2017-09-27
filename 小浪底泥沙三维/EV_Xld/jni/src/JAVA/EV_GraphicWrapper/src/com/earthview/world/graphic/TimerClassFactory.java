package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TimerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Timer emptyInstance = new Timer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
