package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StreamArchiveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StreamArchive emptyInstance = new StreamArchive(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
