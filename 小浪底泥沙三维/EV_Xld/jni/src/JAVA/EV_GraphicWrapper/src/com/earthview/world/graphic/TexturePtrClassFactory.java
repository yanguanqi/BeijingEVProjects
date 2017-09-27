package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TexturePtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TexturePtr emptyInstance = new TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
