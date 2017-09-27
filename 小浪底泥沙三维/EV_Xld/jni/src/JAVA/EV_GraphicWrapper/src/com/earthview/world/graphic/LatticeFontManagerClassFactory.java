package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatticeFontManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LatticeFontManager emptyInstance = new LatticeFontManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
