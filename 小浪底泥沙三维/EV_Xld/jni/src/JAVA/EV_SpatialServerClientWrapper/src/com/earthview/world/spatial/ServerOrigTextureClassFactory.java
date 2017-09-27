package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerOrigTextureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerOrigTexture emptyInstance = new ServerOrigTexture(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
