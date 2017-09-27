package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IscaletextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iscaletext emptyInstance = new Iscaletext(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
