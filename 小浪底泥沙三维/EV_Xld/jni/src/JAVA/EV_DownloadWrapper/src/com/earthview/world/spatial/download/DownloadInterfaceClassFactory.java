package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DownloadInterfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DownloadInterface emptyInstance = new DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
