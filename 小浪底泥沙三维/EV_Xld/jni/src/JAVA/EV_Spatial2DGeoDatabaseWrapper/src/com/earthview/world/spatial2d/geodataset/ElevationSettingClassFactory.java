package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ElevationSettingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ElevationSetting emptyInstance = new ElevationSetting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
