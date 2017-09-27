#ifndef _ENCRYPTION_STRUCT_H_
#define _ENCRYPTION_STRUCT_H_

/*
读取流函数指针
返回值为 正确读出个数
*/
typedef int (*read_io)(char* buffer,size_t size,size_t count,void* obj);
/*
写入流函数指针
返回值为 正确写入个数
*/
typedef int (*write_io)(char* buffer,size_t size,size_t count,void* obj);

#endif