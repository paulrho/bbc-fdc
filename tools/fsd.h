#ifndef _FSD_H_
#define _FSD_H_

#define FSD_UNFORMATTED 0x00
#define FSD_UNREADABLE 0x00
#define FSD_READABLE 0xff

// OSWORD &7F result byte
#define FSD_ERR_NONE 0x00
#define FSD_ERR_DELETED 0x20
#define FSD_ERR_BADCRC 0x0e

extern void fsd_write(FILE *fsdfile, const unsigned char tracks);

#endif