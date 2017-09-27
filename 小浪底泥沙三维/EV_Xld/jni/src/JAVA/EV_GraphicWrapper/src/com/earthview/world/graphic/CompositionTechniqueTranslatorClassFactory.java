package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionTechniqueTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionTechniqueTranslator emptyInstance = new CompositionTechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
