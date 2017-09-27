package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TechniqueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Technique emptyInstance = new Technique(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
