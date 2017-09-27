package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProcessResourceNameScriptCompilerEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProcessResourceNameScriptCompilerEvent emptyInstance = new ProcessResourceNameScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
