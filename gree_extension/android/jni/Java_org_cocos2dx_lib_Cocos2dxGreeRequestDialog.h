#ifndef __Java_org_cocos2dx_lib_Cocos2dxGreeRequestDialog_H__
#define __Java_org_cocos2dx_lib_Cocos2dxGreeRequestDialog_H__

#include <string.h>
#include "cocos2d.h"
#include "jni.h"

extern "C"
{
	jobject createRequestDialogJni(void);

	void setRequestDialogHandlerJni(jobject obj, void *delegate);
	void setRequestDialogParamsJni(jobject obj, cocos2d::CCDictionary *params);
	void showRequestDialogJni(jobject obj);
}
#endif

