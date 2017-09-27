package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionTechniqueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionTechnique emptyInstance = new CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
