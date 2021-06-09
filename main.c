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
#include <stdlib.h>
#include "header_files/quiz.h"

#define Main_Menu 1
#define Quiz_Menu 2
#define Help_Menu 3
#define ElementName 4
#define AtomicNumber 5
#define Search 6
#define About_Menu 7
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

//Declare Menus Function
void AddMenu(HWND);
HMENU hmenu;

//Declare Add_Control Functions
void AddMainMenuControl(HWND);
void AddQuizMenuControl(HWND);
void AddHelpMenuControl(HWND);
void AddAboutMenuControl(HWND);
void ClearWindow(HWND);
HWND hName,hSymbol,hAtomicNumber,hAtomicWeight,hEC,hHistory,hMP,hBP,hIR,hIsotpes,hEN,hColor,hPosition,hConductivity,hLuster,hPhases,hDensity,hUses,hLogo,
hUserInputName,hUserInputSymbol,hUserInputNumber,hUserInputWeight,hQuiz,hMainWindow,hQuizWindow,hAboutWindow,hHelpWindow;



//Declare images
HBITMAP hImage;
void loadimages();

struct element element_searcher(char element_name[20],char element_symbol[4],int atomic_number,float atomic_weight);
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
                    AddMainMenuControl(hwnd);
                    break;

                case Quiz_Menu:
                    AddQuizMenuControl(hwnd);
                    CloseWindow(hMainWindow);
                    break;

                case Help_Menu:
                    AddHelpMenuControl(hwnd);
                    CloseWindow(hQuizWindow);
                    CloseWindow(hMainWindow);
                    break;

                case About_Menu:
                    AddAboutMenuControl(hwnd);
                    CloseWindow(hHelpWindow);
                    CloseWindow(hMainWindow);
                    break;

                case Search:;

                    char user_name[20],user_symbol[4],user_atomic_number[4],user_atomic_weight[10],atomic_number[4],atomic_weight[10],melting_point[10],boiling_point[10],ionic_radius[10],isotopes[4],electronegativity[10],group[3],period[2],density[10];
                    //Values inputed from users
                    GetWindowText(hUserInputName,user_name,20);
                    GetWindowText(hUserInputSymbol,user_symbol,4);
                    GetWindowText(hUserInputNumber,user_atomic_number,4);
                    GetWindowText(hUserInputWeight,user_atomic_weight,10);

                    //Values are fetched from element searcher function
                    user_atom = element_searcher(user_name,user_symbol,atoi(user_atomic_number),atof(user_atomic_weight));

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

        case WM_CREATE:
            loadimages();
            AddMenu(hwnd);
            AddMainMenuControl(hwnd);
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
    AppendMenu(hmenu,MF_STRING,About_Menu,"About Us");

    SetMenu(hwnd,hmenu);
}

void AddMainMenuControl(HWND hwnd){
    hMainWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE | WS_BORDER,0,0,750,500,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static",_T("Element Name:-"),WS_VISIBLE | WS_CHILD,200,50,150,15,hMainWindow,NULL,NULL,NULL);
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
    hUses = CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,360,650,270,90,hMainWindow,NULL,NULL,NULL);

    //User inputs are defined here
    hUserInputName = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,10,10,100,18,hMainWindow,NULL,NULL,NULL);
    hUserInputSymbol = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,120,10,100,18,hMainWindow,NULL,NULL,NULL);
    hUserInputNumber = CreateWindowEx(0,"ComboBox","",WS_VISIBLE | WS_CHILD | CBS_DROPDOWN | CBS_HASSTRINGS | WS_OVERLAPPED,230,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Edit","",WS_VISIBLE | WS_CHILD,340,10,100,18,hMainWindow,NULL,NULL,NULL);
    CreateWindowEx(0,"Button","Search",WS_VISIBLE | WS_CHILD,450,10,100,25,hMainWindow,(HMENU)Search,NULL,NULL);

    hLogo = CreateWindowEx(0,"Static","",WS_VISIBLE | WS_CHILD | SS_BITMAP,15,60,150,15,hMainWindow,NULL,NULL,NULL);
    SendMessageA(hLogo,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hImage);
}

void loadimages(){
    hImage = LoadImageA(NULL,"image.bmp",IMAGE_BITMAP,150,150,LR_LOADFROMFILE);
}

void AddHelpMenuControl(HWND hwnd){
    hHelpWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE,0,0,750,500,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Static","Help related to program",WS_CHILD | WS_VISIBLE,50,50,650,400,hHelpWindow,NULL,NULL,NULL);
}

void AddQuizMenuControl(HWND hwnd){
    struct quiz *quiz_data = question_search();
    struct element *all_elements = elements_data();
    hQuizWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE | WS_VSCROLL | BS_GROUPBOX,0,0,750,450,hwnd,NULL,NULL,NULL);
    int k,j,temp = 50;
    for(k=0;k<15;k++){
        CreateWindowEx(0,"Static",quiz_data[k].questions,WS_CHILD | WS_VISIBLE,50,temp,250,20,hQuizWindow,NULL,NULL,NULL);
        for(j=0;j<4;j++){
            temp = temp + 30;
            CreateWindowEx(0,"Button",all_elements[k].name,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,(HMENU)k,NULL,NULL);
        }
        temp = temp + 30;
        CreateWindowEx(0,"Button",quiz_data[k].correct_answer,WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON,100,temp,56,20,hQuizWindow,(HMENU)k,NULL,NULL);
    }
    temp = temp + 30;
}

void AddAboutMenuControl(HWND hwnd){
    hAboutWindow = CreateWindowEx(0,"Static","",WS_CHILD | WS_VISIBLE ,0,0,750,500,hwnd,NULL,NULL,NULL);
    CreateWindowEx(0,"Edit","Elephants are the largest existing land animals. Three species are currently recognised: the African bush elephant, the African forest elephant, and the Asian elephant. Elephantidae is the only surviving family of the order Proboscidea; extinct members include the mastodons. The family Elephantidae also contains several extinct groups, including the mammoths and straight-tusked elephants. African elephants have larger ears and concave backs, whereas Asian elephants have smaller ears, and convex or level backs. Distinctive features of all elephants include a long proboscis called a trunk, tusks, large ear flaps, massive legs, and tough but sensitive skin. The trunk is used for breathing, bringing food and water to the mouth, and grasping objects. Tusks, which are derived from the incisor teeth, serve both as weapons and as tools for moving objects and digging. The large ear flaps assist in maintaining a constant body temperature as well as in communication. The pillar-like legs carry their great weight.Elephants are scattered throughout sub-Saharan Africa, South Asia, and Southeast Asia and are found in different habitats, including savannahs, forests, deserts, and marshes. They are herbivorous, and they stay near water when it is accessible. They are considered to be keystone species, due to their impact on their environments. Elephants have a fission–fusion society, in which multiple family groups come together to socialise. Females (cows) tend to live in family groups, which can consist of one female with her calves or several related females with offspring. The groups, which do not include bulls, are usually led by the oldest cow, known as the matriarch.Males (bulls) leave their family groups when they reach puberty and may live alone or with other males. Adult bulls mostly interact with family groups when looking for a mate. They enter a state of increased testosterone and aggression known as musth, which helps them gain dominance over other males as well as reproductive success. Calves are the centre of attention in their family groups and rely on their mothers for as long as three years. Elephants can live up to 70 years in the wild. They communicate by touch, sight, smell, and sound; elephants use infrasound, and seismic communication over long distances. Elephant intelligence has been compared with that of primates and cetaceans. They appear to have self-awareness, and appear to show empathy for dying and dead family members.African bush elephants and Asian elephants are listed as endangered and African forest elephants as critically endangered by the International Union for Conservation of Nature (IUCN). One of the biggest threats to elephant populations is the ivory trade, as the animals are poached for their ivory tusks. Other threats to wild elephants include habitat destruction and conflicts with local people. Elephants are used as working animals in Asia. In the past, they were used in war; today, they are often controversially put on display in zoos, or exploited for entertainment in circuses. Elephants are highly recognisable and have been featured in art, folklore, religion, literature, and popular culture.",WS_CHILD | WS_VISIBLE | ES_MULTILINE | WS_VSCROLL,50,50,600,400,hAboutWindow,NULL,NULL,NULL);
}

struct element element_searcher(char element_name[20],char element_symbol[4],int atomic_number,float atomic_weight){
    struct element *all_elements = elements_data();
    for(int i=0;i<118;i++){
        if(strcmp(all_elements[i].name,element_name)==0){
            return all_elements[i];
        }
        if(strcmp(all_elements[i].symbol,element_symbol)==0){
            return all_elements[i];
        }
        if(all_elements[i].atomic_number==atomic_number){
            return all_elements[i];
        }
        if(all_elements[i].atomic_weight==atomic_weight){
            return all_elements[i];
        }
    }
}