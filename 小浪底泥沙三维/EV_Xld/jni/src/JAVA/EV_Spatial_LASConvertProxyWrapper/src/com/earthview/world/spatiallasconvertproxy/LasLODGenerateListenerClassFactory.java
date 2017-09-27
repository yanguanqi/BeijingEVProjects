package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasLODGenerateListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasLODGenerateListener emptyInstance = new LasLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
