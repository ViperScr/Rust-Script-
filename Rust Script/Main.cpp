#include "Main.h"
#include "script.h"
#include "Fonts.h"
#include "xorstr.h"
#include "extra/remember.h"
#include "Main.h"
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <WinInet.h>
#include <filesystem>
#include <fstream>
#include <string.h>
#include <cstring>
#include "md5.h"
#include "Main.h"
#include "misc.h"
#include <Windows.h>
#
    style->GrabMinSize = 7.0f;
    style->PopupRounding = 2.0f;
    style->ScrollbarRounding = 12.0f;
    style->ScrollbarSize = 13.0f;
    style->TabBorderSize = 1.0f;
    style->TabRounding = 0.0f;
    style->WindowRounding = 4.0f;
    ImGui_ImplWin32_Init(main_hwnd);
    ImGui_ImplDX9_Init(g_pd3dDevice);

    DWORD window_flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoDecoration;
    RECT screen_rect;
    GetWindowRect(GetDesktopWindow(), &screen_rect);
    auto x = float(screen_rect.right - width) / 2.f;
    auto y = float(screen_rect.bottom - height) / 2.f;

    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
 
    {
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {
            ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Once);
            ImGui::SetNextWindowSize(ImVec2(width, height));
            ImGui::SetNextWindowBgAlpha(1.0f);

            ImGui::Begin("Lo




                    ImGui::Text("");
                    ImGui::SameLine();
                    ImGui::Combo("B", &selectedItemBR, itemBR, IM_ARRAYSIZE(itemBR));
                    if (selectedItemBR == 0) {
                        Active_Barrel = "NONE";
                        silencer_active = false;
                    }
                    if (selectedItemBR == 1) {
                        Active_Barrel = "SILENCER";
                        silencer_active = true;
                    }
                    ImGui::PopItemWidth();
                    ImGui::Text("");
                    ImGui::Text("");
                    ImGui::SameLine(25);
                    ImGui::TextColored(ImColor(255, 255, 255), "Randomization");
                    ImGui::SetCursorPosX(8);
                    ImGui::SliderFloat("####-", &XCONTROL, 1, 5, "% .2f");
                    ImGui::SetCursorPosX(8);
                    ImGui::SliderFloat("##-", &YCONTROL, 1, 5, "% .2f");
                    ImGui::EndChild();
                    ImGui::SameLine(215);
                    ImGui::BeginChild("sadasd", ImVec2(200.0f, 240.0f));
                    ImGui::Text("");
                    ImGui::SetCursorPosX(8);
                    ImGui::Checkbox("Beep Ses", &BSound);
                    if (BSound == true) {
                        BSound = true;
                    }
                    ImGui::Text("");
                    ImGui::SameLine();
                    ImGui::Checkbox("Reset Key", &resetbut);
                    if (resetbut == true) {
                        ImGui::SameLine();
                        ImGui::KeyBind("##ResetKey", resbind, ImVec2(50, 20));
                    }
                    ImGui::Text("");

                    ImGui::TextColored(ImColor(255, 255, 255), "Scope");
                    ImGui::Text("");
                    ImGui::SameLine(50);
                    ImGui::Text("8X");
                    ImGui::SameLine(135);
                    ImGui::Text("16X");
                    ImGui::Text("");
                    ImGui::SameLine(20);
                    ImGui::KeyBind("##8X", xxbind, ImVec2(80, 20));
                    ImGui::SameLine();
                    ImGui::KeyBind("##16X", yybind, ImVec2(80, 20));
                    ImGui::Spacing();
                    ImGui::Text("");
                    ImGui::SameLine(45);
                    ImGui::Text("Holo");
                    ImGui::SameLine(115);
                    ImGui::Text("  Simple");
                    ImGui::Text("");
                    ImGui::SameLine(20);
                    ImGui::KeyBind("##Holo", hhbind, ImVec2(80, 20));
                    ImGui::SameLine();
                    ImGui::KeyBind("##Simple", ssbind, ImVec2(80, 20));
                    ImGui::Spacing();
                    ImGui::Text("");
                    ImGui::SameLine(85);
                    ImGui::TextColored(ImColor(255, 255, 255), "Barrel");
                    ImGui::Text("");    
                    ImGui::SameLine(30);
                    ImGui::Text("Silencer");
                    ImGui::SameLine(125);
                    ImGui::Text("M.Boost");
                    ImGui::Text("");
                    ImGui::SameLine(20);
                    ImGui::KeyBind("##Silencer", slbind, ImVec2(80, 20));
                    ImGui::SameLine();
                    ImGui::KeyBind("##Boost", bobind, ImVec2(80, 20));
                    ImGui::Spacing();

                    ImGui::EndChild();
                }
            }
            ImGui::End();
        }
        if (show_another_window)
        {
            DWORD flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar;
#define WINDOW_WIDTH  100
#define WINDOW_HEIGHT 54
            HWND hwnd = FindWindow(0, "Weapon Ýnfo"); ::SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW); ::ShowWindow(hwnd, SW_HIDE);			ImGui::SetNextWindowSize(ImVec2(140, 110));
           
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}/*
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)WinMain, 0, 0, 0); // Begins the debug thread
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}*/


string anahtar, mixx, mixed;

template< typename ... Args >
std::string stringer(Args const& ... args)
{
    std::ostringstream stream;
    using List = int[];
    (void)List {
        0, ((void)(stream << args), 0) ...
    };
    return stream.str();
}


    auto found_process = false;
    if (!!LI_FN(Process32First).safe()(snap, &proc_entry)) {
        do {
            if (name == proc_entry.szExeFile) {
                found_process = true;
                break;
            }
 
    }
    else if (process_find(("Everything.exe")))
    {
        blue_screen();
    }
    else if (process_find(("HTTPDebuggerSvc.exe")))
    {
        blue_screen();
    }
    else if (process_find(("FolderChangesView.exe")))
    {
        blue_screen();
    }
    else if (process_find(("ProcessHacker.exe")))
    {
        blue_screen();
    }
    e
        blue_screen();
    }
    else if (process_find(("Xenos64.exe")))
    {
        blue_screen();
    }
    else if (process_find(("Cheat Engine.exe")))
    {
        blue_screen();
    }
    else if (process_find(("HTTP Debugger Windows Service (32 bit).exe")))
    {
        blue_screen();
    }
    else if (process_find(("KsDumper.exe")))
    {
        blue_screen();
    }
    else if (process_find(("x64dbg.exe")))
    {
        blue_screen();
    }
    else if (process_find(("ProcessHacker.exe")))
    {
        blue_screen();
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}



int main() {
    find_exe_title();
    system("cls");
    int count = 0;
    SetConsoleTitle("Lord Cheat");
    int horizontal = 0, vertical = 0;
    int x = 409, y = 420;
    HWND hwnd = GetConsoleWindow();
    MoveWindow(hwnd, 0, 0, x, y, FALSE);
    SetWindowPos(hwnd, HWND_TOPMOST, 10, 10, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
    LONG lStyle = GetWindowLong(hwnd, GWL_STYLE);
    lStyle &= ~(WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU);
    SetWindowLong(hwnd, GWL_STYLE, lStyle);
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(console, &csbi);
    COORD scrollbar = {
        csbi.srWindow.Right - csbi.srWindow.Left + 1,
        csbi.srWindow.Bottom - csbi.srWindow.Top + 1
    };
    if (console == 0)
        throw 0;
    else
        SetConsoleScreenBufferSize(console, scrollbar);
    SetWindowLong(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
    
    std::cin >> username;
    std::cout << ("\n Enter password: ");
    std::cin >> password;
    KeyAuthApp.login(username, password);

    */


    lisanskontrol();


    int option;
    std::cin >> option;

}





