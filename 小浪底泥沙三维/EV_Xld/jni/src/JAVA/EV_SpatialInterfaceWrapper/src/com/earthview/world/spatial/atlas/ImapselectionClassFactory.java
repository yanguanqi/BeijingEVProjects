package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImapselectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imapselection emptyInstance = new Imapselection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
