
#ifndef _SYS_H_
#define _SYS_H_



#define WIN32_LEAN_AND_MEAN



#include <windows.h>



#include "inputhandler.h"
#include "renderer.h"

class Sys
{
public:
	Sys();
	Sys(const Sys&);
	~Sys();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputHandler* Input;
	Renderer* m_Graphics;
};



static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


static Sys* ApplicationHandle = 0;


#endif