package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SgscripttranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sgscripttranslator emptyInstance = new Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
