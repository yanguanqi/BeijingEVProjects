package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureUnitTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureUnitTranslator emptyInstance = new TextureUnitTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
