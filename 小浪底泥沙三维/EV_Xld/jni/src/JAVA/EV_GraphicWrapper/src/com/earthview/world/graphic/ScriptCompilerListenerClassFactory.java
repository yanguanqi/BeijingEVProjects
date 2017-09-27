package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompilerListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptCompilerListener emptyInstance = new ScriptCompilerListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
