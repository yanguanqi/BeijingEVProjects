package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PvrtccodecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Pvrtccodec emptyInstance = new Pvrtccodec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
