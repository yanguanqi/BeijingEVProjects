package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlslprogramprocessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Glslprogramprocessor emptyInstance = new Glslprogramprocessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
