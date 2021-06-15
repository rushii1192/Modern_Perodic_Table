#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <wingdi.h>
#include <gdiplus.h>
#include "header_files/elements.h"
#include "header_files/functions.h"
#include <string.h>
#include <stdlib.h>
#include "header_files/quiz.h"

#define Main_Menu 101
#define Quiz_Menu 102
#define Molecule_Menu 103
#define Help_Menu 104
#define ElementName 105
#define AtomicNumber 106
#define ElementSearch 107
#define About_Menu 108
#define MoleculeSearch 109
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

//Declare Menus Function
void AddMenu(HWND);
HMENU hmenu;

//Declare Add_Control Functions
void AddMainMenuControl(HWND);
void AddQuizMenuControl(HWND);
void AddMoleculeMenuControl(HWND);
void AddAboutMenuControl(HWND);
void ClearWindow(HWND);
HWND hName,hSymbol,hAtomicNumber,hAtomicWeight,hEC,hHistory,hMP,hBP,hIR,hIsotpes,hEN,hColor,hPosition,hConductivity,hLuster,hPhases,hDensity,hUses,hLogo,
hUserInputName,hUserInputSymbol,hUserInputNumber,hUserInputWeight,hQuiz,hMainWindow,hQuizWindow,hAboutWindow,hMoleculeWindow,hMoleculeName,hMoleculeReprsentation,hMoleculePrep,hMoleculeUses,hUserMoleculeName;

HWND main_classWindow(HWND window){
    return window;
}

//Declare images
HBITMAP hImage;
void loadimages();

struct element user_atom;
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
    wincl.hbrBackground = NULL;

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
           950,                 /* The programs width */
           900,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    hMainWindow = main_classWindow(hwnd);
    hQuizWindow = main_classWindow(hwnd);
    hMoleculeWindow = main_classWindow(hwnd);
    hAboutWindow = main_classWindow(hwnd);

    // hMainWindow = CreateWindowEx(0,szClassName,"",WS_CHILD | WS_VISIBLE,0,0,750,500,hwnd,NULL,NULL,NULL);
    // hAboutWindow = CreateWindowEx(0,szClassName,"",WS_CHILD | WS_VISIBLE,0,0,750,500,hwnd,NULL,NULL,NULL);
    // hQuizWindow = CreateWindowEx(0,szClassName,"",WS_CHILD | WS_VISIBLE,0,0,750,500,hwnd,NULL,NULL,NULL);
    // hMoleculeWindow = CreateWindowEx(0,szClassName,"",WS_CHILD | WS_VISIBLE,0,0,750,500,hwnd,NULL,NULL,NULL);
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
    HDC hdc;
    TEXTMETRIC tm;
    SCROLLINFO si;
    RECT rect;
    // These variables are required to display text.
    static int xClient;     // width of client area
    static int yClient;     // height of client area
    static int yChar; // vertical scrolling unit
    static int yPos;  // current vertical scrolling position
    
    switch (message)                  /* handle the messages */
    {
        case WM_CREATE:

            loadimages();
            AddMenu(hwnd);
            AddMainMenuControl(hwnd);
            // // Get the handle to the client area's device context.
            // hdc = GetDC(hQuizWindow);

            // // Extract font dimensions from the text metrics.
            // GetTextMetrics(hdc, &tm);
            // yChar = tm.tmHeight + tm.tmExternalLeading;

            // // Free the device context.
            // ReleaseDC(hQuizWindow, hdc);

            break;

        case WM_COMMAND:
        {
            switch(wParam){
                case Main_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddMainMenuControl(hwnd);
                    
                    break;

                case Quiz_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddQuizMenuControl(hwnd);
                    
                    break;

                case Help_Menu:
                    MessageBoxEx(hMainWindow,"This is the Help","Help",(UINT)MB_OK,(WORD)0);
                    break;

                case Molecule_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddMoleculeMenuControl(hwnd);
                    break;

                case About_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddAboutMenuControl(hwnd);
                    
                    break;

                case ElementSearch:;
                    char user_name[20],user_symbol[4],user_atomic_number[4],user_atomic_weight[10],atomic_number[4],atomic_weight[10],melting_point[10],boiling_point[10],ionic_radius[10],isotopes[4],electronegativity[10],group[3],period[2],density[10];
                    //Values inputed from users
                    GetWindowText(hUserInputName,user_name,20);
                    GetWindowText(hUserInputSymbol,user_symbol,4);
                    GetWindowText(hUserInputNumber,user_atomic_number,4);
                    GetWindowText(hUserInputWeight,user_atomic_weight,10);

                    //Values are fetched from element searcher function
                    user_atom = element_searcher(user_name,user_symbol,atoi(user_atomic_number),atof(user_atomic_weight));
                    // user_atom = element_searcher("HELIUM","",0,0);

                    //Conversion of values
                    itoa(user_atom.atomic_number,atomic_number,10);
                    ftoa(user_atom.atomic_weight,atomic_weight,5);
                    ftoa(user_atom.melting_point,melting_point,5);
                    ftoa(user_atom.boiling_point,boiling_point,5);
                    ftoa(user_atom.ionic_radius,ionic_radius,5);
                    itoa(user_atom.isotopes,isotopes,10);
                    ftoa(user_atom.electronegativity,electronegativity,5);
                    itoa(user_atom.period,period,10);
                    itoa(user_atom.group,group,10);
                    ftoa(user_atom.density,density,5);
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
        }
        
        // case WM_PAINT:
        // {
        //     PAINTSTRUCT ps;
        //     HDC hdc = BeginPaint(hwnd, &ps);

        //     // All painting occurs here, between BeginPaint and EndPaint.

        //     FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));

        //     EndPaint(hwnd, &ps);
        // }
        //     break;

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
    AppendMenu(hmenu,MF_STRING,Molecule_Menu,"Molecule");
    AppendMenu(hmenu,MF_STRING,Help_Menu,"Help");
    AppendMenu(hmenu,MF_STRING,About_Menu,"About Us");

    SetMenu(hwnd,hmenu);
}


void AddMainMenuControl(HWND hwnd){
    HWND hSName;
    // hMainWindow = CreateWindowEx(0,"","",WS_CHILD | WS_VISIBLE | WS_BORDER | WM_VSCROLL,0,0,750,500,hwnd,NULL,NULL,NULL);
    hSName = CreateWindowEx(0,"Static",_T("Element Name:-"),WS_VISIBLE | WS_CHILD,200,50,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Element Symbol:-",WS_VISIBLE | WS_CHILD,200,75,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Atomic Number:-",WS_VISIBLE | WS_CHILD,200,100,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Atomic Weight:-",WS_VISIBLE | WS_CHILD,200,125,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Electronic Configuration:-",WS_VISIBLE | WS_CHILD,200,150,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","History:-",WS_VISIBLE | WS_CHILD,200,215,150,20,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Physical Properties",WS_VISIBLE | WS_CHILD,200,290,350,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Melting point:-",WS_VISIBLE | WS_CHILD,200,310,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Boiling Point:-",WS_VISIBLE | WS_CHILD,200,345,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Ionic Radius:-",WS_VISIBLE | WS_CHILD,200,380,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Isotopes:-",WS_VISIBLE | WS_CHILD,200,415,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Electronegativity:-",WS_VISIBLE | WS_CHILD,200,450,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Chemical Properties",WS_VISIBLE | WS_CHILD,200,475,350,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Color:-",WS_VISIBLE | WS_CHILD,200,500,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Position:-",WS_VISIBLE | WS_CHILD,200,525,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Conductivity:-",WS_VISIBLE | WS_CHILD,200,550,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Luster:-",WS_VISIBLE | WS_CHILD,200,575,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","State of matter:-",WS_VISIBLE | WS_CHILD,200,600,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Density:-",WS_VISIBLE | WS_CHILD,200,625,150,15,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Uses:-",WS_VISIBLE | WS_CHILD,200,650,150,15,hMainWindow,NULL,NULL,NULL);

    //All edit elements are here
    hName = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,360,50,270,15,hMainWindow,NULL,NULL,NULL);
    hSymbol = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,75,270,15,hMainWindow,NULL,NULL,NULL);
    hAtomicNumber = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,100,270,15,hMainWindow,NULL,NULL,NULL);
    hAtomicWeight = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,125,270,15,hMainWindow,NULL,NULL,NULL);
    hEC = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_HSCROLL,360,150,270,15,hMainWindow,NULL,NULL,NULL);
    hHistory = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL,360,175,270,100,hMainWindow,NULL,NULL,NULL);
    hMP = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,310,270,15,hMainWindow,NULL,NULL,NULL);
    hBP = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,345,270,15,hMainWindow,NULL,NULL,NULL);
    hIR = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,380,270,15,hMainWindow,NULL,NULL,NULL);
    hIsotpes = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,415,270,15,hMainWindow,NULL,NULL,NULL);
    hEN = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,450,270,15,hMainWindow,NULL,NULL,NULL);
    hColor = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,500,270,15,hMainWindow,NULL,NULL,NULL);
    hPosition = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,525,270,30,hMainWindow,NULL,NULL,NULL);
    hConductivity = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,550,270,15,hMainWindow,NULL,NULL,NULL);
    hLuster = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,575,270,15,hMainWindow,NULL,NULL,NULL);
    hPhases = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,600,270,15,hMainWindow,NULL,NULL,NULL);
    hDensity = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,625,270,15,hMainWindow,NULL,NULL,NULL);
    hUses = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL,360,650,270,90,hMainWindow,NULL,NULL,NULL);

    //User inputs are defined here
    hUserInputName = CreateWindowEx(0,"Combobox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,10,10,100,18,hMainWindow,NULL,NULL,NULL);
    for(int i=1;i<119;i++){
        struct element user_input_name = element_searcher("","",i,0);
        SendMessage(hUserInputName,(UINT)CB_ADDSTRING,(WPARAM)0,(LPARAM)user_input_name.name);
        if(i==118)
            SendMessage(hUserInputName, CB_SETCURSEL, (WPARAM)2, (LPARAM)0);
    }
    hUserInputSymbol = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,120,10,100,18,hMainWindow,NULL,NULL,NULL);
    hUserInputNumber = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,230,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,340,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,450,10,100,25,hMainWindow,(HMENU)ElementSearch,NULL,NULL);

    hLogo = CreateWindowEx(0,"Static","",WS_VISIBLE | WS_CHILD | SS_BITMAP,15,60,150,15,hMainWindow,NULL,NULL,NULL);
    SendMessageA(hLogo,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hImage);
}

void loadimages(){
    hImage = (HBITMAP)LoadImageA(NULL,"image.bmp",IMAGE_BITMAP,150,150,LR_LOADFROMFILE);
}

void AddMoleculeMenuControl(HWND hwnd){
    hUserMoleculeName = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,120,10,100,18,hMoleculeWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,450,10,100,25,hMainWindow,(HMENU)MoleculeSearch,NULL,NULL);

    CreateWindowEx(0,"Static","Name",WS_CHILD | WS_VISIBLE,200,50,150,15,hMoleculeWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Representation",WS_CHILD | WS_VISIBLE,200,75,150,15,hMoleculeWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Preparation",WS_CHILD | WS_VISIBLE,200,140,150,15,hMoleculeWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Uses",WS_CHILD | WS_VISIBLE,200,240,150,15,hMoleculeWindow,NULL,NULL,NULL);

    hMoleculeName = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,360,50,270,15,hMoleculeWindow,NULL,NULL,NULL);
    hMoleculeReprsentation = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,75,270,15,hMoleculeWindow,NULL,NULL,NULL);
    hMoleculePrep = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL,360,100,270,100,hMoleculeWindow,NULL,NULL,NULL);
    hMoleculeUses = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL,360,210,270,100,hMoleculeWindow,NULL,NULL,NULL);
}

void AddQuizMenuControl(HWND hwnd){
    // struct quiz *quiz_data = question_search();
    // struct element *all_elements = elements_data();

    int k,j,temp = 30;
    for(k=0;k<5;k++){
        struct quiz quiz_data = question_search(k);
        CreateWindowEx(0,"Static",quiz_data.questions,WS_CHILD | WS_VISIBLE,50,temp,250,20,hQuizWindow,NULL,NULL,NULL);
        for(j=0;j<4;j++){
            struct quiz mcq_data = question_search(j+k);
            temp = temp + 30;
            CreateWindowEx(0,"Button",mcq_data.correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,(HMENU)k,NULL,NULL);
        }
        temp = temp + 30;
        CreateWindowEx(0,"Button",quiz_data.correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,(HMENU)k,NULL,NULL);
    }
    temp = temp + 30;
    CreateWindowEx(0,"Button","Submit",WS_VISIBLE | WS_CHILD,150,temp,50,30,hQuizWindow,NULL,NULL,NULL);
}
void AddAboutMenuControl(HWND hwnd){
    CreateWindowEx(0,"Edit","A very warm welcome in our app to all our user. We the students of St Francis institute of technology made this app. We five students Rushikesh Borakhede, Krutika Chaudhari, Rishma Kurumboor, Lincia D'Souza, Prathamesh Parab and our mentor, Valentina Basker. We being students always wanted to make something about students, coming to chemistry many students faced problems in memorizing periodic table and knowing the periodic table. We Students of SFIT had a Pryas compition for which we made this APP using C programming.We got the motivation for creating a APP, because in our engineering first year we have a C programming subject which deals with making the same APP. We faced many difficulties during the coding of our APP, it took us 15-20days for creating this app. We hope users find it effective for studying. Thank you",WS_CHILD | WS_VISIBLE | ES_MULTILINE | WS_VSCROLL,50,50,600,400,hAboutWindow,NULL,NULL,NULL);
}

