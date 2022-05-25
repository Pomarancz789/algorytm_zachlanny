#include <iostream>
using namespace std;

int main() {
    int nominaly[] = {500,200,100,50,20,10};
    int ilebanknotow[] = {0,0,0,0,0,0};
    int pensja = 1830;
    
    for (int i=0; i<6; i++) {
        if(pensja>=nominaly[i])
        {
            ilebanknotow[i]=pensja/nominaly[i];
            cout << nominaly[i] << ": " << ilebanknotow[i] << endl;
            pensja=pensja%nominaly[i];
        }
    }
    
    return 0;
}
