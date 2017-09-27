package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NacmdsolveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nacmdsolve emptyInstance = new Nacmdsolve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
