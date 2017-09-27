package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImaplistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imaplistener emptyInstance = new Imaplistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
