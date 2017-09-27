package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionAtomClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FunctionAtom emptyInstance = new FunctionAtom(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
