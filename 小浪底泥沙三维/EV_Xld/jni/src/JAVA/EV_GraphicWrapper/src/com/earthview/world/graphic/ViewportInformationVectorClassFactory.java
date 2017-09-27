package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewportInformationVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ViewportInformationVector emptyInstance = new ViewportInformationVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
