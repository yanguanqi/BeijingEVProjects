#ifndef __APKZipArchive_H__
#define __APKZipArchive_H__

#include "graphic/graphic_config.h"
#include "graphic/zip.h"
#include <android/asset_manager.h>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{

			class APKZipArchiveFactory : public CEmbeddedZipArchiveFactory
			{
			protected:
				AAssetManager* mAssetMgr;
			public:
				APKZipArchiveFactory(AAssetManager* assetMgr) : mAssetMgr(assetMgr) {}
				virtual ~APKZipArchiveFactory() {}

				/// @copydoc FactoryObj::getType
				String getType() const;

				/// @copydoc FactoryObj::createInstance
				CArchive *createInstance( const String& name)
				{
					String apkName = name;
					if (apkName.size() > 0 && apkName[0] == '/')
						apkName.erase(apkName.begin());

					AAsset* asset = AAssetManager_open(mAssetMgr, apkName.c_str(), AASSET_MODE_BUFFER);
					if(asset)
					{
						CEmbeddedZipArchiveFactory::addEmbbeddedFile(apkName, (const ev_uint8*)AAsset_getBuffer(asset), AAsset_getLength(asset), 0);
					}

					CZipArchive * resZipArchive = EV_NEW CZipArchive(apkName, "APKZip", mPluginIo);
					return resZipArchive;
				}
			};
		}}}
#endif