package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmsthemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmstheme emptyInstance = new Ogcwmstheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
