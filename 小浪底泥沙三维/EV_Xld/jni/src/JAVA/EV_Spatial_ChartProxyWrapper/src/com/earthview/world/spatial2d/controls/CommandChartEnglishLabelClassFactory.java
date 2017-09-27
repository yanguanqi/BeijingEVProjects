package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartEnglishLabelClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartEnglishLabel emptyInstance = new CommandChartEnglishLabel(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
