package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmtsthemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmtstheme emptyInstance = new Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
