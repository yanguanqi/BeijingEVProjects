package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class StreetViewServiceConnectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StreetViewServiceConnection emptyInstance = new StreetViewServiceConnection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
