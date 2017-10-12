package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelData emptyInstance = new ModelData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
