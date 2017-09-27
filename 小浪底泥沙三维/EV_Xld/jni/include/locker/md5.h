#ifndef _ENCRYPTION_MD5_H_
#define _ENCRYPTION_MD5_H_

#include "config.h"
#include "struct.h"

ENCRYPTION_DECLARE

/*通过输入明文长度，计算加密后的密文长度*/
ENCRYPTION_API 
int md5_get_length_after_encrypt(size_t len);

/*
加密函数,用户需要提供读取和写入函数，以及相应的流对象.
Key值，需要保证8个字节，如果小于8个字节，自动补足8位，如果大于8个字节，去前8个字节。
如果 func_read = 0,则默认采取char* buffer读取策略，plain必须是char*类型
如果 func_write = 0,则默认采取char* buffer写入策略,cipher必须是char*类型
*/
ENCRYPTION_API
int md5_encrypt(void* plain,size_t len,read_io func_read,void* cipher,write_io func_write);

ENCRYPTION_END

#endif