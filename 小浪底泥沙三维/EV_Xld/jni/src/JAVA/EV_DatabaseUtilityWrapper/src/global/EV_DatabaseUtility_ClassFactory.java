package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_DatabaseUtility_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDriverCreatorBase", new com.earthview.world.core.database.SqlDriverCreatorBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlDriverCreatorBaseProxy", new com.earthview.world.core.database.SqlDriverCreatorBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDatabase", new com.earthview.world.core.database.SqlDatabaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDriver", new com.earthview.world.core.database.SqlDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlDriverProxy", new com.earthview.world.core.database.SqlDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlError", new com.earthview.world.core.database.SqlErrorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlField", new com.earthview.world.core.database.SqlFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlIndex", new com.earthview.world.core.database.SqlIndexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlQuery", new com.earthview.world.core.database.SqlQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlRecord", new com.earthview.world.core.database.SqlRecordClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlResult", new com.earthview.world.core.database.SqlResultClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlResultProxy", new com.earthview.world.core.database.SqlResultClassFactory());
	}
}

