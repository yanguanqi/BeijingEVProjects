package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HlslprogramprocessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Hlslprogramprocessor emptyInstance = new Hlslprogramprocessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
