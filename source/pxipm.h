#pragma once

#include <3ds/types.h>
#include "exheader.h"

Result pxipmInit(void);
void pxipmExit(void);
Result PXIPM_RegisterProgram(u64 *prog_handle, const FS_ProgramInfo *title, const FS_ProgramInfo *update);
Result PXIPM_GetProgramInfo(ExHeader_Info *exheader, u64 prog_handle);
Result PXIPM_UnregisterProgram(u64 prog_handle);
