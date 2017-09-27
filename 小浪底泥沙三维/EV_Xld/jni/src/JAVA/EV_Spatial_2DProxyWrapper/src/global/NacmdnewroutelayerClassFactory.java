package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NacmdnewroutelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nacmdnewroutelayer emptyInstance = new Nacmdnewroutelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
