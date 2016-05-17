#pragma once

#include <3ds/types.h>

#ifndef PATH_MAX
#define PATH_MAX 255
#endif
#ifndef NAME_MAX
#define NAME_MAX 255
#endif
#ifndef MAX_FILES
#define MAX_FILES 255
#endif

Result fsldrInit(void);
void fsldrExit(void);
Result FSLDR_InitializeWithSdkVersion(Handle session, u32 version);
Result FSLDR_SetPriority(u32 priority);
Result FSLDR_OpenFileDirectly(Handle* out, FS_ArchiveID archiveId, FS_Path archivePath, FS_Path filePath, u32 openFlags, u32 attributes);
Result FSLDR_OpenDirectory(Handle* out, FS_Archive archive, FS_Path path);
Result FSLDR_OpenArchive(FS_Archive* archive, FS_ArchiveID id, FS_Path path);
Result FSLDR_CloseArchive(FS_Archive archive);