package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorTranslator emptyInstance = new CompositorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
