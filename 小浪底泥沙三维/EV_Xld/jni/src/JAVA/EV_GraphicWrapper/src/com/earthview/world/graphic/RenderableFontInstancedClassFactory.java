package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderableFontInstancedClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderableFontInstanced emptyInstance = new RenderableFontInstanced(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
