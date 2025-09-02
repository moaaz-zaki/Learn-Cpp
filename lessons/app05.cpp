# include <iostream>
using namespace std ;

int main ()
{

    cout << "================================="<< endl;
    cout << "====== Find Greatest Number ======"<< endl;
    cout << "================================="<< endl;
    
    int num_1 , num_2 , num_3 ;
    cout << "Enter Three Number For Find The Greatest Number: ";
    cin >>num_1>>num_2>>num_3 ;


    if (num_1 > num_2 && num_1 > num_3)
    {
    cout << num_1 <<" The Greatest Number Betwwen "<< num_2 << " and " << num_3 << endl;
    }else if ( num_2 > num_1 && num_2 > num_3 ){
        cout << num_2 <<" The Greatest Number Betwwen "<< num_1 << " and " << num_3 << endl ;
    }else{
        cout << num_3 <<" The Greatest Number Betwwen "<< num_1 << " and " << num_2 << endl;    
    }

    if (num_1 > num_2)
    {
        if(num_1 > num_3)
        {
            cout << num_1 <<" The Greatest Number Betwwen "<< num_2 << " and " << num_3 << endl;
        }else{
            cout << num_3 <<" The Greatest Number Betwwen "<< num_1 << " and  " << num_2 << endl;    
        }
    }else{
         if(num_2 > num_3)
        {
            cout << num_2 <<" The Greatest Number Betwwen "<< num_1 << " and " << num_3 << endl ;
        }else{
            cout << num_3 <<" The Greatest Number Betwwen "<< num_1 << " and " << num_2 << endl;    
            
            
        } 
    }
    
    
    int great = num_1 > num_2 ? num_1: num_2 ;
    if(great > num_3)
    {
        cout << great <<" The Greatest Number Between Number "<< endl;
    }else {
        cout << num_3 <<" The Greatest Number Between Number "<< endl;
    }
    
    
      

    return 0;
}


