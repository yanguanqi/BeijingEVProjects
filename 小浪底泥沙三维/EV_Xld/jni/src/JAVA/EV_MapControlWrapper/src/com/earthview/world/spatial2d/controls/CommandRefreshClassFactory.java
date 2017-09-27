package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandRefreshClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandRefresh emptyInstance = new CommandRefresh(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
