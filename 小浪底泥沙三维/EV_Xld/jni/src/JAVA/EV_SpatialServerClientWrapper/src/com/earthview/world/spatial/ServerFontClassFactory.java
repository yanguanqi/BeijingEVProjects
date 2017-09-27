package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerFontClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerFont emptyInstance = new ServerFont(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
