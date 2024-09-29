#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2){
    printf(1, "Usage: write_file filename\n");
    exit();
  }
  
  if (write_file(argv[1])) {
    printf(2, "Write failed!\n");
    unlink(argv[1]);
  }
  
	exit();
}
