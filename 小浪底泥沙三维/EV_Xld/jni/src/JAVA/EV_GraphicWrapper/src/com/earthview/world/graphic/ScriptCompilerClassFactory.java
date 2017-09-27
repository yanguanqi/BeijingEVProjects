package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompilerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptCompiler emptyInstance = new ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
