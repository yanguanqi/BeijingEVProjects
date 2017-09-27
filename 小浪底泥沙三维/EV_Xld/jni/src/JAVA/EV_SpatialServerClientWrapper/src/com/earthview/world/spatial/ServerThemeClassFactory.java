package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerTheme emptyInstance = new ServerTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
