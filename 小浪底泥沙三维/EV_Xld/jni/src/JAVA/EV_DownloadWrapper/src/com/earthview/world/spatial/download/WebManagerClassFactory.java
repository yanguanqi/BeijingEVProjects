package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebManager emptyInstance = new WebManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
