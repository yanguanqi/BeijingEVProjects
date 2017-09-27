package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Texture emptyInstance = new Texture(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
