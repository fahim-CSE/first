#include<iostream>
using namespace std;
int main()
{
    int i,s,k=0;
    for (i=1;i<=6;i++){
        for(s=1;s<=(6-i);s++){
            cout << " " ;
        }
        while (k != (2*i-1))
        {
            cout << "*" ;
            k++;
        }
         k=0;
        cout << endl;


    }
    cout << endl;
<<<<<<< HEAD
    return 2;
=======
    return 1;
>>>>>>> 7509d0d83250005320d80deef1be5b90c5fea517
}
