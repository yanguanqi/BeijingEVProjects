package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureUnitStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureUnitState emptyInstance = new TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
