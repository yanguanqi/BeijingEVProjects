package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmsimageinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmsimageinfo emptyInstance = new Evwmsimageinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
