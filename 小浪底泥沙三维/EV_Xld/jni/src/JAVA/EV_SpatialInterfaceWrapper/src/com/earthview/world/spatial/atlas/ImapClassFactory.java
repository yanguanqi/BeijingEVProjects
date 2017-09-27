package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imap emptyInstance = new Imap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
