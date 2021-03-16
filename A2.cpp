#include<iostream>
using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
}

/*
kieu int
{
   int a[4] = {1,2,3,4};
   for (int *cp = a; (*cp) < 5; cp+=1) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}


{
    double a[4] = {1.1,2.2,3.3,4.4};
    for(double *cp =a; *cp <=4.4;cp+=1){
        cout  << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
{
    double a[4] = {1.1,2.2,3.3,4.4};
    for(double *cp =a; *cp <=4.4;cp+=2){
        cout  << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;

}*/
