package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialTranslator emptyInstance = new MaterialTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
