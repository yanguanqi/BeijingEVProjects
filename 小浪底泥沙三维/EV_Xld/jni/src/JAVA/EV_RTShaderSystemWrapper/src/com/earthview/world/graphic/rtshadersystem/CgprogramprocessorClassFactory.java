package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CgprogramprocessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Cgprogramprocessor emptyInstance = new Cgprogramprocessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
