package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItileattachmentptrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itileattachmentptr emptyInstance = new Itileattachmentptr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
