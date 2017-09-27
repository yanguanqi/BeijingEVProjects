package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmschartthemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmscharttheme emptyInstance = new Evwmscharttheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
