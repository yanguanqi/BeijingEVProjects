package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NumericSolverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NumericSolver emptyInstance = new NumericSolver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
