package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureFrameControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureFrameControllerValue emptyInstance = new TextureFrameControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
