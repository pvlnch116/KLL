#pragma once

/*





*/

#include<Windows.h>
#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>


HANDLE Console;

#ifndef KLL
#define KLL       0
extern "C++"
{
#endif // !KLL


	// KLLAPI
#define KLLAPI

// KLLENTRY

#define KLLENTRY      __stdcall
#define KLLENTRYPOINT WINAPI
#define STDCALL       __stdcall
#define CALLAUT       __stdcall
#define CDECL         __cdecl

#define KLL_LIB    KLLENTRY


// Lib Def

#define Void       void
#define WIN        WINAPI

// KLL

#define KLL_CALL   KLLENTRY


// KLL Log Lib

//Setlog function
	KLLAPI void SetLog();


	// Basic KLL logs

#ifndef Basic_KLL_Logs

#define KLL_LOG_CRITICALERROR    
#define KLL_LOG_ERROR             
#define KLL_LOG_INFO              
#define KLL_LOG_WARNING    

// Functions
KLLAPI void KLL_INFORMATION();
KLLAPI void KLL_WARNING();
KLLAPI void KLL_ERROR();
KLLAPI void KLL_CRITICALERROR();

#define KLL_LOG

#endif // !Basic_KLL_Logs






}

