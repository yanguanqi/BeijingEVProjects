package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionTargetPassTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionTargetPassTranslator emptyInstance = new CompositionTargetPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
