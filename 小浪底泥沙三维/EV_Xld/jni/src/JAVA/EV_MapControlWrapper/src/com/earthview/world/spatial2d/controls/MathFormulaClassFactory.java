package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathFormulaClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MathFormula emptyInstance = new MathFormula(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
