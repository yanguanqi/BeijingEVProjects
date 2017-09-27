package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImapframeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imapframe emptyInstance = new Imapframe(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
