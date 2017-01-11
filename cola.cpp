#include<iostream>
using namespace std;
int main(){
	int choice;
	cout << "Welocme to the Beverages Machine....Please choose your beverage by choosing a number from 1 to 5." << endl;
	cout << " Beverages avaliable: " << endl;
	cout << "Water(1)," << endl;
	cout << "Lemon(2)," << endl;
	cout << "Sugarcane(3)," << endl;
	cout << "Orange(4)," << endl;
	cout << "Date Shake(5)." << endl;
	cin >> choice;
	switch(choice){
		case 1:
			cout << "You chose Water." << endl;
			cout << " Thank you for using the Beverages Machine" << endl;
			break;
		case 2:
			cout << "You chose Lemon." << endl;
			cout << " Thank you for using the Beverages Machine" << endl;
			break;
		case 3:
			cout << "You chose Sugarcane." << endl;
			cout << " Thank you for using the Beverages Machine" << endl;
			break;
		case 4:
			cout << "You chose Orange." << endl;
			cout << " Thank you for using the Beverages Machine" << endl;
			break;
		case 5:
			cout << "You chose Date Shake." << endl;
			cout << " Thank you for using the Beverages Machine" << endl;
			break;
		default:
			cout << "Not Avaliable,Please try later." << endl;
      break;

	}





}
