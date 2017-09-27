package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureMovableTextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureMovableText emptyInstance = new TextureMovableText(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
