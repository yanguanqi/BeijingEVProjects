package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgramProcessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProgramProcessor emptyInstance = new ProgramProcessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
