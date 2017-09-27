package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrinterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Printer emptyInstance = new Printer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
