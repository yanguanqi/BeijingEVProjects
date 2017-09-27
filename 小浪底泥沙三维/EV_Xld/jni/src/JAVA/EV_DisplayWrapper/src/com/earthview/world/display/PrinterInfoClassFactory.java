package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrinterInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PrinterInfo emptyInstance = new PrinterInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
