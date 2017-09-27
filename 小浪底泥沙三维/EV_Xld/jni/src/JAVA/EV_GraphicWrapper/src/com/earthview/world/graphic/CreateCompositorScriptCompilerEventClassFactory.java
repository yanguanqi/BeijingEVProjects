package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CreateCompositorScriptCompilerEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CreateCompositorScriptCompilerEvent emptyInstance = new CreateCompositorScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
