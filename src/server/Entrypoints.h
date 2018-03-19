/*++
Copyright (c) Microsoft Corporation

Module Name:
- Entrypoints.h

Abstract:
- This module defines methods to get a console session started.

Author:
- Michael Niksa (MiNiksa) 14-Sept-2016

Revision History:
--*/

#pragma once

class ConsoleArguments;

namespace Entrypoints
{
    [[nodiscard]]
    HRESULT StartConsoleForServerHandle(_In_ HANDLE const ServerHandle, _In_ const ConsoleArguments* const args);
    [[nodiscard]]
    HRESULT StartConsoleForCmdLine(_In_ PCWSTR pwszCmdLine, _In_ const ConsoleArguments* const args);
};
