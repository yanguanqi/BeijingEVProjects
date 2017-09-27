package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NacmdlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nacmdlayer emptyInstance = new Nacmdlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
