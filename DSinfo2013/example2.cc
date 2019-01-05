 #include <iostream> 
 using namespace std; 
  enum weekday  {monday=1, tuesday, wednesday, thursday, friday, saturday, sunday}; 
  weekday data[]={tuesday,monday,friday,wednesday,sunday}; 
  int main() 
 { 
      for(int i=0; i<7; i++)
     {   
        switch (data[i] ) 
              {
    case monday : cout << "m ";
    case tuesday : cout << "tu ";
    case wednesday : cout << "w "; 
    case thursday : cout << "th "; 
    case friday : cout << "f "; 
    case saturday : cout << "sa ";
    case sunday : cout << "su ";
    cout << data[i] << endl; 
                break;
    default : cout << "prb " << endl ; 
     break; 
      } 
       } 
       
       cout << std::endl; 
        return 0; 
        }
