/*
	ScriptHookV SDK WRAPPER FOR C
    
	Dependencies:
		ScriptHookV SDK
		- http://www.dev-c.com/gtav/scripthookv/

    (C) Raefaldhi Amartya J 2016
*/
#include "scripthookv\main.h"

extern "C" int createTexture_C(const char *);
int createTexture_C(const char *texFileName)
{
	return createTexture(texFileName);
}

extern "C" void drawTexture_C(int, int, int, int, 
	float, float, float, float, 
	float, float, float, float, 
	float, float, float, float);
void drawTexture_C(int id, int index, int level, int time,
	float sizeX, float sizeY, float centerX, float centerY,
	float posX, float posY, float rotation, float screenHeightScaleFactor,
	float r, float g, float b, float a)
{
	drawTexture(id, index, level, time,
	sizeX, sizeY, centerX, centerY,
	posX, posY, rotation, screenHeightScaleFactor,
	r, g, b, a);
}

extern "C" void presentCallbackRegister_C(PresentCallback);
void presentCallbackRegister_C(PresentCallback cb)
{
	presentCallbackRegister(cb);
}

extern "C" void presentCallbackUnregister_C(PresentCallback);
void presentCallbackUnregister_C(PresentCallback cb)
{
	presentCallbackUnregister(cb);
}

extern "C" void keyboardHandlerRegister_C(KeyboardHandler);
void keyboardHandlerRegister_C(KeyboardHandler handler)
{
	keyboardHandlerRegister(handler);
}

extern "C" void keyboardHandlerUnregister_C(KeyboardHandler);
void keyboardHandlerUnregister_C(KeyboardHandler handler)
{
	keyboardHandlerUnregister(handler);
}

extern "C" void scriptWait_C(DWORD);
void scriptWait_C(DWORD time) 
{
	scriptWait(time);
}
extern "C" void scriptRegister_C(HMODULE, void(*)());
void scriptRegister_C(HMODULE module, void(*LP_SCRIPT_MAIN)())
{
	scriptRegister(module, LP_SCRIPT_MAIN);
}
extern "C" void scriptRegisterAdditionalThread_C(HMODULE, void(*)());
void scriptRegisterAdditionalThread_C(HMODULE module, void(*LP_SCRIPT_MAIN)())
{
	scriptRegisterAdditionalThread(module, LP_SCRIPT_MAIN);
}
extern "C" void scriptUnregister_C(HMODULE);
void scriptUnregister_C(HMODULE module)
{
	scriptUnregister(module);
}
extern "C" void scriptUnregister_C(void(*)()); 
void scriptUnregister_C(void(*LP_SCRIPT_MAIN)()) 
{
	scriptUnregister(LP_SCRIPT_MAIN); 
}

extern "C" void nativeInit_C(UINT64);
void nativeInit_C(UINT64 hash)
{
	nativeInit(hash);
}
extern "C" void nativePush64_C(UINT64);
void nativePush64_C(UINT64 val)
{
	nativePush64(val);
}
extern "C" PUINT64 nativeCall_C();
PUINT64 nativeCall_C() {
	return nativeCall();
}

extern "C" UINT64 *getGlobalPtr_C(int);
UINT64 *getGlobalPtr_C(int globalId) 
{
	return getGlobalPtr(globalId);
}

extern "C" int worldGetAllVehicles_C(int*, int);
int worldGetAllVehicles_C(int *arr, int arrSize)
{
	return worldGetAllVehicles(arr, arrSize);
}
extern "C" int worldGetAllPeds_C(int*, int);
int worldGetAllPeds_C(int *arr, int arrSize) 
{
	return worldGetAllPeds(arr, arrSize);
}
extern "C" int worldGetAllObjects_C(int*, int);
int worldGetAllObjects_C(int *arr, int arrSize) 
{
	return worldGetAllObjects(arr, arrSize);
}
extern "C" int worldGetAllPickups_C(int*, int);
int worldGetAllPickups_C(int *arr, int arrSize) 
{
	return worldGetAllPickups(arr, arrSize);
}

extern "C" BYTE *getScriptHandleBaseAddress_C(int);
BYTE *getScriptHandleBaseAddress_C(int handle)
{
	return getScriptHandleBaseAddress(handle);
}

extern "C" int getGameVersion_C();
int getGameVersion_C() 
{
	return getGameVersion();
}
