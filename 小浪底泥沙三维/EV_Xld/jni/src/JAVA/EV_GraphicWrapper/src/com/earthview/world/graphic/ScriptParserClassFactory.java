package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptParserClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptParser emptyInstance = new ScriptParser(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
