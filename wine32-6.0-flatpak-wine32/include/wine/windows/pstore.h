/*** Autogenerated by WIDL 6.0 from ../include/pstore.idl - Do not edit ***/

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

#ifndef __pstore_h__
#define __pstore_h__

/* Forward declarations */

#ifndef __IEnumPStoreItems_FWD_DEFINED__
#define __IEnumPStoreItems_FWD_DEFINED__
typedef interface IEnumPStoreItems IEnumPStoreItems;
#ifdef __cplusplus
interface IEnumPStoreItems;
#endif /* __cplusplus */
#endif

#ifndef __IEnumPStoreTypes_FWD_DEFINED__
#define __IEnumPStoreTypes_FWD_DEFINED__
typedef interface IEnumPStoreTypes IEnumPStoreTypes;
#ifdef __cplusplus
interface IEnumPStoreTypes;
#endif /* __cplusplus */
#endif

#ifndef __IPStore_FWD_DEFINED__
#define __IPStore_FWD_DEFINED__
typedef interface IPStore IPStore;
#ifdef __cplusplus
interface IPStore;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PST_KEY_CURRENT_USER    0
#define PST_KEY_LOCAL_MACHINE   1
#define PST_E_OK          0x00000000L
#define PST_E_TYPE_EXISTS 0x800C0004L
#define PST_AUTHENTICODE        1
#define PST_BINARY_CHECK        2
#define PST_SECURITY_DESCRIPTOR 4
typedef DWORD PST_ACCESSMODE;
typedef DWORD PST_ACCESSCLAUSETYPE;
typedef DWORD PST_KEY;
typedef DWORD PST_PROVIDERCAPABILITIES;
typedef GUID PST_PROVIDERID;
typedef GUID *PPST_PROVIDERID;
#ifndef __PSTORECLib_LIBRARY_DEFINED__
#define __PSTORECLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_PSTORECLib, 0x5a6f1ebd, 0x2db1, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b);

typedef struct _PST_PROVIDERINFO {
    DWORD cbSize;
    PST_PROVIDERID ID;
    PST_PROVIDERCAPABILITIES Capabilities;
    LPWSTR szProviderName;
} PST_PROVIDERINFO;
typedef struct _PST_PROVIDERINFO *PPST_PROVIDERINFO;
typedef struct _PST_PROMPTINFO {
    DWORD cbSize;
    DWORD dwPromptFlags;
    HWND hwndApp;
    LPCWSTR szPrompt;
} PST_PROMPTINFO;
typedef struct _PST_PROMPTINFO *PPST_PROMPTINFO;
typedef struct _PST_ACCESSCLAUSE {
    DWORD cbSize;
    PST_ACCESSCLAUSETYPE ClauseType;
    DWORD cbClauseData;
    BYTE *pbClauseData;
} PST_ACCESSCLAUSE;
typedef struct _PST_ACCESSCLAUSE *PPST_ACCESSCLAUSE;
typedef struct _PST_ACCESSRULE {
    DWORD cbSize;
    PST_ACCESSMODE AccessModeFlags;
    DWORD cClauses;
    PST_ACCESSCLAUSE *rgClauses;
} PST_ACCESSRULE;
typedef struct _PST_ACCESSRULE *PPST_ACCESSRULE;
typedef struct _PST_ACCESSRULESET {
    DWORD cbSize;
    DWORD cClause;
    PST_ACCESSRULE *rgRules;
} PST_ACCESSRULESET;
typedef struct _PST_ACCESSRULESET *PPST_ACCESSRULESET;
typedef struct _PST_TYPEINFO {
    DWORD cbSize;
    LPWSTR szDisplayName;
} PST_TYPEINFO;
typedef struct _PST_TYPEINFO *PPST_TYPEINFO;
/*****************************************************************************
 * IEnumPStoreItems interface
 */
#ifndef __IEnumPStoreItems_INTERFACE_DEFINED__
#define __IEnumPStoreItems_INTERFACE_DEFINED__

DEFINE_GUID(IID_IEnumPStoreItems, 0x5a6f1ec1, 0x2db1, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5a6f1ec1-2db1-11d0-8c39-00c04fd9126b")
IEnumPStoreItems : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumPStoreItems **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Next(
        DWORD celt,
        LPWSTR *rgelt,
        DWORD *pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        DWORD celt) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumPStoreItems, 0x5a6f1ec1, 0x2db1, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b)
#endif
#else
typedef struct IEnumPStoreItemsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumPStoreItems *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumPStoreItems *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumPStoreItems *This);

    /*** IEnumPStoreItems methods ***/
    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumPStoreItems *This,
        IEnumPStoreItems **ppenum);

    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumPStoreItems *This,
        DWORD celt,
        LPWSTR *rgelt,
        DWORD *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumPStoreItems *This);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumPStoreItems *This,
        DWORD celt);

    END_INTERFACE
} IEnumPStoreItemsVtbl;

interface IEnumPStoreItems {
    CONST_VTBL IEnumPStoreItemsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumPStoreItems_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumPStoreItems_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumPStoreItems_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumPStoreItems methods ***/
#define IEnumPStoreItems_Clone(This,ppenum) (This)->lpVtbl->Clone(This,ppenum)
#define IEnumPStoreItems_Next(This,celt,rgelt,pceltFetched) (This)->lpVtbl->Next(This,celt,rgelt,pceltFetched)
#define IEnumPStoreItems_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumPStoreItems_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IEnumPStoreItems_QueryInterface(IEnumPStoreItems* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IEnumPStoreItems_AddRef(IEnumPStoreItems* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IEnumPStoreItems_Release(IEnumPStoreItems* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumPStoreItems methods ***/
static FORCEINLINE HRESULT IEnumPStoreItems_Clone(IEnumPStoreItems* This,IEnumPStoreItems **ppenum) {
    return This->lpVtbl->Clone(This,ppenum);
}
static FORCEINLINE HRESULT IEnumPStoreItems_Next(IEnumPStoreItems* This,DWORD celt,LPWSTR *rgelt,DWORD *pceltFetched) {
    return This->lpVtbl->Next(This,celt,rgelt,pceltFetched);
}
static FORCEINLINE HRESULT IEnumPStoreItems_Reset(IEnumPStoreItems* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IEnumPStoreItems_Skip(IEnumPStoreItems* This,DWORD celt) {
    return This->lpVtbl->Skip(This,celt);
}
#endif
#endif

#endif


#endif  /* __IEnumPStoreItems_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumPStoreTypes interface
 */
#ifndef __IEnumPStoreTypes_INTERFACE_DEFINED__
#define __IEnumPStoreTypes_INTERFACE_DEFINED__

DEFINE_GUID(IID_IEnumPStoreTypes, 0x789c1cbf, 0x31ee, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("789c1cbf-31ee-11d0-8c39-00c04fd9126b")
IEnumPStoreTypes : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumPStoreTypes **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Next(
        DWORD celt,
        LPWSTR *rgelt,
        DWORD *pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        DWORD celt) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumPStoreTypes, 0x789c1cbf, 0x31ee, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b)
#endif
#else
typedef struct IEnumPStoreTypesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumPStoreTypes *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumPStoreTypes *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumPStoreTypes *This);

    /*** IEnumPStoreTypes methods ***/
    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumPStoreTypes *This,
        IEnumPStoreTypes **ppenum);

    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumPStoreTypes *This,
        DWORD celt,
        LPWSTR *rgelt,
        DWORD *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumPStoreTypes *This);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumPStoreTypes *This,
        DWORD celt);

    END_INTERFACE
} IEnumPStoreTypesVtbl;

interface IEnumPStoreTypes {
    CONST_VTBL IEnumPStoreTypesVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumPStoreTypes_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumPStoreTypes_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumPStoreTypes_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumPStoreTypes methods ***/
#define IEnumPStoreTypes_Clone(This,ppenum) (This)->lpVtbl->Clone(This,ppenum)
#define IEnumPStoreTypes_Next(This,celt,rgelt,pceltFetched) (This)->lpVtbl->Next(This,celt,rgelt,pceltFetched)
#define IEnumPStoreTypes_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumPStoreTypes_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IEnumPStoreTypes_QueryInterface(IEnumPStoreTypes* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IEnumPStoreTypes_AddRef(IEnumPStoreTypes* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IEnumPStoreTypes_Release(IEnumPStoreTypes* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumPStoreTypes methods ***/
static FORCEINLINE HRESULT IEnumPStoreTypes_Clone(IEnumPStoreTypes* This,IEnumPStoreTypes **ppenum) {
    return This->lpVtbl->Clone(This,ppenum);
}
static FORCEINLINE HRESULT IEnumPStoreTypes_Next(IEnumPStoreTypes* This,DWORD celt,LPWSTR *rgelt,DWORD *pceltFetched) {
    return This->lpVtbl->Next(This,celt,rgelt,pceltFetched);
}
static FORCEINLINE HRESULT IEnumPStoreTypes_Reset(IEnumPStoreTypes* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IEnumPStoreTypes_Skip(IEnumPStoreTypes* This,DWORD celt) {
    return This->lpVtbl->Skip(This,celt);
}
#endif
#endif

#endif


#endif  /* __IEnumPStoreTypes_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPStore interface
 */
#ifndef __IPStore_INTERFACE_DEFINED__
#define __IPStore_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPStore, 0x5a6f1ec0, 0x2db1, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5a6f1ec0-2db1-11d0-8c39-00c04fd9126b")
IPStore : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetInfo(
        PPST_PROVIDERINFO *ppProperties) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProvParam(
        DWORD dwParam,
        DWORD *pcbData,
        BYTE **ppbData,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProvParam(
        DWORD dwParam,
        DWORD cbData,
        BYTE *pbData,
        DWORD *dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateType(
        PST_KEY Key,
        const GUID *pType,
        PPST_TYPEINFO pInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTypeInfo(
        PST_KEY Key,
        const GUID *pType,
        PPST_TYPEINFO **ppInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteType(
        PST_KEY Key,
        const GUID *pType,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSubtype(
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSubtypeInfo(
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO **ppInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteSubtype(
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadAccessRuleset(
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET **ppRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteAccessRuleset(
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumTypes(
        PST_KEY Key,
        DWORD dwFlags,
        IEnumPStoreTypes **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumSubtypes(
        PST_KEY Key,
        const GUID *pType,
        DWORD dwFlags,
        IEnumPStoreTypes **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteItem(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubType,
        LPCWSTR szItemName,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadItem(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        DWORD *cbData,
        BYTE **pbData,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteItem(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        DWORD cbData,
        BYTE *ppbData,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwDefaultConfirmationStyle,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenItem(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        PST_ACCESSMODE ModeFlags,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloseItem(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR *szItemName,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumItems(
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        DWORD dwFlags,
        IEnumPStoreItems **ppenum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPStore, 0x5a6f1ec0, 0x2db1, 0x11d0, 0x8c,0x39, 0x00,0xc0,0x4f,0xd9,0x12,0x6b)
#endif
#else
typedef struct IPStoreVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPStore *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPStore *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPStore *This);

    /*** IPStore methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        IPStore *This,
        PPST_PROVIDERINFO *ppProperties);

    HRESULT (STDMETHODCALLTYPE *GetProvParam)(
        IPStore *This,
        DWORD dwParam,
        DWORD *pcbData,
        BYTE **ppbData,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SetProvParam)(
        IPStore *This,
        DWORD dwParam,
        DWORD cbData,
        BYTE *pbData,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *CreateType)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        PPST_TYPEINFO pInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        PPST_TYPEINFO **ppInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *DeleteType)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *CreateSubtype)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSubtypeInfo)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO **ppInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *DeleteSubtype)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ReadAccessRuleset)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET **ppRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *WriteAccessRuleset)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        const GUID *pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *EnumTypes)(
        IPStore *This,
        PST_KEY Key,
        DWORD dwFlags,
        IEnumPStoreTypes **ppenum);

    HRESULT (STDMETHODCALLTYPE *EnumSubtypes)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pType,
        DWORD dwFlags,
        IEnumPStoreTypes **ppenum);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubType,
        LPCWSTR szItemName,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ReadItem)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        DWORD *cbData,
        BYTE **pbData,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *WriteItem)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        DWORD cbData,
        BYTE *ppbData,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwDefaultConfirmationStyle,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *OpenItem)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR szItemName,
        PST_ACCESSMODE ModeFlags,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *CloseItem)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        LPCWSTR *szItemName,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *EnumItems)(
        IPStore *This,
        PST_KEY Key,
        const GUID *pItemType,
        const GUID *pItemSubtype,
        DWORD dwFlags,
        IEnumPStoreItems **ppenum);

    END_INTERFACE
} IPStoreVtbl;

interface IPStore {
    CONST_VTBL IPStoreVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPStore_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPStore_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPStore_Release(This) (This)->lpVtbl->Release(This)
/*** IPStore methods ***/
#define IPStore_GetInfo(This,ppProperties) (This)->lpVtbl->GetInfo(This,ppProperties)
#define IPStore_GetProvParam(This,dwParam,pcbData,ppbData,dwFlags) (This)->lpVtbl->GetProvParam(This,dwParam,pcbData,ppbData,dwFlags)
#define IPStore_SetProvParam(This,dwParam,cbData,pbData,dwFlags) (This)->lpVtbl->SetProvParam(This,dwParam,cbData,pbData,dwFlags)
#define IPStore_CreateType(This,Key,pType,pInfo,dwFlags) (This)->lpVtbl->CreateType(This,Key,pType,pInfo,dwFlags)
#define IPStore_GetTypeInfo(This,Key,pType,ppInfo,dwFlags) (This)->lpVtbl->GetTypeInfo(This,Key,pType,ppInfo,dwFlags)
#define IPStore_DeleteType(This,Key,pType,dwFlags) (This)->lpVtbl->DeleteType(This,Key,pType,dwFlags)
#define IPStore_CreateSubtype(This,Key,pType,pSubtype,pInfo,pRules,dwFlags) (This)->lpVtbl->CreateSubtype(This,Key,pType,pSubtype,pInfo,pRules,dwFlags)
#define IPStore_GetSubtypeInfo(This,Key,pType,pSubtype,ppInfo,dwFlags) (This)->lpVtbl->GetSubtypeInfo(This,Key,pType,pSubtype,ppInfo,dwFlags)
#define IPStore_DeleteSubtype(This,Key,pType,pSubtype,dwFlags) (This)->lpVtbl->DeleteSubtype(This,Key,pType,pSubtype,dwFlags)
#define IPStore_ReadAccessRuleset(This,Key,pType,pSubtype,pInfo,ppRules,dwFlags) (This)->lpVtbl->ReadAccessRuleset(This,Key,pType,pSubtype,pInfo,ppRules,dwFlags)
#define IPStore_WriteAccessRuleset(This,Key,pType,pSubtype,pInfo,pRules,dwFlags) (This)->lpVtbl->WriteAccessRuleset(This,Key,pType,pSubtype,pInfo,pRules,dwFlags)
#define IPStore_EnumTypes(This,Key,dwFlags,ppenum) (This)->lpVtbl->EnumTypes(This,Key,dwFlags,ppenum)
#define IPStore_EnumSubtypes(This,Key,pType,dwFlags,ppenum) (This)->lpVtbl->EnumSubtypes(This,Key,pType,dwFlags,ppenum)
#define IPStore_DeleteItem(This,Key,pItemType,pItemSubType,szItemName,pPromptInfo,dwFlags) (This)->lpVtbl->DeleteItem(This,Key,pItemType,pItemSubType,szItemName,pPromptInfo,dwFlags)
#define IPStore_ReadItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,pbData,pPromptInfo,dwFlags) (This)->lpVtbl->ReadItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,pbData,pPromptInfo,dwFlags)
#define IPStore_WriteItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,ppbData,pPromptInfo,dwDefaultConfirmationStyle,dwFlags) (This)->lpVtbl->WriteItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,ppbData,pPromptInfo,dwDefaultConfirmationStyle,dwFlags)
#define IPStore_OpenItem(This,Key,pItemType,pItemSubtype,szItemName,ModeFlags,pPromptInfo,dwFlags) (This)->lpVtbl->OpenItem(This,Key,pItemType,pItemSubtype,szItemName,ModeFlags,pPromptInfo,dwFlags)
#define IPStore_CloseItem(This,Key,pItemType,pItemSubtype,szItemName,dwFlags) (This)->lpVtbl->CloseItem(This,Key,pItemType,pItemSubtype,szItemName,dwFlags)
#define IPStore_EnumItems(This,Key,pItemType,pItemSubtype,dwFlags,ppenum) (This)->lpVtbl->EnumItems(This,Key,pItemType,pItemSubtype,dwFlags,ppenum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IPStore_QueryInterface(IPStore* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IPStore_AddRef(IPStore* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IPStore_Release(IPStore* This) {
    return This->lpVtbl->Release(This);
}
/*** IPStore methods ***/
static FORCEINLINE HRESULT IPStore_GetInfo(IPStore* This,PPST_PROVIDERINFO *ppProperties) {
    return This->lpVtbl->GetInfo(This,ppProperties);
}
static FORCEINLINE HRESULT IPStore_GetProvParam(IPStore* This,DWORD dwParam,DWORD *pcbData,BYTE **ppbData,DWORD dwFlags) {
    return This->lpVtbl->GetProvParam(This,dwParam,pcbData,ppbData,dwFlags);
}
static FORCEINLINE HRESULT IPStore_SetProvParam(IPStore* This,DWORD dwParam,DWORD cbData,BYTE *pbData,DWORD *dwFlags) {
    return This->lpVtbl->SetProvParam(This,dwParam,cbData,pbData,dwFlags);
}
static FORCEINLINE HRESULT IPStore_CreateType(IPStore* This,PST_KEY Key,const GUID *pType,PPST_TYPEINFO pInfo,DWORD dwFlags) {
    return This->lpVtbl->CreateType(This,Key,pType,pInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_GetTypeInfo(IPStore* This,PST_KEY Key,const GUID *pType,PPST_TYPEINFO **ppInfo,DWORD dwFlags) {
    return This->lpVtbl->GetTypeInfo(This,Key,pType,ppInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_DeleteType(IPStore* This,PST_KEY Key,const GUID *pType,DWORD dwFlags) {
    return This->lpVtbl->DeleteType(This,Key,pType,dwFlags);
}
static FORCEINLINE HRESULT IPStore_CreateSubtype(IPStore* This,PST_KEY Key,const GUID *pType,const GUID *pSubtype,PPST_TYPEINFO pInfo,PPST_ACCESSRULESET pRules,DWORD dwFlags) {
    return This->lpVtbl->CreateSubtype(This,Key,pType,pSubtype,pInfo,pRules,dwFlags);
}
static FORCEINLINE HRESULT IPStore_GetSubtypeInfo(IPStore* This,PST_KEY Key,const GUID *pType,const GUID *pSubtype,PPST_TYPEINFO **ppInfo,DWORD dwFlags) {
    return This->lpVtbl->GetSubtypeInfo(This,Key,pType,pSubtype,ppInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_DeleteSubtype(IPStore* This,PST_KEY Key,const GUID *pType,const GUID *pSubtype,DWORD dwFlags) {
    return This->lpVtbl->DeleteSubtype(This,Key,pType,pSubtype,dwFlags);
}
static FORCEINLINE HRESULT IPStore_ReadAccessRuleset(IPStore* This,PST_KEY Key,const GUID *pType,const GUID *pSubtype,PPST_TYPEINFO pInfo,PPST_ACCESSRULESET **ppRules,DWORD dwFlags) {
    return This->lpVtbl->ReadAccessRuleset(This,Key,pType,pSubtype,pInfo,ppRules,dwFlags);
}
static FORCEINLINE HRESULT IPStore_WriteAccessRuleset(IPStore* This,PST_KEY Key,const GUID *pType,const GUID *pSubtype,PPST_TYPEINFO pInfo,PPST_ACCESSRULESET pRules,DWORD dwFlags) {
    return This->lpVtbl->WriteAccessRuleset(This,Key,pType,pSubtype,pInfo,pRules,dwFlags);
}
static FORCEINLINE HRESULT IPStore_EnumTypes(IPStore* This,PST_KEY Key,DWORD dwFlags,IEnumPStoreTypes **ppenum) {
    return This->lpVtbl->EnumTypes(This,Key,dwFlags,ppenum);
}
static FORCEINLINE HRESULT IPStore_EnumSubtypes(IPStore* This,PST_KEY Key,const GUID *pType,DWORD dwFlags,IEnumPStoreTypes **ppenum) {
    return This->lpVtbl->EnumSubtypes(This,Key,pType,dwFlags,ppenum);
}
static FORCEINLINE HRESULT IPStore_DeleteItem(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubType,LPCWSTR szItemName,PPST_PROMPTINFO pPromptInfo,DWORD dwFlags) {
    return This->lpVtbl->DeleteItem(This,Key,pItemType,pItemSubType,szItemName,pPromptInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_ReadItem(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubtype,LPCWSTR szItemName,DWORD *cbData,BYTE **pbData,PPST_PROMPTINFO pPromptInfo,DWORD dwFlags) {
    return This->lpVtbl->ReadItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,pbData,pPromptInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_WriteItem(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubtype,LPCWSTR szItemName,DWORD cbData,BYTE *ppbData,PPST_PROMPTINFO pPromptInfo,DWORD dwDefaultConfirmationStyle,DWORD dwFlags) {
    return This->lpVtbl->WriteItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,ppbData,pPromptInfo,dwDefaultConfirmationStyle,dwFlags);
}
static FORCEINLINE HRESULT IPStore_OpenItem(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubtype,LPCWSTR szItemName,PST_ACCESSMODE ModeFlags,PPST_PROMPTINFO pPromptInfo,DWORD dwFlags) {
    return This->lpVtbl->OpenItem(This,Key,pItemType,pItemSubtype,szItemName,ModeFlags,pPromptInfo,dwFlags);
}
static FORCEINLINE HRESULT IPStore_CloseItem(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubtype,LPCWSTR *szItemName,DWORD dwFlags) {
    return This->lpVtbl->CloseItem(This,Key,pItemType,pItemSubtype,szItemName,dwFlags);
}
static FORCEINLINE HRESULT IPStore_EnumItems(IPStore* This,PST_KEY Key,const GUID *pItemType,const GUID *pItemSubtype,DWORD dwFlags,IEnumPStoreItems **ppenum) {
    return This->lpVtbl->EnumItems(This,Key,pItemType,pItemSubtype,dwFlags,ppenum);
}
#endif
#endif

#endif


#endif  /* __IPStore_INTERFACE_DEFINED__ */

#endif /* __PSTORECLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __pstore_h__ */
