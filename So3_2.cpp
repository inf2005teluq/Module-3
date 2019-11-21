#include <iostream>
using namespace std;
main()
{
    int x, y, i, puissance;
    i = 1;
    puissance = 1;
cin >> x;
cin >> y;
while (i <= y) 
{
    puissance *= x;
    ++i;
    
}
cout << puissance << endl;
return 0;
    
}
