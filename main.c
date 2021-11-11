#include "my_Shell.h"
#include "my_Shell.c"

int main()
{
    char inputString[MAXCOM], *parsedArgs[MAXLIST];
    char* parsedArgsPiped[MAXLIST];
    int execFlag = 0;
    init_shell();
  
    while (1) {
        
        printDir(); //prints current directory
        if (takeInput(inputString))
            continue;
        
        execFlag = processString(inputString, parsedArgs, parsedArgsPiped);
        
       
        if (execFlag == 1)
            execArgs(parsedArgs);
  
        if (execFlag == 2)
            execArgsPiped(parsedArgs, parsedArgsPiped);
    }
    return 0;
}
