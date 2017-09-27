package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageLayoutControlSpaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageLayoutControlSpace emptyInstance = new PageLayoutControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
