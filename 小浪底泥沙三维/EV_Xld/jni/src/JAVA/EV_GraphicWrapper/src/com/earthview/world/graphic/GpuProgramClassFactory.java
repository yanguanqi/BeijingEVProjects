package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuProgram emptyInstance = new GpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
