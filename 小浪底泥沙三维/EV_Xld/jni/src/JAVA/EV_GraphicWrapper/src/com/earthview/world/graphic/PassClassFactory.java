package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Pass emptyInstance = new Pass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
