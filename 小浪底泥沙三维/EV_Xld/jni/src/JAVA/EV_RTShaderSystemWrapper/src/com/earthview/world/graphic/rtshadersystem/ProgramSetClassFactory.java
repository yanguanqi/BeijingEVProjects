package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgramSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProgramSet emptyInstance = new ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
