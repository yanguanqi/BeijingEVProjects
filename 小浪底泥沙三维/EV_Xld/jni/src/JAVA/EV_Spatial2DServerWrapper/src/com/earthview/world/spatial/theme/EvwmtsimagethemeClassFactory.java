package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmtsimagethemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmtsimagetheme emptyInstance = new Evwmtsimagetheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
