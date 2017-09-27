package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProjectManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProjectManager emptyInstance = new ProjectManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
