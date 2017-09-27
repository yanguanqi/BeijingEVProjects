package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionPassTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionPassTranslator emptyInstance = new CompositionPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
