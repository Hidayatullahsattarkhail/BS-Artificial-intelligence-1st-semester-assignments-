#include <iostream> 
#include <set>// for all the relevant fuctions
using namespace std;

int main() 
{
    int setA[4]={5,9,1,3}; 
    int setB[4]={9,17,5,95};  
    int setANoe=4;// Noe= No of Elements
    int setBNoe=4;

    bool isSubset = true;
    set<int> setB_set(setB,setB+setBNoe);
    for (int i=0;i<setANoe;i++)
   {
        if (setB_set.find(setA[i])==setB_set.end())
       {
            isSubset = false;
            break;
        }
    }
    if(isSubset)
   
    {
        cout<<"setA is a subset of setB"<<endl;
    }else
    {
        cout<<"setA is not a subset of setB"<<endl;
    }

    cout << "Cartesian Product:" << endl;   
    for (int i = 0;i<setANoe;i++)
   {
        for (int j = 0;j<setBNoe;j++)
       {
            cout << "(" << setA[i] << ", " << setB[j] << ") ";
        }
        cout << endl;
    }

    cout << "Power Set:" << endl; 
    for (int i = 0;i < (1 << setANoe); i++)
   {
        cout << "{ "; 
        for (int j = 0;j < setANoe; j++)
        {
            if(i & (1 << j))
           {
                cout << setA[j] << " ";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}
