/*** Autogenerated by WIDL 4.12.1 from /Users/gcenx/Downloads/sources/wine/./include/wmcodecdsp.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wmcodecdsp_h__
#define __wmcodecdsp_h__

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(push, ptr32)
#pragma clang storage_addr_space(push, ptr32)
#endif
/* Forward declarations */

#ifndef __CMP3DecMediaObject_FWD_DEFINED__
#define __CMP3DecMediaObject_FWD_DEFINED__
#ifdef __cplusplus
typedef class CMP3DecMediaObject CMP3DecMediaObject;
#else
typedef struct CMP3DecMediaObject CMP3DecMediaObject;
#endif /* defined __cplusplus */
#endif /* defined __CMP3DecMediaObject_FWD_DEFINED__ */

/* Headers for imported files */

#include <mediaobj.h>
#include <strmif.h>

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(MEDIASUBTYPE_I420,0x30323449,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71);
/*****************************************************************************
 * CMP3DecMediaObject coclass
 */

DEFINE_GUID(CLSID_CMP3DecMediaObject, 0xbbeea841, 0x0a63, 0x4f52, 0xa7,0xab, 0xa9,0xb3,0xa8,0x4e,0xd3,0x8a);

#ifdef __cplusplus
class DECLSPEC_UUID("bbeea841-0a63-4f52-a7ab-a9b3a84ed38a") CMP3DecMediaObject;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(CMP3DecMediaObject, 0xbbeea841, 0x0a63, 0x4f52, 0xa7,0xab, 0xa9,0xb3,0xa8,0x4e,0xd3,0x8a)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(pop)
#pragma clang storage_addr_space(pop)
#endif
#endif /* __wmcodecdsp_h__ */
