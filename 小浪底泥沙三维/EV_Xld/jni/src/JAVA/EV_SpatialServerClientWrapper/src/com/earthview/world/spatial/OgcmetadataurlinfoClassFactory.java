package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcmetadataurlinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcmetadataurlinfo emptyInstance = new Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
