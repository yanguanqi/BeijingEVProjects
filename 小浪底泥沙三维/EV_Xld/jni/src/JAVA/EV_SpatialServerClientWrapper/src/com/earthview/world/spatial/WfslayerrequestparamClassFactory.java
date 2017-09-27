package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfslayerrequestparamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfslayerrequestparam emptyInstance = new Wfslayerrequestparam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
