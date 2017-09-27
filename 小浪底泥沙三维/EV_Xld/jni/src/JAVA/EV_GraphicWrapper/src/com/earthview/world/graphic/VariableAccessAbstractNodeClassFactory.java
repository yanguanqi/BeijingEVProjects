package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VariableAccessAbstractNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VariableAccessAbstractNode emptyInstance = new VariableAccessAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
