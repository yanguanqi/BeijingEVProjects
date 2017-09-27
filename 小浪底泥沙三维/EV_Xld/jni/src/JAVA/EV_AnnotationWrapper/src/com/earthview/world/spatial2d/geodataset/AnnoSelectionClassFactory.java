package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoSelection emptyInstance = new AnnoSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
