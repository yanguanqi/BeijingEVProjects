package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FtpclientClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ftpclient emptyInstance = new Ftpclient(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
