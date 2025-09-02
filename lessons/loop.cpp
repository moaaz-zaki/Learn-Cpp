//?=============== loop =====================
//*----Loop With For 
//*----Loop On Array

//*---Syntax
//*------for(init ; condition ; Update)
//*------{
//*------ //Block Of Code
//*------}

//*---Loop For Advanced Syntax
//*------init;
//*------for( ;  ; )
//*------{
//*------ //Block Of Code
//*------ Update;
//*------condition with if;
//*------}

//!Nested Loop
//*---Syntax
//*------for(init ; condition ; Update)
//*------{
//*------ //Block Of Code
//*------}


//!Loop With While
//*---Syntax
//*------init;
//*------while( condition Is True)
//*------{
//*------ //Block Of Code
//*------Update;
//*------}

//!Loop With Do While
//*---Syntax
//*------init;
//*------do
//*------{
//*--------//Block Of Code
//*--------Update;
//*------}while( condition Is True)


//*----Break     ==> Exit From Loop
//*----continue  ==> Skip Iteration and Continue

//! compare
//*-----------For       ==> Specific Number Of Code
//*-----------While     ==> Loop As Long Condition Is True 
//*-----------Do While  ==> Always Excutes One




#include <iostream>
using namespace std;

int main ()
{
    // int numbers [] = {100, 200, 300, 400, 500, 600};
    // int nums_Size = sizeof (numbers) / sizeof(numbers[1]);
    
    // cout << numbers[0] <<endl;
    // cout << numbers[1] <<endl;
    // cout << numbers[2] <<endl;
    // cout << numbers[3] <<endl;
    // cout << numbers[4] <<endl;
    // cout << numbers[5] <<endl;

    // for(int index = 2; index < 5; index++)
    //     cout << numbers[index] << endl; 


    // int j = 0;

    // for( ; ; )
    // {
    //     //! code of block
    //     cout << numbers[j] << endl;

    //     //! Update
    //     j++;

    //     //!condition 
    //     if (j == 6)
    //         break;
    // }

    // //Odd Number
    // for(int i = 0; i < nums_Size; i += 2)
    // {
    //     if( i % 2 == 0 )
    //     {
    //         cout << "Number of Index [ " << i << " ] Equal " << numbers[i] << endl; 
    //     }
    // }
    
    // for(int i = 0; i < nums_Size; i ++)
    // {
    //     if( i % 2 == 0 )
    //     {
    //         cout << "Number of Index [ " << i << " ] Equal " << numbers[i] << endl; 
    //     }
    // } 

    // for(int i = 0; i < nums_Size; i++ )
    // {
    //     cout << "Number of Index [ " << i << " ] Equal " << numbers[i] << endl; 
    //     i++;
    // }
    
    // for(int i = nums_Size-1; i > 1  ; i-- )
    // {
    //     cout << "Number of Index [ " << i << " ] Equal " << numbers[i] << endl; 
    // }

    // int k = nums_Size -1;

    // for( ; ; )
    // {
    //     cout << "Number of Index [ " << k << " ] Equal " << numbers[k] << endl; 
    //     k--;
    //     if(k == 1)
    //         break;
    // }

    // string products [] ={"Item 1", "Item 2", "Item 3"};
    // string sizes    [] ={"Small", "Miduem", "Large"};

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "Product Name:\n" + products[i] << endl;
    //     cout << "Sizes: " << endl;
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout << sizes[j] ;
    //         if( j < 2)
    //             cout << " , ";
    //     }
    //     cout << "\n======================" << endl;
    // }

    // int z = 0;

    // while (z < 5)
    // {
    //     z++;
    //     cout << z << endl;

    //     if (z == 2)
    //         {   
    //             break;
    //         }
    // }
    

    int nums [] = {100, 200, 300, 400, 500};
    for( int i = 0 ; i < 5 ; i++)
    {
        cout << "Number In Index [ " << i << " ] Equal " << nums[i] << endl;
        if ( nums[i] == 200 )
        {
            break;
        }
    }


    return 0 ;
}