#include <unistd.h>

int main(void) {
    char c;
    char* ptr;
    
      c = 'L';
      
      
      ptr = &c;   //REFERENCING
    *ptr = '0';   //DEREFERENCING
    

    write(1, &c, 1);
    return (1);
}
