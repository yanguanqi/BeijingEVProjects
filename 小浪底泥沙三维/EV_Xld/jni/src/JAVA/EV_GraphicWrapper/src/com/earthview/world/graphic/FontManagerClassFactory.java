package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FontManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FontManager emptyInstance = new FontManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
