package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ExternalTextureSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ExternalTextureSource emptyInstance = new ExternalTextureSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
