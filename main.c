#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <gdiplus.h>
#include "header_files/elements.h"
#include "header_files/functions.h"
#include <string.h>

#define Main_Menu 1
#define Quiz_Menu 2
#define Help_Menu 3
#define ElementName 4
#define AtomicNumber 5
#define Search 6
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

//Declare Menus Function
void AddMenu(HWND);
HMENU hmenu;

//Declare Add_Control Functions
void AddControl(HWND);
HWND hName,hSymbol,hAtomicNumber,hAtomicWeight,hEC,hHistory,hMP,hBP,hIR,hIsotpes,hEN,hColor,hPosition,hConductivity,hLuster,hPhases,hDensity,hUses,hLogo,
hUserInputName,hUserInputSymbol,hUserInputNumber,hUserInputWeight;

struct element user_atom;

//Declare images
HBITMAP hImage;
void loadimages();
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Modern Perodic Table"),       /* Title Text */
           WS_OVERLAPPEDWINDOW | SBS_VERT | WS_VISIBLE, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           750,                 /* The programs width */
           500,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_COMMAND:
            switch(wParam){
                case Main_Menu:
                    MessageBeep(MB_ERR_INVALID_CHARS);
                    break;

                case Quiz_Menu:
                    MessageBoxEx(hwnd,"This is Quiz Menu",NULL,NULL,NULL);
                    break;

                case Help_Menu:
                    MessageBoxEx(hwnd,"This is Help Menu",NULL,NULL,NULL);
                    break;

                case Search:;

                    char user_name[20],user_symbol[4],user_atomic_number[4],user_atomic_weight[10],atomic_number[4],atomic_weight[10],melting_point[10],boiling_point[10],ionic_radius[10],isotopes[4],electronegativity[10],group[3],period[2],density[10];

                    //Values inputed from users
                    GetWindowText(hUserInputName,user_name,20);
                    GetWindowText(hUserInputSymbol,user_symbol,4);
                    GetWindowText(hUserInputNumber,user_atomic_number,4);
                    GetWindowText(hUserInputWeight,user_atomic_weight,10);

                    //Values are fetched from element searcher function
                    user_atom = element_searcher("","",3,0);

                    //Conversion of values
                    itoa(user_atom.atomic_number,atomic_number,10);
                    ftoa(user_atom.atomic_weight,atomic_weight,3);
                    ftoa(user_atom.melting_point,melting_point,3);
                    ftoa(user_atom.boiling_point,boiling_point,3);
                    ftoa(user_atom.ionic_radius,ionic_radius,3);
                    itoa(user_atom.isotopes,isotopes,10);
                    ftoa(user_atom.electronegativity,electronegativity,3);
                    itoa(user_atom.period,period,10);
                    itoa(user_atom.group,group,10);
                    ftoa(user_atom.density,density,3);
                    char position[70];
                    strcpy(position,"The element is present in period ");
                    strcat(position,period);
                    strcat(position," and group ");
                    strcat(position,group);

                    //Values are set
                    SetWindowText(hName,user_atom.name);
                    SetWindowText(hSymbol,user_atom.symbol);
                    SetWindowText(hAtomicNumber,atomic_number);
                    SetWindowText(hAtomicWeight,atomic_weight);
                    SetWindowText(hEC,user_atom.electronic_configuration);
                    SetWindowText(hHistory,user_atom.history);
                    SetWindowText(hMP,melting_point);
                    SetWindowText(hBP,boiling_point);
                    SetWindowText(hIR,ionic_radius);
                    SetWindowText(hIsotpes,isotopes);
                    SetWindowText(hEN,electronegativity);
                    SetWindowText(hPosition,position);
                    SetWindowText(hColor,user_atom.color);
                    SetWindowText(hConductivity,user_atom.conductivity);
                    SetWindowText(hLuster,user_atom.luster);
                    SetWindowText(hPhases,user_atom.phase);
                    SetWindowText(hDensity,density);
                    SetWindowText(hUses,user_atom.uses);
                    break;
            }

            break;

        case WM_CREATE:
            loadimages();
            AddMenu(hwnd);
            AddControl(hwnd);
            break;

        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;

        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

void AddMenu(HWND hwnd){
    hmenu = CreateMenu();

    AppendMenu(hmenu,MF_STRING,Main_Menu,"Main");
    AppendMenu(hmenu,MF_STRING,Quiz_Menu,"Quiz");
    AppendMenu(hmenu,MF_STRING,Help_Menu,"Help");

    SetMenu(hwnd,hmenu);
}

void AddControl(HWND hwnd){

    //All static elements are here
    CreateWindowEx(0,"Static","Element Name:-",WS_VISIBLE | WS_CHILD,200,50,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Element Symbol:-",WS_VISIBLE | WS_CHILD,200,75,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Atomic Number:-",WS_VISIBLE | WS_CHILD,200,100,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Atomic Weight:-",WS_VISIBLE | WS_CHILD,200,125,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Electronic Configuration:-",WS_VISIBLE | WS_CHILD,200,150,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","History:-",WS_VISIBLE | WS_CHILD,200,175,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Physical Properties",WS_VISIBLE | WS_CHILD,200,200,350,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Melting point:-",WS_VISIBLE | WS_CHILD,200,225,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Boiling Point:-",WS_VISIBLE | WS_CHILD,200,250,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Ionic Radius:-",WS_VISIBLE | WS_CHILD,200,275,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Isotopes:-",WS_VISIBLE | WS_CHILD,200,300,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Electronegativity:-",WS_VISIBLE | WS_CHILD,200,325,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Chemical Properties",WS_VISIBLE | WS_CHILD,200,350,350,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Color:-",WS_VISIBLE | WS_CHILD,200,375,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Position:-",WS_VISIBLE | WS_CHILD,200,400,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Conductivity:-",WS_VISIBLE | WS_CHILD,200,425,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Luster:-",WS_VISIBLE | WS_CHILD,200,450,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","State of matter:-",WS_VISIBLE | WS_CHILD,200,475,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Density:-",WS_VISIBLE | WS_CHILD,200,500,150,15,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Uses:-",WS_VISIBLE | WS_CHILD,200,525,150,15,hwnd,NULL,NULL,NULL);

    //All edit elements are here
    hName = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,360,50,270,15,hwnd,NULL,NULL,NULL);
    hSymbol = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,75,270,15,hwnd,NULL,NULL,NULL);
    hAtomicNumber = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,100,270,15,hwnd,NULL,NULL,NULL);
    hAtomicWeight = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,125,270,15,hwnd,NULL,NULL,NULL);
    hEC = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,150,270,15,hwnd,NULL,NULL,NULL);
    hHistory = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,175,270,15,hwnd,NULL,NULL,NULL);
    hMP = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,225,270,15,hwnd,NULL,NULL,NULL);
    hBP = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,250,270,15,hwnd,NULL,NULL,NULL);
    hIR = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,275,270,15,hwnd,NULL,NULL,NULL);
    hIsotpes = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,300,270,15,hwnd,NULL,NULL,NULL);
    hEN = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,325,270,15,hwnd,NULL,NULL,NULL);
    hColor = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,375,270,15,hwnd,NULL,NULL,NULL);
    hPosition = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,400,270,15,hwnd,NULL,NULL,NULL);
    hConductivity = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,425,270,15,hwnd,NULL,NULL,NULL);
    hLuster = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,450,270,15,hwnd,NULL,NULL,NULL);
    hPhases = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,475,270,15,hwnd,NULL,NULL,NULL);
    hDensity = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,500,270,15,hwnd,NULL,NULL,NULL);
    hUses = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,525,270,15,hwnd,NULL,NULL,NULL);

    //User inputs are defined here
    hUserInputName = CreateWindowEx(0,"ComboBox","Element Name",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,10,10,100,18,hwnd,(HMENU)ElementName,NULL,NULL);
    CreateWindowEx(0,"Edit","Element Symbol",WS_VISIBLE | WS_CHILD,120,10,100,18,hwnd,NULL,NULL,NULL);
    hUserInputNumber = CreateWindowEx(0,"ComboBox","Atomic Number",WS_VISIBLE | WS_CHILD,230,10,100,18,hwnd,(HMENU)AtomicNumber,NULL,NULL);
    for(int i = 0;i<118;i++){
        SendMessage(hUserInputName,(UINT) CB_ADDSTRING,(WPARAM)0,(LPARAM)user_atom.name);
    }
    SendMessage(hUserInputName, CB_SETCURSEL, (WPARAM)2, (LPARAM)0);
    CreateWindowEx(0,"Edit","Atomic Weight",WS_VISIBLE | WS_CHILD,340,10,100,18,hwnd,NULL,NULL,NULL);

    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,450,10,100,25,hwnd,(HMENU)Search,NULL,NULL);

    hLogo = CreateWindowEx(0,"Static","",WS_VISIBLE | WS_CHILD | SS_BITMAP,15,60,150,15,hwnd,NULL,NULL,NULL);
    SendMessageA(hLogo,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hImage);
}

void loadimages(){
    hImage = (HBITMAP)LoadImageA(NULL,"image.bmp",IMAGE_BITMAP,150,150,LR_LOADFROMFILE);
}
