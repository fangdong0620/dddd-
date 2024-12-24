#include <iostream>
#include<string>
using namespace std;
int main()
{  
    int num = 0 ;
    cout<<"text"<< endl;
    cin >> num ;
    cout<<"number is "<< num << endl;   //输入

    for (int a = 1; a <= (num / 2 + 1); a++)           //列
    {
        for (int b = 0; b < ((num / 2 + 1) - a); b++)  //行空格
           { cout << "  ";
           }

        for (int m = 0; m < 2 * a - 1; m++)            //行星星
           {cout << "* ";
           }
                                      

        cout<< endl;

     }
    system("pause") ;

    return 0 ;  
}