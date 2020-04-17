#include <iostream>
using namespace std;

enum EnumBits
{
    two = 2,
    four = 4, 
    six = 6,
    eight = 8
};

//--------------------------------------------------//


enum Randoms
{
    twenty = 20,
    amianumber = 3
};

//--------------------------------------------------//


int main(void)
{
    
    cout << (two + four) << endl;    
    cout << (six - four) << endl;   
    cout << (two * six) << endl;  
    cout << (eight / four) << endl;  

//--------------------------------------------------//

    
    cout << (two | four) << endl;    
    cout << (six & four) << endl;  
    cout << (four ^ six) << endl; 
    cout << (eight << 1) << endl;  
    cout << (two >> 1) << endl;   

//--------------------------------------------------//

    int intArray[amianumber];
    int someVal = 5 + twenty;

    return 0;
}
