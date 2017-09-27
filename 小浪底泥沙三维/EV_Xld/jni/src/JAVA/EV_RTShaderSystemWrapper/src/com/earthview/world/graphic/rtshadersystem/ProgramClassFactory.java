package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgramClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Program emptyInstance = new Program(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
