package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebDataMetaInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebDataMetaInfo emptyInstance = new WebDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
