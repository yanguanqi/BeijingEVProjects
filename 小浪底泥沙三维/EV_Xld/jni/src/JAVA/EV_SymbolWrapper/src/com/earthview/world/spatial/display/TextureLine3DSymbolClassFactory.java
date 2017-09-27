package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureLine3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureLine3DSymbol emptyInstance = new TextureLine3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
