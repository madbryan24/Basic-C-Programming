#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("========= Emacs Commands Tutor =========\n");
printf("========== Author: Ha Le Thinh  =================\n\n");
printf("Emacs Commands\n");
printf("Emacs uses Control and Escape (or Alt) characters to distinguish editor commands from text to be inserted in the buffer.\n");
printf("Control-x means to hold down the control key, and type the letter x. (You don't need to capitalize the x, or any other control character) \n");
printf("[ESCAPE] x means to press the escape key down, release it, and then type x.\n");
printf("Abreviation: C-x for Ctrl-X and M-x means Meta-x \n\n");
printf("Emacs commands for a file \n");
printf("Find and open a file \n");
printf("-C-x C-f file_name \n");
printf("You can use TAB key to view the list of file in current directory\n");
printf("When you tape a character, all files whose name start with this character will be displayed.\n");
printf("Save a file as you are working on it, type:\n");
printf("-C-x C-s\n");
printf("Save as a new file:\n");
printf("-C-x C-w \n");
printf("Exit emacs:C-x C-c\n");
return 0;
}
