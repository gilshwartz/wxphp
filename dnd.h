/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef wxphp_dnd_guard
#define wxphp_dnd_guard

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_dnd_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry *php_wxClipboard_entry;
void php_wxClipboard_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxClipboard_NAME[];
extern char le_wxClipboard_name[];

class wxClipboard_php: public wxClipboard{
	public:
	
	wxClipboard_php():wxClipboard(){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxClipboard;
    
static zend_function_entry php_wxClipboard_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, AddData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, Flush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, GetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, IsOpened, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, IsUsingPrimarySelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, Open, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, UsePrimarySelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxClipboard, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxDataFormat_entry;
void php_wxDataFormat_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDataFormat_NAME[];
extern char le_wxDataFormat_name[];

class wxDataFormat_php: public wxDataFormat{
	public:
	
	wxDataFormat_php(wxDataFormatId format=wxDF_INVALID):wxDataFormat(format){}
	wxDataFormat_php(const wxString& format):wxDataFormat(format){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDataFormat;
    
static zend_function_entry php_wxDataFormat_functions[] = {
	PHP_ME(php_wxDataFormat, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataFormat, GetType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataFormat, SetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataFormat, SetType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataFormat, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxDataObject_entry;
void php_wxDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDataObject_NAME[];
extern char le_wxDataObject_name[];

class wxDataObject_php: public wxDataObject{
	public:
	
	wxDataObject_php():wxDataObject(){}
		
	void GetAllFormats(wxDataFormat* formats, Direction dir=Get) const;
	bool GetDataHere(const wxDataFormat& format, void* buf) const;
	size_t GetDataSize(const wxDataFormat& format) const;
	size_t GetFormatCount(Direction dir=Get) const;
	wxDataFormat GetPreferredFormat(Direction dir=Get) const;
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDataObject;
    
static zend_function_entry php_wxDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObject, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxCustomDataObject_entry;
void php_wxCustomDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxCustomDataObject_NAME[];
extern char le_wxCustomDataObject_name[];

class wxCustomDataObject_php: public wxCustomDataObject{
	public:
	
	wxCustomDataObject_php(const wxDataFormat& format=wxFormatInvalid):wxCustomDataObject(format){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxCustomDataObject;
    
static zend_function_entry php_wxCustomDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, Alloc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, Free, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, GetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, TakeData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCustomDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxDataObjectComposite_entry;
void php_wxDataObjectComposite_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDataObjectComposite_NAME[];
extern char le_wxDataObjectComposite_name[];

class wxDataObjectComposite_php: public wxDataObjectComposite{
	public:
	
	wxDataObjectComposite_php():wxDataObjectComposite(){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDataObjectComposite;
    
static zend_function_entry php_wxDataObjectComposite_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObject, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectComposite, Add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectComposite, GetReceivedFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectComposite, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxDataObjectSimple_entry;
void php_wxDataObjectSimple_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDataObjectSimple_NAME[];
extern char le_wxDataObjectSimple_name[];

class wxDataObjectSimple_php: public wxDataObjectSimple{
	public:
	
	wxDataObjectSimple_php(const wxDataFormat& format=wxFormatInvalid):wxDataObjectSimple(format){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDataObjectSimple;
    
static zend_function_entry php_wxDataObjectSimple_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxBitmapDataObject_entry;
void php_wxBitmapDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxBitmapDataObject_NAME[];
extern char le_wxBitmapDataObject_name[];

class wxBitmapDataObject_php: public wxBitmapDataObject{
	public:
	
	wxBitmapDataObject_php(const wxBitmap& bitmap=wxNullBitmap):wxBitmapDataObject(bitmap){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxBitmapDataObject;
    
static zend_function_entry php_wxBitmapDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxBitmapDataObject, GetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxBitmapDataObject, SetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxBitmapDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxURLDataObject_entry;
void php_wxURLDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxURLDataObject_NAME[];
extern char le_wxURLDataObject_name[];

class wxURLDataObject_php: public wxURLDataObject{
	public:
	
	wxURLDataObject_php(const wxString& url=wxEmptyString):wxURLDataObject(url){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxURLDataObject;
    
static zend_function_entry php_wxURLDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetTextLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, SetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetFormatCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxURLDataObject, GetURL, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxURLDataObject, SetURL, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxURLDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxTextDataObject_entry;
void php_wxTextDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxTextDataObject_NAME[];
extern char le_wxTextDataObject_name[];

class wxTextDataObject_php: public wxTextDataObject{
	public:
	
	wxTextDataObject_php(const wxString& text=wxEmptyString):wxTextDataObject(text){}
		
	void GetAllFormats(wxDataFormat* formats, Direction dir=Get) const;
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxTextDataObject;
    
static zend_function_entry php_wxTextDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, GetTextLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, SetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxTextDataObject, GetFormatCount, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxFileDataObject_entry;
void php_wxFileDataObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxFileDataObject_NAME[];
extern char le_wxFileDataObject_name[];

class wxFileDataObject_php: public wxFileDataObject{
	public:
	
	wxFileDataObject_php():wxFileDataObject(){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxFileDataObject;
    
static zend_function_entry php_wxFileDataObject_functions[] = {
	PHP_ME(php_wxDataObject, IsSupported, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataHere, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetDataSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, GetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataObjectSimple, SetFormat, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDataObject, AddFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDataObject, GetFilenames, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDataObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxTextDropTarget_entry;
void php_wxTextDropTarget_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxTextDropTarget_NAME[];
extern char le_wxTextDropTarget_name[];

class wxTextDropTarget_php: public wxTextDropTarget{
	public:
	
	wxTextDropTarget_php():wxTextDropTarget(){}
		
	bool OnDropText(wxCoord x, wxCoord y, const wxString& data);
	bool OnDrop(wxCoord x, wxCoord y);
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxTextDropTarget;
    
static zend_function_entry php_wxTextDropTarget_functions[] = {
	PHP_ME(php_wxDropTarget, SetDataObject, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextDropTarget, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxDropTarget_entry;
void php_wxDropTarget_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDropTarget_NAME[];
extern char le_wxDropTarget_name[];

class wxDropTarget_php: public wxDropTarget{
	public:
	
	wxDropTarget_php(wxDataObject* data=NULL):wxDropTarget(data){}
		
	wxDragResult OnDragOver(wxCoord x, wxCoord y, wxDragResult def);
	wxDragResult OnEnter(wxCoord x, wxCoord y, wxDragResult def);
	void OnLeave();
	bool GetData();
	wxDragResult OnData(wxCoord x, wxCoord y, wxDragResult def);
	bool OnDrop(wxCoord x, wxCoord y);
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDropTarget;
    
static zend_function_entry php_wxDropTarget_functions[] = {
	PHP_ME(php_wxDropTarget, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxDropTarget, SetDataObject, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxFileDropTarget_entry;
void php_wxFileDropTarget_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxFileDropTarget_NAME[];
extern char le_wxFileDropTarget_name[];

class wxFileDropTarget_php: public wxFileDropTarget{
	public:
	
	wxFileDropTarget_php():wxFileDropTarget(){}
		
	bool OnDropFiles(wxCoord x, wxCoord y, const wxArrayString& filenames);
	bool OnDrop(wxCoord x, wxCoord y);
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxFileDropTarget;
    
static zend_function_entry php_wxFileDropTarget_functions[] = {
	PHP_ME(php_wxDropTarget, SetDataObject, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDropTarget, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

#endif //wxphp_dnd_guard
