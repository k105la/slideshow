#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main(void) {
  struct dirent *de;
  DIR *dr = opendir("/media/usb");

  while ((de = readdir(dr)) != NULL) {
    system("mv /media/usb/*.jpg ~/Desktop/pictures 2>/dev/null");
  }

  printf("Pictures have been transferred from USB folder!!!\n");
  closedir(dr);
  return 0;
}
