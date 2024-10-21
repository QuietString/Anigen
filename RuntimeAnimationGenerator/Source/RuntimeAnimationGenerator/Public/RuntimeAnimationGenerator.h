#pragma once

#include "Modules/ModuleManager.h"

class FRuntimeAnimationGeneratorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void* AssimpDLLHandle;
	void* ZlibDLLHandle;
	void* PugixmlDLLHandle;
};
