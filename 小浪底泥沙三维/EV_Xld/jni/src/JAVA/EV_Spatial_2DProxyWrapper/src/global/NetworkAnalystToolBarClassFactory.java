package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkAnalystToolBarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkAnalystToolBar emptyInstance = new NetworkAnalystToolBar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
