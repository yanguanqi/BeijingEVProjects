package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FormattedTextSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FormattedTextSymbol emptyInstance = new FormattedTextSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
