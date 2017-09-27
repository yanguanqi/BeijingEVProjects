package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobleControlSpaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobleControlSpace emptyInstance = new GlobleControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
