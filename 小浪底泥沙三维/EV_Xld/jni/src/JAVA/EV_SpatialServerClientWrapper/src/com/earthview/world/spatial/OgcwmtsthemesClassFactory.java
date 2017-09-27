package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmtsthemesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmtsthemes emptyInstance = new Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
