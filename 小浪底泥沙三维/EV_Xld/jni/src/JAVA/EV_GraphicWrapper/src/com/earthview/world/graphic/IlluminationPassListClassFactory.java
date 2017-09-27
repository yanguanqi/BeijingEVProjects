package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlluminationPassListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IlluminationPassList emptyInstance = new IlluminationPassList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
