package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PictureFillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PictureFillSymbol emptyInstance = new PictureFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
