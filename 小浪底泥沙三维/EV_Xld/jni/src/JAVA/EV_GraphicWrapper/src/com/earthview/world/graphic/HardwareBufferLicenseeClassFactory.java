package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareBufferLicenseeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareBufferLicensee emptyInstance = new HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
