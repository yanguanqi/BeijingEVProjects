package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ExternalTextureSourceManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ExternalTextureSourceManager emptyInstance = new ExternalTextureSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
