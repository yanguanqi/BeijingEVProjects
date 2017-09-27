package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureManager emptyInstance = new TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
