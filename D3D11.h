#ifndef _D3D11_H
#define _D3D11_H

//d3d11 libs and includes.
#include			 <d3dcommon.h>
#include			 <dxgi.h>
#pragma comment(lib, "dxgi.lib")
#include			 <d3d11.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dx11.lib")
#include			 <d3dx10math.h>
#pragma comment(lib, "d3dx10.lib")

#endif


class D3D11 
{

	//public class members, and methods.
public:
	D3D11(); //class constructor prototype
	D3D11(const D3D11&); //reference to this
	~D3D11(); 

	//function prototypes
	void GetVideoCardInfo(char*, int&);
	bool Initialize(int, int, bool, HWND, bool, float, float);
	void BeginScene(float, float, float, float);
	void EndScene();
	void GetProjectionMatrix(D3DXMATRIX&);
	void GetWorldMatrix(D3DXMATRIX&);
	void GetOrthoMatrix(D3DXMATRIX&);
	void Shutdown();

	ID3D11Device* GetD3D11Device(); 
	ID3D11DeviceContext* GetD3D11DeviceContext();





	//private class members 
private:
	bool vsync_enabled;
	int videoCardMemory;
	char videoCardDescription[128];

	IDXGISwapChain* swapChain;
	ID3D11Device* device;
	ID3D11DeviceContext* deviceContext;
	ID3D11RenderTargetView* renderTargetView;
	ID3D11Texture2D* depthStencilBuffer;
	ID3D11DepthStencilState* depthStencilState;
	ID3D11DepthStencilView* depthStencilView;
	ID3D11RasterizerState* rasterState;
	D3DXMATRIX projectionMatrix;
	D3DXMATRIX worldMatrix;
	D3DXMATRIX orthoMatrix;
};

