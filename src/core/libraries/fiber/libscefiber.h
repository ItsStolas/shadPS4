// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Fiber {

int PS4_SYSV_ABI _sceFiberAttachContextAndRun();
int PS4_SYSV_ABI _sceFiberAttachContextAndSwitch();
int PS4_SYSV_ABI _sceFiberGetThreadFramePointerAddress();
int PS4_SYSV_ABI _sceFiberInitializeImpl();
int PS4_SYSV_ABI _sceFiberInitializeWithInternalOptionImpl();
int PS4_SYSV_ABI sceFiberFinalize();
int PS4_SYSV_ABI sceFiberGetInfo();
int PS4_SYSV_ABI sceFiberGetSelf();
int PS4_SYSV_ABI sceFiberOptParamInitialize();
int PS4_SYSV_ABI sceFiberRename();
int PS4_SYSV_ABI sceFiberReturnToThread();
int PS4_SYSV_ABI sceFiberRun();
int PS4_SYSV_ABI sceFiberStartContextSizeCheck();
int PS4_SYSV_ABI sceFiberStopContextSizeCheck();
int PS4_SYSV_ABI sceFiberSwitch();

void RegisterlibSceFiber(Core::Loader::SymbolsResolver * sym);
}