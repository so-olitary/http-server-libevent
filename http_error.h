﻿#include "stdafx.h"

#ifndef _HTTP_ERR_H_
#define _HTTP_ERR_H_

// #define _DEBUG
#define  HTTP_SYSLOG
//-----------------------------------------
typedef enum
{ HTTP_ERR_NONE,  HTTP_ERR_PARAM,
  HTTP_ERR_INPUT, HTTP_ERR_LIBEV,
  HTTP_ERR_RCMMN, HTTP_ERR_RFREE,
  HTTP_ERR_FDTRS
} myerr;
myerr my_errno;
//-----------------------------------------
const char*  strmyerror (void);
//-----------------------------------------
#endif // _HTTP_ERR_H_
