package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdisplayoptionsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idisplayoptions emptyInstance = new Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
