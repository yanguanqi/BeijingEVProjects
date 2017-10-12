package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderableFontInstanceObjectCreatorManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderableFontInstanceObjectCreatorManager emptyInstance = new RenderableFontInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
