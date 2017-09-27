package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlluminationPassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IlluminationPass emptyInstance = new IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
