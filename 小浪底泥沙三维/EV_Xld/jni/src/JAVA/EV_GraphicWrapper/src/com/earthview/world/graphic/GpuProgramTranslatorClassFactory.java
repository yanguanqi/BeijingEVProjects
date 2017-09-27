package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuProgramTranslator emptyInstance = new GpuProgramTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
