package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapControlSpaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapControlSpace emptyInstance = new MapControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
