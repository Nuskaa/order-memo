#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

// Struct to store an order
struct Order {
    string potatoSize;
    vector<string> toppings;
    vector<string> extras;
    double totalPrice;
};

int main() {
    double credits = 0.0;             // User's balance
    double orderPrice = 0.0;         // Price of the current order
    int choice;
    vector<Order> recentOrders;      // Store all recent orders

    while (true) {
        // Main Menu
        cout << "-----------------------------------\n";
        cout << "Hot Potato\n";
        cout << "-----------------------------------\n";
        cout << "MAIN MENU\n";
        cout << "1. Add Credits (current credits = " << fixed << setprecision(2) << credits << ")\n";
        cout << "2. New Order\n";
        cout << "3. Recent Orders\n";
        cout << "0. Exit\n";
        cout << "Please enter a number: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Thank you, goodbye!" << endl;
            break;
        } else if (choice == 1) {
            // Add Credits
            double addAmount;
            cout << "Enter the amount of credits to add: ";
            cin >> addAmount;
            credits += addAmount;
            cout << "Credits added! Current balance: " << credits << " credits.\n";
        } else if (choice == 2) {
            // Start New Order
            orderPrice = 0.0;
            Order currentOrder;

            // Select Size
            cout<<"NEW ORDER - Select Size\n";
            cout<<"Please choose from the following options:\n";
            cout<<"  1. Small   [5.0 credits]\n";
            cout<<"  2. Medium  [8.50 credits]\n";
            cout<<"  3. Large   [10.25 credits]\n";
            cout<<"  0. Return to Main Menu\n";
            cout<<"-------------------------------\n";
            cout<<"Please enter a number: ";
           cin>>choice;
            if(choice==0) continue;
            if(choice==1){
                cout<<"You have selected a Small baked potato.\n";
                orderPrice+=5.0;
                currentOrder.potatoSize = "Small";                
            }
            else if(choice==2){
                cout<<"You have selected a Medium baked potato.\n";
                orderPrice+=8.50;
                currentOrder.potatoSize = "Medium";
            }
            else if(choice==3){
                cout<<"You have selected a Large baked potato.\n";
                orderPrice+=10.25;
                currentOrder.potatoSize = "Large";
            }
            cout<<"-------------------------------\n";

            // Select Toppings
            char addMore;
            do {
        cout<<"Please choose from the following toppings:\n";
        cout<<"   1. Cheese          [1.00 credits]\n";
        cout<<"   2. Butter          [0.40 credits]\n";
        cout<<"   3. Garlic Butter   [0.50 credits]\n"; 
        cout<<"   4. Beans           [0.75 credits]\n";
        cout<<"   5. Curry Sauce     [1.20 credits]\n";
        cout<<"   6. Mushrooms       [0.80 credits]\n";
        cout<<"   7. Onions          [0.40 credits]\n";
        cout<<"   8. Extra Cheese    [1.50 credits]\n";
        cout<<"   0. Return to Main Menu\n";
        cout<<"-------------------------------\n";
        cout<<"Please enter a number: ";
                cin >> choice;

                if (choice == 1) {
                    cout<<"You have added Cheese to your baked potato.\n";
            orderPrice+=1.0;
            currentOrder.toppings.push_back("Cheese");
                }
                else if(choice==2){
                    cout<<"You have added Butter to your baked potato.\n";
                    orderPrice+=0.40;
                    currentOrder.toppings.push_back("Butter");
                }
                 else if(choice==3){
                    cout<<"You have added Garlic Butter to your baked potato.\n";
                    orderPrice+=0.50;  
                    currentOrder.toppings.push_back("Garlic Butter");                          
                }
                 else if(choice==4){
                    cout<<"You have added Beans to your baked potato.\n";
                    orderPrice+=0.75;
                    currentOrder.toppings.push_back("Beans");
                }
                else if(choice==6){
                    cout<<"You have added Curry sauce to your baked potato.\n";
                    orderPrice+=1.20;
                    currentOrder.toppings.push_back("Curry sauce");
                }
                else if(choice==7){
                    cout<<"You have added Onion to your baked potato.\n";
                    orderPrice+=0.40;
                    currentOrder.toppings.push_back("Onion");
                }
                else if(choice==8){
                    cout<<"You have added Extra cheese to your baked potato.\n";
                    orderPrice+=1.50;
                    currentOrder.toppings.push_back("Extra cheese");
                }
                else{
                    cout<<"Return to the main menu\n";
                }
                cout << "Current price: " << orderPrice << " credits.\n";
                cout << "Would you like to add more toppings? (Y/N): ";
                cin >> addMore;
            } while(addMore == 'Y');
            cout<<"-------------------------------\n";

            // Select Extras
            cout << "Would you like to add extras? (Y/N): ";
            cin >> addMore;
            if (toupper(addMore) == 'Y') {
                do {
                    cout<<"Please choose from the following extra's:\n";
                cout<<" 1. Salad Box             [1.50 credits]\n";
                cout<<" 2. Hot Dog               [4.00 credits]\n";
                cout<<" 3. Can of Fizzy Drink    [0.50 credits]\n";
                cout<<" 4. Bottle of Water       [0.80 credits]\n";
                cout<<" 5. Tea                   [1.00 credits]\n";
                cout<<" 6. Coffee                [1.20 credits]\n";
                cout<<" 0. Return to Main Menu\n";
                cout<<"-------------------------------\n";
                cout<<"Please enter a number : ";
                    cin >> choice;

                    if (choice == 1) {
                        cout<<"You have added Salad box to your baked potato.\n";
                        orderPrice += 1.5;
                        currentOrder.extras.push_back("Salad Box");
                    } else if (choice == 2) {
                        cout<<"You have added Hot dog to your baked potato.\n";
                        orderPrice += 4.0;
                        currentOrder.extras.push_back("Hot Dog");
                    } else if (choice == 3) {
                        cout<<"You have added Can of fizzy drink to your baked potato.\n";
                        orderPrice += 1.2;
                        currentOrder.extras.push_back("Can of Fizzy Drink");
                    } else if (choice == 4) {
                        cout<<"You have added Bottle of water to your baked potato.\n";
                        orderPrice += 0.8;
                        currentOrder.extras.push_back("Bottle of Water");
                    }
                      else if(choice==5){
                        cout<<"You have added Tea to your baked potato.\n";
                        orderPrice+=1.00;
                        currentOrder.extras.push_back("Tea");
                    }
                      else if(choice==6){
                        cout<<"You have added Coffee to your baked potato.\n";
                        orderPrice+=1.20;
                        currentOrder.extras.push_back("Coffee");
                    } 
                      else{
                        cout<<"Return to the main menu\n";
                    }
                    cout<<"Current price= "<< orderPrice<<" credits.\n"; 
                    cout<<"Would you like to add anything else?\n";
                    cout<<"Please input 'Y' for yes and 'N' for no : ";
                    cin >> addMore;
                } while (toupper(addMore) == 'Y');
            }
           cout<<"-------------------------------\n";
            
                
            if(credits<orderPrice){
                cout<<"Insuffuicient credits!. Please add more credits to your account.\n";
                continue;
            } 
            credits -=orderPrice;
            currentOrder.totalPrice = orderPrice;
            recentOrders.push_back(currentOrder);
            cout << "Order confirmed! Your new balance is: " << credits << " credits.\n";
            cout<<"-------------------------------\n";
            cout<<"-------------------------------\n";
            cout<<"Would you like to check your recent orders?\n";
            cout<< "Please input 'Y' for yes and 'N' for no: \n";
            cin >> addMore;
            if (toupper(addMore) == 'Y')
            
            do{
            if (recentOrders.empty()){
                cout << "No recent orders.\n";
            } else{cout << "Recent Orders:\n";
                 for (size_t i = 0; i < recentOrders.size(); ++i) {
                    cout << "Order " << i + 1 << "\n";
                    cout << "Potato Size: " << recentOrders[i].potatoSize << "\n";
                    cout << "Toppings: ";
                    for (const string &topping : recentOrders[i].toppings)
                    cout << topping<<"\n";
                    cout << "Extras: ";
                    for (const string &extra : recentOrders[i].extras)
                    cout << extra << "\n";
                    cout << "\n  Total Price: " << fixed << setprecision(2) << recentOrders[i].totalPrice << " credits\n";
                }
            }
        } while(toupper(addMore)== 'N');
        
         
            }
        
            

    }
    }