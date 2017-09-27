package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlAddFolderEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlAddFolderEvent emptyInstance = new KmlAddFolderEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
