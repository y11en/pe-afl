#ifndef __MAIN_H__
#define __MAIN_H__

#define IOCTL_HELPER_GET_SECTION_ADDRESS	   CTL_CODE(FILE_DEVICE_UNKNOWN, 801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_READ_MEMORY               CTL_CODE(FILE_DEVICE_UNKNOWN, 802, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_WRITE_MEMORY              CTL_CODE(FILE_DEVICE_UNKNOWN, 803, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_ALLOCATE_MEMORY           CTL_CODE(FILE_DEVICE_UNKNOWN, 804, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_FREE_MEMORY               CTL_CODE(FILE_DEVICE_UNKNOWN, 805, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_MAP_MEMORY	               CTL_CODE(FILE_DEVICE_UNKNOWN, 806, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_UNMAP_MEMORY              CTL_CODE(FILE_DEVICE_UNKNOWN, 807, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_HELPER_DUMP_AND_RESET_CALLBACK   CTL_CODE(FILE_DEVICE_UNKNOWN, 808, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif
