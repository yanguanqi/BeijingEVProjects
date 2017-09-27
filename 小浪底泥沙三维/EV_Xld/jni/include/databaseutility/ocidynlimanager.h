#ifndef _DBDYNLIMANAGER_H_H
#define _DBDYNLIMANAGER_H_H
#include"oci.h"
namespace EarthView{
	namespace World{
		namespace Core{
			class CDynLib;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Core{
			namespace Database{

typedef sword   (*EVOCIInitialize)   (ub4 mode, void  *ctxp, 
	void  *(*malocfp)(void  *ctxp, size_t size),
	void  *(*ralocfp)(void  *ctxp, void  *memptr, size_t newsize),
	void   (*mfreefp)(void  *ctxp, void  *memptr) );

typedef sword   (*EVOCIEnvCreate) (OCIEnv **envp, ub4 mode, void  *ctxp,
	void  *(*malocfp)(void  *ctxp, size_t size),
	void  *(*ralocfp)(void  *ctxp, void  *memptr, size_t newsize),
	void   (*mfreefp)(void  *ctxp, void  *memptr),
	size_t xtramem_sz, void  **usrmempp);

typedef sword   (*EVOCIHandleAlloc)(const void  *parenth, void  **hndlpp, const ub4 type, 
	const size_t xtramem_sz, void  **usrmempp);

typedef sword   (*EVOCIHandleFree)(void  *hndlp, const ub4 type);

typedef sword   (*EVOCIDescriptorAlloc)(const void  *parenth, void  **descpp, 
	const ub4 type, const size_t xtramem_sz, 
	void  **usrmempp);

typedef sword   (*EVOCIDescriptorFree)(void  *descp, const ub4 type);

typedef sword   (*EVOCIServerAttach)  (OCIServer *srvhp, OCIError *errhp,
	const OraText *dblink, sb4 dblink_len, ub4 mode);

typedef sword   (*EVOCIServerDetach)  (OCIServer *srvhp, OCIError *errhp, ub4 mode);

typedef sword   (*EVOCISessionBegin)  (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp,
	ub4 credt, ub4 mode);

typedef sword   (*EVOCISessionEnd)   (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp, 
	ub4 mode);

typedef sword   (*EVOCIStmtPrepare)   (OCIStmt *stmtp, OCIError *errhp, const OraText *stmt,
	ub4 stmt_len, ub4 language, ub4 mode);

typedef sword (*EVOCIStmtPrepare2) ( OCISvcCtx *svchp, OCIStmt **stmtp, OCIError *errhp,
	const OraText *stmt, ub4 stmt_len, const OraText *key,
	ub4 key_len, ub4 language, ub4 mode);

typedef sword (*EVOCIStmtRelease) ( OCIStmt *stmtp, OCIError *errhp, const OraText *key,
	ub4 key_len, ub4 mode);

typedef sword   (*EVOCIBindByPos)  (OCIStmt *stmtp, OCIBind **bindp, OCIError *errhp,
	ub4 position, void  *valuep, sb4 value_sz,
	ub2 dty, void  *indp, ub2 *alenp, ub2 *rcodep,
	ub4 maxarr_len, ub4 *curelep, ub4 mode);

typedef sword   (*EVOCIBindByName)   (OCIStmt *stmtp, OCIBind **bindp, OCIError *errhp,
	const OraText *placeholder, sb4 placeh_len, 
	void  *valuep, sb4 value_sz, ub2 dty, 
	void  *indp, ub2 *alenp, ub2 *rcodep, 
	ub4 maxarr_len, ub4 *curelep, ub4 mode);

typedef sword   (*EVOCIBindArrayOfStruct)   (OCIBind *bindp, OCIError *errhp, 
	ub4 pvskip, ub4 indskip,
	ub4 alskip, ub4 rcskip);

typedef sword   (*EVOCIDefineByPos)  (OCIStmt *stmtp, OCIDefine **defnp, OCIError *errhp,
	ub4 position, void  *valuep, sb4 value_sz, ub2 dty,
	void  *indp, ub2 *rlenp, ub2 *rcodep, ub4 mode);

typedef sword   (*EVOCIDefineArrayOfStruct)  (OCIDefine *defnp, OCIError *errhp, ub4 pvskip,
	ub4 indskip, ub4 rlskip, ub4 rcskip);

typedef sword   (*EVOCIStmtFetch)   (OCIStmt *stmtp, OCIError *errhp, ub4 nrows, 
	ub2 orientation, ub4 mode);

typedef sword   (*EVOCIStmtFetch2)   (OCIStmt *stmtp, OCIError *errhp, ub4 nrows, 
	ub2 orientation, sb4 scrollOffset, ub4 mode);

typedef sword   (*EVOCIParamGet) (const void  *hndlp, ub4 htype, OCIError *errhp, 
	void  **parmdpp, ub4 pos);

typedef sword   (*EVOCIParamSet)(void  *hdlp, ub4 htyp, OCIError *errhp, const void  *dscp,
	ub4 dtyp, ub4 pos);

typedef sword   (*EVOCITransStart)  (OCISvcCtx *svchp, OCIError *errhp, 
	uword timeout, ub4 flags );

typedef sword   (*EVOCITransDetach)  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags );

typedef sword   (*EVOCITransCommit)  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

typedef sword   (*EVOCITransRollback)  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

typedef sword   (*EVOCITransPrepare) (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

typedef sword   (*EVOCIErrorGet)   (void  *hndlp, ub4 recordno, OraText *sqlstate,
	sb4 *errcodep, OraText *bufp, ub4 bufsiz, ub4 type);

typedef sword   (*EVOCILobCharSetForm) (OCIEnv *envhp, OCIError *errhp, 
	const OCILobLocator *locp, ub1 *csfrm);

typedef sword   (*EVOCILobCharSetId) (OCIEnv *envhp, OCIError *errhp, 
	const OCILobLocator *locp, ub2 *csid);

typedef sword   (*EVOCILobGetLength)  (OCISvcCtx *svchp, OCIError *errhp, 
	OCILobLocator *locp,
	ub4 *lenp);

typedef sword   (*EVOCIServerVersion)  (void  *hndlp, OCIError *errhp, OraText *bufp, 
	ub4 bufsz,
	ub1 hndltype);

typedef sword   (*EVOCIServerRelease)  (void  *hndlp, OCIError *errhp, OraText *bufp,
	ub4 bufsz,
	ub1 hndltype, ub4 *version);

typedef sword   (*EVOCIAttrGet) (const void  *trgthndlp, ub4 trghndltyp, 
	void  *attributep, ub4 *sizep, ub4 attrtype, 
	OCIError *errhp);

typedef sword   (*EVOCIAttrSet) (void  *trgthndlp, ub4 trghndltyp, void  *attributep,
	ub4 size, ub4 attrtype, OCIError *errhp);

typedef sword   (*EVOCIStmtExecute)  (OCISvcCtx *svchp, OCIStmt *stmtp, OCIError *errhp, 
	ub4 iters, ub4 rowoff, const OCISnapshot *snap_in, 
	OCISnapshot *snap_out, ub4 mode);

typedef sword   (*EVOCIStmtSetPieceInfo)   (void  *hndlp, ub4 type, OCIError *errhp, 
	const void  *bufp, ub4 *alenp, ub1 piece, 
	const void  *indp, ub2 *rcodep);

typedef sword   (*EVOCIStmtGetPieceInfo)   (OCIStmt *stmtp, OCIError *errhp, 
	void  **hndlpp, ub4 *typep,
	ub1 *in_outp, ub4 *iterp, ub4 *idxp, 
	ub1 *piecep);

typedef sword (*EVOCINumberToInt)(    OCIError *err, const OCINumber *number,
	uword rsl_length, uword rsl_flag, void  *rsl    );

typedef sword (*EVOCINumberFromInt)(    OCIError *err, const void  *inum, uword inum_length,
	uword inum_s_flag, OCINumber *number    );

typedef sword   (*EVOCILobRead)  (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *locp,
	ub4 *amtp, ub4 offset, void  *bufp, ub4 bufl, void  *ctxp,
	OCICallbackLobRead cbfp, ub2 csid, ub1 csfrm);

class COCIWrapper
{
public:
	virtual ~COCIWrapper();
public:
	static COCIWrapper* getSinglePtr();
public:
	EVOCIInitialize                                     OCIInitialize_Imp;
	EVOCIEnvCreate                                  OCIEnvCreate_Imp;
	EVOCIHandleAlloc								OCIHandleAlloc_Imp;
	EVOCIHandleFree								OCIHandleFree_Imp;
	EVOCIDescriptorAlloc                          OCIDescriptorAlloc_Imp;
	EVOCIDescriptorFree							OCIDescriptorFree_Imp;
	EVOCIServerAttach								OCIServerAttach_Imp;
	EVOCIServerDetach								OCIServerDetach_Imp;
	EVOCISessionBegin								OCISessionBegin_Imp;
	EVOCISessionEnd								OCISessionEnd_Imp;
	EVOCIStmtPrepare								OCIStmtPrepare_Imp;
	EVOCIStmtPrepare2								OCIStmtPrepare2_Imp;
	EVOCIStmtRelease								OCIStmtRelease_Imp ;
	EVOCIBindByPos									OCIBindByPos_Imp;
	EVOCIBindByName								OCIBindByName_Imp ;
	EVOCIBindArrayOfStruct						OCIBindArrayOfStruct_Imp;
	EVOCIDefineByPos								OCIDefineByPos_Imp; ;
	EVOCIDefineArrayOfStruct					OCIDefineArrayOfStruct_Imp;
	EVOCIStmtFetch									OCIStmtFetch_Imp ;
	EVOCIStmtFetch2								OCIStmtFetch2_Imp;
	EVOCIParamGet									OCIParamGet_Imp;
	EVOCITransStart									OCITransStart_Imp ;
	EVOCITransDetach								OCITransDetach_Imp;
	EVOCITransCommit								OCITransCommit_Imp;
	EVOCITransRollback							OCITransRollback_Imp ;
	EVOCITransPrepare								OCITransPrepare_Imp;
	EVOCIErrorGet										OCIErrorGet_Imp ;
	EVOCILobCharSetForm						OCILobCharSetForm_Imp ;
	EVOCILobCharSetId								OCILobCharSetId_Imp;
	EVOCILobGetLength							OCILobGetLength_Imp;
	EVOCIServerVersion							OCIServerVersion_Imp ;
	EVOCIServerRelease							OCIServerRelease_Imp;
	EVOCIAttrGet										OCIAttrGet_Imp;
	EVOCIAttrSet										OCIAttrSet_Imp;
	EVOCIStmtExecute								OCIStmtExecute_Imp;
	EVOCIStmtSetPieceInfo						OCIStmtSetPieceInfo_Imp;
	EVOCIStmtGetPieceInfo						OCIStmtGetPieceInfo_Imp ;
	EVOCINumberToInt								OCINumberToInt_Imp;
	EVOCINumberFromInt							OCINumberFromInt_Imp;
	EVOCILobRead										OCILobRead_Imp;
private:
	static COCIWrapper* singleptr;
	CDynLib* dblib;
	COCIWrapper();
	void init();
	void redefineOCIAPI();
};

}
}
}
}
#endif //_DBDYNLIMANAGER_H_H