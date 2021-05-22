#include <Windows.h>

bool isRunning = true;
LRESULT CALLBACK window_callback(HWND hwnd,UINT uMsg,WPARAM wParam,LPARAM lParam){
	LRESULT result = 0;
	switch(uMsg) {
		case WM_CLOSE:
		case WM_DESTROY:
		isRunning = false;
				break;
		default: result = window_callback(hwnd, uMsg, wParam, lParam);
			break;
	}
	return result;
}


//Entry Point for the Program
int  WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{
	//Create Window Class
	WNDCLASS window_class = {};
	window_class.style = HS_HORIZONTAL | HS_VERTICAL;
	window_class.lpszClassName = "Window Class";
	window_class.lpfnWndProc = &window_callback;

	//Register Window Class
	RegisterClass(&window_class);

	//Create a window

}