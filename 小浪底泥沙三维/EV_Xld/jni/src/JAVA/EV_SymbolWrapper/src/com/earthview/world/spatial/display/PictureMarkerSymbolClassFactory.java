package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PictureMarkerSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PictureMarkerSymbol emptyInstance = new PictureMarkerSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
