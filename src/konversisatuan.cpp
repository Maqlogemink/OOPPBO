#include <iostream>
using namespace std;

int main(){

    string satuan []={"km","hm","dam","m","dm","cm","mm"};
    string awal = "km";
    string akhir = "mm";

    int x,y;

    int a = sizeof(satuan)/sizeof(*satuan);

    for (int f = 0; f<a; f++)
    {
        if (awal==satuan[f])
        {
            x = f+1;
        }
        if (akhir==satuan[f])
        {
            y = f+1;
        }
        
        
    }
  
    cout << x << endl;
    cout << y;

    
}