package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ViewManager emptyInstance = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
