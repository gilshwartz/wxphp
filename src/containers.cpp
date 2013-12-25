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

#include "php_wxwidgets.h"
#include "appmanagement.h"
#include "aui.h"
#include "bookctrl.h"
#include "cfg.h"
#include "cmndlg.h"
#include "containers.h"
#include "ctrl.h"
#include "data.h"
#include "dc.h"
#include "dnd.h"
#include "docview.h"
#include "dvc.h"
#include "events.h"
#include "file.h"
#include "gdi.h"
#include "grid.h"
#include "help.h"
#include "html.h"
#include "logging.h"
#include "managedwnd.h"
#include "media.h"
#include "menus.h"
#include "misc.h"
#include "miscwnd.h"
#include "net.h"
#include "pickers.h"
#include "printing.h"
#include "ribbon.h"
#include "richtext.h"
#include "rtti.h"
#include "stc.h"
#include "streams.h"
#include "threading.h"
#include "validator.h"
#include "vfs.h"
#include "webview.h"
#include "winlayout.h"
#include "xml.h"
#include "xrc.h"
#include "others.h"


BEGIN_EXTERN_C()
void php_wxClientData_free(void *object TSRMLS_DC) 
{
    zo_wxClientData* custom_object = (zo_wxClientData*) object;
    //delete custom_object->native_object;
    
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxClientData_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	if(custom_object->native_object != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
		#endif
		
		if(custom_object->is_user_initialized)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete custom_object->native_object;
			
			custom_object->native_object = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxClientData done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}

	zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxClientData_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxClientData_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	zval *temp;
    zend_object_value retval;
    zo_wxClientData* custom_object;
    custom_object = (zo_wxClientData*) emalloc(sizeof(zo_wxClientData));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
	MAKE_STD_ZVAL(temp);
	Z_TYPE_P(temp) = IS_OBJECT;
#endif

	retval.handle = zend_objects_store_put(custom_object, NULL, php_wxClientData_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();

#if PHP_VERSION_ID > 50399
	Z_OBJVAL_P(temp) = retval;
#endif

    custom_object->native_object = NULL;
	custom_object->object_type = PHP_WXCLIENTDATA_TYPE;
	custom_object->is_user_initialized = 0;
	
#ifdef ZTS 
	custom_object->native_object->TSRMLS_C = TSRMLS_C;
#endif
	
    return retval;
}
END_EXTERN_C()

/* {{{ proto  wxClientData::wxClientData()
   Constructor. */
PHP_METHOD(php_wxClientData, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxClientData::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxClientData* current_object;
	wxClientData_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	int arguments_received = ZEND_NUM_ARGS();
	
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif

				native_object = new wxClientData_php();

				native_object->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		native_object->phpObj = getThis();
		
		native_object->InitProperties();
		
		current_object = (zo_wxClientData*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		current_object->native_object = native_object;
		
		current_object->is_user_initialized = 1;
		
		#ifdef ZTS 
		native_object->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxClientData::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

BEGIN_EXTERN_C()
void php_wxTreeItemData_free(void *object TSRMLS_DC) 
{
    zo_wxTreeItemData* custom_object = (zo_wxTreeItemData*) object;
    //delete custom_object->native_object;
    
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxTreeItemData_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	if(custom_object->native_object != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
		#endif
		
		if(custom_object->is_user_initialized)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete custom_object->native_object;
			
			custom_object->native_object = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxTreeItemData done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}

	zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxTreeItemData_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxTreeItemData_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	zval *temp;
    zend_object_value retval;
    zo_wxTreeItemData* custom_object;
    custom_object = (zo_wxTreeItemData*) emalloc(sizeof(zo_wxTreeItemData));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
	MAKE_STD_ZVAL(temp);
	Z_TYPE_P(temp) = IS_OBJECT;
#endif

	retval.handle = zend_objects_store_put(custom_object, NULL, php_wxTreeItemData_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();

#if PHP_VERSION_ID > 50399
	Z_OBJVAL_P(temp) = retval;
#endif

    custom_object->native_object = NULL;
	custom_object->object_type = PHP_WXTREEITEMDATA_TYPE;
	custom_object->is_user_initialized = 0;
	
#ifdef ZTS 
	custom_object->native_object->TSRMLS_C = TSRMLS_C;
#endif
	
    return retval;
}
END_EXTERN_C()

/* {{{ proto wxTreeItemId wxTreeItemData::GetId()
   Returns the item associated with this node. */
PHP_METHOD(php_wxTreeItemData, GetId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::GetId\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxTreeItemData* current_object;
	wxphp_object_type current_object_type;
	wxTreeItemData_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxTreeItemData*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxTreeItemData::GetId call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXTREEITEMDATA_TYPE){
				references = &((wxTreeItemData_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxTreeItemData::GetId() to return object reference\n\n");
				#endif

				wxTreeItemId_php* value_to_return0;
				value_to_return0 = (wxTreeItemId_php*) &((wxTreeItemData_php*)native_object)->GetId();

				if(value_to_return0->references.IsUserInitialized()){
					if(value_to_return0->phpObj != NULL){
						*return_value = *value_to_return0->phpObj;
						zval_add_ref(&value_to_return0->phpObj);
						return_is_user_initialized = true;
					}
					else{
						zend_error(E_ERROR, "Could not retreive original zval.");
					}
				}
				else{
					object_init_ex(return_value,php_wxTreeItemId_entry);
					((zo_wxTreeItemId*) zend_object_store_get_object(return_value TSRMLS_CC))->native_object = (wxTreeItemId_php*) value_to_return0;
				}

				if((void*)value_to_return0 != (void*)native_object && return_is_user_initialized){ //Prevent adding references to it self
					references->AddReference(return_value, "wxTreeItemData::GetId at call with 0 argument(s)");
				}


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxTreeItemData::GetId\n");
	}
}
/* }}} */

/* {{{ proto  wxTreeItemData::SetId(wxTreeItemId id)
   Sets the item associated with this node. */
PHP_METHOD(php_wxTreeItemData, SetId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::SetId\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxTreeItemData* current_object;
	wxphp_object_type current_object_type;
	wxTreeItemData_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxTreeItemData*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxTreeItemData::SetId call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXTREEITEMDATA_TYPE){
				references = &((wxTreeItemData_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	zval* id0 = 0;
	wxTreeItemId* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'O' (&id0, php_wxTreeItemId_entry)\n");
		#endif

		char parse_parameters_string[] = "O";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &id0, php_wxTreeItemId_entry ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(id0) == IS_OBJECT)
				{
					wxphp_object_type argument_type = ((zo_wxTreeItemId*) zend_object_store_get_object(id0 TSRMLS_CC))->object_type;
					argument_native_object = (void*) ((zo_wxTreeItemId*) zend_object_store_get_object(id0 TSRMLS_CC))->native_object;
					object_pointer0_0 = (wxTreeItemId*) argument_native_object;
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter 'id' could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(id0) != IS_NULL)
				{
					zend_error(E_ERROR, "Parameter 'id' not null, could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxTreeItemData::SetId(*(wxTreeItemId*) object_pointer0_0)\n\n");
				#endif

				((wxTreeItemData_php*)native_object)->SetId(*(wxTreeItemId*) object_pointer0_0);

				references->AddReference(id0, "wxTreeItemData::SetId at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxTreeItemData::SetId\n");
	}
}
/* }}} */

/* {{{ proto  wxTreeItemData::wxTreeItemData()
   Default constructor. */
PHP_METHOD(php_wxTreeItemData, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxTreeItemData* current_object;
	wxTreeItemData_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	int arguments_received = ZEND_NUM_ARGS();
	
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif

				native_object = new wxTreeItemData_php();

				native_object->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		native_object->phpObj = getThis();
		
		native_object->InitProperties();
		
		current_object = (zo_wxTreeItemData*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		current_object->native_object = native_object;
		
		current_object->is_user_initialized = 1;
		
		#ifdef ZTS 
		native_object->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxTreeItemData::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

