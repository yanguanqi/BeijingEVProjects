package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlNetworkLinkClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlNetworkLink emptyInstance = new KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
