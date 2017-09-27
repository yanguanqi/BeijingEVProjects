package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatitudeLonitudeTextBoxVisibleEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LatitudeLonitudeTextBoxVisibleEvent emptyInstance = new LatitudeLonitudeTextBoxVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
