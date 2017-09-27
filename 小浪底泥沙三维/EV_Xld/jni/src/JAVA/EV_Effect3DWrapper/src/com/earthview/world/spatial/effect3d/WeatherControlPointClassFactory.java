package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WeatherControlPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WeatherControlPoint emptyInstance = new WeatherControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
