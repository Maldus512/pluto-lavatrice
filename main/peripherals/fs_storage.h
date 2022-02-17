#ifndef FS_STORAGE_H_INCLUDED
#define FS_STORAGE_H_INCLUDED


#define LITTLEFS_PARTITION_LABEL "littlefs"
#define LITTLEFS_PARTITION_PATH  "/" LITTLEFS_PARTITION_LABEL



void fs_storage_mount_littlefs(void);
void fs_storage_umount_littlefs(void);


#endif