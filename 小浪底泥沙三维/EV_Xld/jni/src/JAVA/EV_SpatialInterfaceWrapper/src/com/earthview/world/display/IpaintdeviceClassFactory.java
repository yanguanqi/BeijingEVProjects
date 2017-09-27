package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IpaintdeviceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ipaintdevice emptyInstance = new Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
