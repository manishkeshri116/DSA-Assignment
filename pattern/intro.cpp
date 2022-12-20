#include<iostream>

using namespace std;
int main(){
   /*  int n = 4;

    for (int row= 0;row <=n; row++)
    {
        for (int col = 1; col <=n; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    } */
 
    // 2nd qustion 
   /*  int n = 5;
    for (int row = 1; row <=n ; row++)
    {
        for (int col = 1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
     */

    // 3rd quesrion 
    /* int n = 5;
    for (int row = 1; row<=n ; row++)
    {
        for (int col = 1; col<=n-row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     */

    // piraa mid 
/*     int n = 10;
    for (int row = 1; row<=n; row++)
    {
        for (int col = 1; col<=n-row; col++)
        {
           cout<<" ";
            
        }
        for (int col = 1; col<=row; col++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    } */
        // ultaa piramid 
  /*   int n = 10;
    for (int row = 1; row<=n; row++)
    {
        for (int col = 1; col<=row-1; col++)
        {
           cout<<" ";
            
        }
        for (int col = 1; col<=n-row+1; col++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }
     */

    int n= 16;
    for (int row = 1; row<=n; row++)
    {
        if (row ==1 || row== n)
        {
            //star
            for (int col = 1; col<=n-row+1; col++)
            {
                cout<<"*";
            }
        }
            else
            {
                cout<<"*";
                for (int col = 1; col <=n-row-1; col++)
                {
                    cout<<" ";
                }
               cout<<"*";
            }
            
            
        
         cout<<endl;
    
    }
    

    return 0;

}