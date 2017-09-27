package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NacmddatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nacmddataset emptyInstance = new Nacmddataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
