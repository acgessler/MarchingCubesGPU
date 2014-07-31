#include "DirectXApp.h"


DirectXApp::DirectXApp()
{
}


DirectXApp::~DirectXApp()
{
}

bool DirectXApp::init()
{
    /*
    UINT32 AdapterOrdinal = 0;
    D3DDEVTYPE DeviceType = D3DDEVTYPE_HAL;
    D3DCAPS9 caps;
    m_pD3D->GetDeviceCaps(AdapterOrdinal, DeviceType, &caps); // caps bits

    D3DPRESENT_PARAMETERS params;
    ZeroMemory(&params, sizeof(D3DPRESENT_PARAMETERS));

    // Swap chain parameters:
    params.hDeviceWindow = m_hWnd;
    params.AutoDepthStencilFormat = D3DFMT_D24X8;
    params.BackBufferFormat = D3DFMT_X8R8G8B8;
    params.MultiSampleQuality = D3DMULTISAMPLE_NONE;
    params.MultiSampleType = D3DMULTISAMPLE_NONE;
    params.SwapEffect = D3DSWAPEFFECT_DISCARD;
    params.Windowed = true;
    params.PresentationInterval = 0;
    params.BackBufferCount = 2;
    params.BackBufferWidth = 0;
    params.BackBufferHeight = 0;
    params.EnableAutoDepthStencil = true;
    params.Flags = 2;

    m_pD3D->CreateDevice(
        0,
        D3DDEVTYPE_HAL,
        m_hWnd,
        64,
        &params,
        &m_pd3dDevice
        );
    */

}

bool DirectXApp::run()
{

}


bool DirectXApp::createWindow(HINSTANCE hInstance)
{

    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = 0;
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = L"TestWindowClass";
    wcex.hIconSm = NULL;
    
    if (!RegisterClassEx(&wcex))
        return FALSE;


    RECT rc = { 0, 0, 640, 480 };
    
    //HWND hwnd = CreateWindow(L"Window
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{

}