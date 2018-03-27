#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <unistd.h>
#include <errno.h>      // Error number definitions
#include <string.h>
#include <termios.h>
using namespace std;

int main()
{
  string buf;

  int fd;
  int er;
  char b = 'd';           //MUST HAVE A CHAR WITH SOME DATA (Alloc mem)
  ///dev/ttyUSB0
  fd = open("/dev/ttyUSB0", O_RDWR );
  fcntl(fd, F_SETFL,0);
  cout << fd <<endl;
  //write(fd, "i", 1);   //WRITE WORKS FINE


  er = read(fd, &b, 1);    //MUST HAVE A CHAR WITH SOME DATA
  cout << er <<endl;
  cout << b <<endl;

  //if (errno == EFAULT)
    //cout << "ERROR" << endl;
  //close(fd);
  return 0;
}
