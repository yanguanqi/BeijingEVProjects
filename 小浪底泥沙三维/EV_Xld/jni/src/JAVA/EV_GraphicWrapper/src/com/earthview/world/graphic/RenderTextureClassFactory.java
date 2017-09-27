package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTextureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTexture emptyInstance = new RenderTexture(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
