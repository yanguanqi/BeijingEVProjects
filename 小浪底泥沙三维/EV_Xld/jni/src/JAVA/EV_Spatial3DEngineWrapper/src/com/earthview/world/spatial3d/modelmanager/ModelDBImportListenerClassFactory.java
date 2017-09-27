package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDBImportListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDBImportListener emptyInstance = new ModelDBImportListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
