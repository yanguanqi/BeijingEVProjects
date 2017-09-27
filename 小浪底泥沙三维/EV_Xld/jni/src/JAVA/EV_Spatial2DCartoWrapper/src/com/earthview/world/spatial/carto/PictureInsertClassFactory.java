package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PictureInsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PictureInsert emptyInstance = new PictureInsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
