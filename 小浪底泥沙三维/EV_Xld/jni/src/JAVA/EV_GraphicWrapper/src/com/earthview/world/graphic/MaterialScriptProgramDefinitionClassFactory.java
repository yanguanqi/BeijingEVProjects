package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialScriptProgramDefinitionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialScriptProgramDefinition emptyInstance = new MaterialScriptProgramDefinition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
