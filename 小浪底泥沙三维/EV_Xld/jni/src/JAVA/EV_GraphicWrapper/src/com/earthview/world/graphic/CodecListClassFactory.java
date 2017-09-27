package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CodecListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CodecList emptyInstance = new CodecList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
