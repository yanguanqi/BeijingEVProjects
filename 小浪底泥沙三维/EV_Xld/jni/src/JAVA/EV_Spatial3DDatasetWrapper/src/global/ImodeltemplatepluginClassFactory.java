package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImodeltemplatepluginClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imodeltemplateplugin emptyInstance = new Imodeltemplateplugin(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
