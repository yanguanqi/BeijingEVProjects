package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStopRecordTourEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlStopRecordTourEvent emptyInstance = new KmlStopRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
