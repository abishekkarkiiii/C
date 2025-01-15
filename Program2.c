#include <stdio.h>
#include <windows.h> 


void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


void typeWriter(const char *text, int delay) {
    while (*text) {
        printf("%c", *text++);
        fflush(stdout);
        Sleep(delay);  
    }
}


void introduction() {
    printf("\n\n");
    
    setColor(2); 
    typeWriter(" Introduction\n", 50);
    Sleep(500);

    setColor(3); 
    typeWriter("Hello Everyone My Name is  ", 50);
    Sleep(500);
    setColor(4); 
    typeWriter("RAJ RAMTEL  ", 50); 
    setColor(6); 
    typeWriter("And I am from BCS(Bachelor In ", 50);
    setColor(4); 
    typeWriter(" ComputerScience ) ", 50);
    Sleep(500);

    setColor(5); 
    typeWriter("From OkhalDhunga", 50);

    setColor(7); 
}

int main() {
    introduction();
    return 0;
}

