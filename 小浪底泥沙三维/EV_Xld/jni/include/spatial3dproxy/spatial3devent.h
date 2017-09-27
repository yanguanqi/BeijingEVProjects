#ifndef EV_SPATIAL3DEVENT_H__
#define EV_SPATIAL3DEVENT_H__ 

	enum Spatial3DEventType
	{
		//三维相关的事件从3001-400
		SET_AddVisibleObjectToLayer=3001,
		SET_UpdateVisibleObject,
		SET_DeleteVisibleObject,

		SET_CreateEffectUserType ,
		SET_ImportEffectFromTemplateDB,
		SET_ImportEffectFromScript,
		SET_ExportEffectToTemplateDB,
		SET_CreateNewEffect,
		SET_RenameUserTypeName,
		SET_RenameSingleEffect,
		SET_RenameBlendEffect,
		SET_RenameBEChildEffect,
	    SET_RenameEffect,
		SET_DeleteUserType,
		SET_DeleteEffect,
		SET_AddEffectToBlend,
		SET_SaveEffect,

		//////模型相关事件//////
		SET_ModelDBEvent_InitModelDBTree ,
		SET_ModelDBEvent_QuickView,
		SET_ModelDBEvent_StopQuickView,
		SET_ModelDBEvent_AddInstanceToScene,
		SET_ModelDBEvent_Initialise,
		SET_ModelDBEvent_GetModelEditsLib,
		///////////////////////////////
		//KML
		SET_KMLEvent_AddKmlFile,
		SET_KMLEvent_Add,
		SET_KMLEvent_Update,
		SET_KMLEvent_Remove,
		SET_KMLEvent_Save,
		SET_KMLEvent_AddFolder,
		SET_KMLEvent_RemoveFolder,
		SET_KMLEvent_AddNetLink,
		SET_KMLEvent_DeRenderNetLink,
		SET_KMLEvent_RemoveNetLink,

		//新加的
		SET_KMLEvent_AddKmlFile_After,		
		SET_KMLEvent_Add_After,
		SET_KMLEvent_Remove_After,
		SET_KMLEvent_AddFolder_After,
		SET_KMLEvent_RemoveFolder_After,
		SET_KMLEvent_AddNetLink_After,
		SET_KMLEvent_RemoveNetLink_After

		//end
	};
#endif
