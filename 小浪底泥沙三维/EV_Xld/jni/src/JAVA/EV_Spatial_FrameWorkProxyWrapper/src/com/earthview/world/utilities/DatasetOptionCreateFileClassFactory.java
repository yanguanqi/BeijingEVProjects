package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreateFileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetOptionCreateFile emptyInstance = new DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
