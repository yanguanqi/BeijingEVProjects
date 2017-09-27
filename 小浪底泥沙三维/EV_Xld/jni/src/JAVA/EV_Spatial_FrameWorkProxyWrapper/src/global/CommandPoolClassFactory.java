package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandPoolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandPool emptyInstance = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
