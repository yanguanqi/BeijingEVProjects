package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DriverVersionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DriverVersion emptyInstance = new DriverVersion(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
