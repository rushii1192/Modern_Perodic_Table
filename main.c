#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <wingdi.h>
#include <windowsx.h>
#include <gdiplus.h>
#include "header_files/elements.h"
#include "header_files/functions.h"
#include <string.h>
#include <stdlib.h>
#include "header_files/quiz.h"
#include "header_files/molecules.h"
#include <CommCtrl.h>

#define Main_Menu 301
#define Quiz_Menu 302
#define Molecule_Menu 303
#define Help_Menu 304
#define ElementName 305
#define AtomicNumber 306
#define ElementSearch 307
#define About_Menu 308
#define MoleculeSearch 309
#define QuizSubmit 310
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
HWND hanswer[5],hquestion[5];
//Declare images
HBITMAP hImage;
void loadimages();
int answer_checker(char question[100],char answer[50]);
struct element user_atom;
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");
// void MakeAutocompleteCombo(HWND hComboBox)
// {
//     // SubClass the combo's Edit control
//     HWND hEdit = IsExtended(hComboBox) ?
//         ComboBoxEx_GetEditControl(hComboBox) :
//             FindWindowEx(hComboBox, NULL, WC_EDIT, NULL);

//     SetProp(hEdit, TEXT("Wprc"), (HANDLE)GetWindowLongPtr(hEdit, GWLP_WNDPROC));
//     SubclassWindow(hEdit, ComboBox_Proc);

//     // Set the text limit to standard size
//     ComboBox_LimitText(hComboBox, DEFAULT_TXT_LIM);
// } 
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
    // static HBRUSH hBrush = CreateSolidBrush(RGB(230,230,230));
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
                    InvalidateRect(hMoleculeWindow,NULL,1);
                    hMoleculeWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddMainMenuControl(hwnd);
                    
                    break;

                case Quiz_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddQuizMenuControl(hwnd);
                    
                    break;

                case Help_Menu:
                    MessageBoxEx(hMainWindow,"Help","Help",(UINT)MB_OK,(WORD)0);
                    break;

                case Molecule_Menu:
                    InvalidateRect(hMainWindow,NULL,1);
                    hMainWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddMoleculeMenuControl(hwnd);
                    break;

                case About_Menu:
                    CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,950,900,hwnd,NULL,NULL,NULL);
                    AddAboutMenuControl(hwnd);
                    
                    break;
                case MoleculeSearch:;
                    char user_input_name[50];
                    GetWindowText(hUserMoleculeName,user_input_name,50);
                    struct compound molecule_output = molecules_data(user_input_name);
                    SetWindowText(hMoleculeName,molecule_output.name);
                    SetWindowText(hMoleculePrep,molecule_output.preparation);
                    SetWindowText(hMoleculeReprsentation,molecule_output.representation);
                    SetWindowText(hMoleculeUses,molecule_output.uses);
                    break;

                case QuizSubmit:;
                    char question[100],answer[50];
                    for(int i=0;i<=5;i++){
                        GetWindowText(hquestion[i],question,100);
                        // GetWindowText(hquestion[i],answer,50);
                        GetDlgItemText(hanswer[i],i,answer,50);
                        // if(Button_GetState(hanswer[i])==BST_CHECKED)
                        MessageBoxExA(hQuizWindow,answer,"Data",(UINT)MB_OK,(WORD)0);
                    }
                    break;
                case ElementSearch:;
                    char user_name[20],user_symbol[4],user_atomic_number[4],user_atomic_weight[10],atomic_number[4],atomic_weight[10],melting_point[10],boiling_point[10],ionic_radius[10],isotopes[4],electronegativity[10],group[3],period[2],density[10];
                    //Values inputed from users
                    // GetDlgItem(hUserInputName,0);
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
        case WM_CTLCOLORSTATIC:
        {
            HDC hdcStatic = (HDC) wParam;
            SetTextColor(hdcStatic, RGB(0,0,0));
            SetBkColor(hdcStatic, RGB(135,205,235));
            return (INT_PTR)CreateSolidBrush(RGB(135,205,235));
                // color_changer(hMainWindow,0,0,0);
        }
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
    hMainWindow = main_classWindow(hwnd);
    // SetBkColor(GetDC(hMainWindow),RGB(255,0,0));
    // SetWindowSubclass(hMainWindow,(SUBCLASSPROC)&WindowProcedure,1,0);
    // hMainWindow = CreateWindowEx(0,"","",WS_CHILD | WS_VISIBLE | WS_BORDER | WM_VSCROLL,0,0,750,500,hwnd,NULL,NULL,NULL);
    hSName = CreateWindowEx(0,"Static",_T("Element Name:-"),WS_VISIBLE | WS_CHILD,200,50,150,15,hMainWindow,NULL,NULL,NULL);
    
    // HBRUSH brush = CreateSolidBrush(RGB(0, 0, 255));
    // SetClassLongPtr(hMainWindow, GCLP_HBRBACKGROUND, (LONG_PTR)brush);
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
    hUserInputName = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD  | WS_OVERLAPPED,10,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Name",WS_VISIBLE|WS_CHILD,10,25,100,15,hMainWindow,NULL,NULL,NULL);
    hUserInputSymbol = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_OVERLAPPED,120,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Symbol",WS_VISIBLE|WS_CHILD,120,25,100,15,hMainWindow,NULL,NULL,NULL);
    hUserInputNumber = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD | WS_OVERLAPPED,230,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Atomic Number",WS_VISIBLE|WS_CHILD,230,25,100,15,hMainWindow,NULL,NULL,NULL);
    // CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,340,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,450,10,100,25,hMainWindow,(HMENU)ElementSearch,NULL,NULL);
    // System.Drawing.Image image(L"Grapes.jpg");
    // graphics.DrawImage(&image, 60, 10);
    // HBITMAP hImage = (HBITMAP)LoadImage(NULL, (LPCWSTR)"E:\\Projects\\Modern_Perdoic_Table\\download.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_DEFAULTSIZE);
    // if(hImage==NULL)
    //     MessageBoxEx(hMainWindow,"image is null","Image",(UINT)MB_OK,(WORD)0);
    // hLogo = CreateWindowEx(0,"Static","",WS_VISIBLE | WS_CHILD | SS_BITMAP,15,60,150,15,hMainWindow,(HMENU)100000,NULL,NULL);
    // SendMessageA(hLogo,STM_SETIMAGE,(WPARAM)IMAGE_BITMAP,(LPARAM)hImage);
    
}

void loadimages(){
    
}

void AddMoleculeMenuControl(HWND hwnd){
    hMoleculeWindow = main_classWindow(hwnd);
    
    hUserMoleculeName = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | WS_OVERLAPPED,115,10,200,18,hMoleculeWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,425,10,100,25,hMoleculeWindow,(HMENU)MoleculeSearch,NULL,NULL);

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
    hQuizWindow = main_classWindow(hwnd);
    // struct quiz *quiz_data = question_search();
    // struct element *all_elements = elements_data();

    int k,j,temp = 30;
    char McqAtomicWeight[5],McqAtomicNumber[5];
    
    for(k=0;k<5;k++){
        struct quiz quiz_data = question_search(k);
        
        hquestion[k] = CreateWindowEx(0,"Static",quiz_data.questions,WS_CHILD | WS_VISIBLE,50,temp,250,20,hQuizWindow,NULL,NULL,NULL);
        
        for(j=0;j<3;j++){
            struct quiz quiz_data1 = question_search(k+j);
            struct element mcq = element_searcher("","",j+k,0);
            temp = temp + 30;
            if(strstr(quiz_data.questions,"Symbol")!=NULL)
                hanswer[k] = CreateWindowEx(0,"Button",mcq.symbol,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,NULL,NULL,NULL);
            if(strstr(quiz_data.questions,"number")!=NULL){
                // ftoa(mcq.atomic_number,McqAtomicNumber,5);
                hanswer[k] = CreateWindowEx(0,"Button",quiz_data1.correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,NULL,NULL,NULL);
            }
            if(strstr(quiz_data.questions,"mass")!=NULL){
                ftoa(mcq.atomic_weight,McqAtomicWeight,5);
                hanswer[k] = CreateWindowEx(0,"Button",quiz_data1.correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,NULL,NULL,NULL);
            }
            if(strstr(quiz_data.questions,"Element")!=NULL)
                hanswer[k] = CreateWindowEx(0,"Button",mcq.name,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,NULL,NULL,NULL);

        }
        temp = temp + 30;
        hanswer[k] = CreateWindowEx(0,"Button",quiz_data.correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,NULL,NULL,NULL);
        temp = temp + 30;
    }
    temp = temp + 30;
    CreateWindowEx(0,"Button","Submit",WS_VISIBLE | WS_CHILD,450,700,50,30,hQuizWindow,(HMENU)QuizSubmit,NULL,NULL);
}
int answer_checker(char question[100],char answer[50]){
    int value=0;
    for(int k =0;k<225;k++){
        struct quiz quiz_data = question_search(k);
        if(strcmp(question,quiz_data.questions)==0 && strcmp(answer,quiz_data.correct_answer)==0)
            value = 1;
    }
    if(value==1)
        return 1;
    else
        return 0;
}

void AddAboutMenuControl(HWND hwnd){
    hAboutWindow = main_classWindow(hwnd);
    CreateWindowEx(0,"Edit","A very warm welcome in our app to all our user. We the students of St Francis institute of technology made this app. We five students Rushikesh Borakhede, Krutika Chaudhari, Rishma Kurumboor, Lincia D'Souza, Prathamesh Parab and our mentor, Valentina Basker. We being students always wanted to make something about students, coming to chemistry many students faced problems in memorizing periodic table and knowing the periodic table. We Students of SFIT had a Pryas compition for which we made this APP using C programming.We got the motivation for creating a APP, because in our engineering first year we have a C programming subject which deals with making the same APP. We faced many difficulties during the coding of our APP, it took us 15-20days for creating this app. We hope users find it effective for studying. Thank you",WS_CHILD | WS_VISIBLE | ES_MULTILINE | WS_VSCROLL,50,50,600,400,hAboutWindow,NULL,NULL,NULL);
}

