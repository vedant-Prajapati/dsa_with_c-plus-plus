#include<iostream>
using namespace std;
int main()
{
  // int i = 11;
  // do {
  //   cout << i << " ";
  //   i++;
  // }while (i <=100;);
  
  
    //  Initialization
  	// int i = 1;
  
  	//  while loop that starts with i = 1 and ends
  	//  when i is greater than 5.
    //  do {
    //     cout << i << " ";
      
    //   	 Updation
    //   	i++;
    // }while (i <= 5);

    char  choice;
    do
    {
        float l, b, area;
        cout << "Enter length and breadth of rectangle: ";
        cin >> l >> b;
        area = l * b;
        cout << "Area of rectangle: " << area << endl;
        cout << "want to calculate another area? (1 for yes, 0 for no): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "This will always execute at least once." << endl;

    


    return 0;
}