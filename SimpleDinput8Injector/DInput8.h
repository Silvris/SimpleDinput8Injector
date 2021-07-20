#pragma once
#include <Unknwn.h>
#include "stdafx.h"

typedef HRESULT(WINAPI* tDirectInput8Create)(HINSTANCE inst_handle, DWORD version, const IID& r_iid, LPVOID* out_wrapper, LPUNKNOWN p_unk);

extern tDirectInput8Create oDirectInput8Create;
extern HMODULE hMod;

extern "C"
{
	DINPUT8_API HRESULT WINAPI DirectInput8Create(
		HINSTANCE inst_handle,
		DWORD version,
		const IID& r_iid,
		LPVOID* out_wrapper,
		LPUNKNOWN p_unk
	);
}