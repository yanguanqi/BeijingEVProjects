package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartRecordTourEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlStartRecordTourEvent emptyInstance = new KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
