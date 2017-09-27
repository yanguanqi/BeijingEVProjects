package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureSourceTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureSourceTranslator emptyInstance = new TextureSourceTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
