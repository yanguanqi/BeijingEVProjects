package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewportInformationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ViewportInformation emptyInstance = new ViewportInformation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
