package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdisplaycacheClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idisplaycache emptyInstance = new Idisplaycache(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
