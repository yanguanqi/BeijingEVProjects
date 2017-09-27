package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvgeometrymaplayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evgeometrymaplayer emptyInstance = new Evgeometrymaplayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
