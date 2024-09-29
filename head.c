#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int lines;
  char *arg;
  
  lines = 5;
  
  if (argc > 2) {
    arg = argv[2];
    if (*arg == '-'){
      if (strcmp(arg + 1, "n") == 0) { // Number of lines from the beginning of a file to read
        lines = atoi(argv[3]);
      }
      else {  // Default, error
        printf(2, "Usage: head filename [-n lines]\n  Unknown parameter: %s\n", argv[2]);
        exit();
      }
    } else {
      printf(2, "Usage: head filename [-n lines]\n  Unknown parameter: %s\n", argv[2]);
      exit();
    }
  } else if (argc != 2){
    printf(1, "Usage: head filename [-n lines]\n");
    exit();
  }
  
  if (lines > 0){  
    if (head(argv[1], lines)){
      printf(2, "Head failed!\n");
    }
  }
  
	exit();
}