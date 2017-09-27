package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasSamplerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasSampler emptyInstance = new TextureAtlasSampler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
