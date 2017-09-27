package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OperandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Operand emptyInstance = new Operand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
