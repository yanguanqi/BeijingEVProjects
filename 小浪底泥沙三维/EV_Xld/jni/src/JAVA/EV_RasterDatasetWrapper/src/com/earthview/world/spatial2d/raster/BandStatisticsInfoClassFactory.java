package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BandStatisticsInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BandStatisticsInfo emptyInstance = new BandStatisticsInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
