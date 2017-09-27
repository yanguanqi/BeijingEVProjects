package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasSamplerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasSamplerFactory emptyInstance = new TextureAtlasSamplerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
