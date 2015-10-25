// Copyright 2015+ Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.
// Created for Ishiiruka
#pragma once

#include "VideoCommon/ConstantManager.h"
#include "VideoCommon/HullDomainShaderGen.h"

class PointerWrap;

// The non-API dependent parts.
class HullDomainShaderManager
{
	static bool dirty;
public:
	static void Init();
	static void Dirty();
	static bool IsDirty() { return dirty; }
	static void Clear() { dirty = false; }
	static void Shutdown();
	static void DoState(PointerWrap &p);

	static void SetConstants();
	static void SetViewportChanged();
	static void SetProjectionChanged();

	static HullDomainShaderConstants constants;
};