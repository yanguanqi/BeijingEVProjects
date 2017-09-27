package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TechniqueTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TechniqueTranslator emptyInstance = new TechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
