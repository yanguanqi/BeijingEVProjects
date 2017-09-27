package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TranslationSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TranslationSerializer emptyInstance = new TranslationSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
