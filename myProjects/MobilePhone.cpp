#include <iostream>
#include <cmath>
using namespace std;

string choose;
char oper;
double c,d;

class Electronic {
	private:
		long int Email;
		string name, cho;
		using electronic = string;
		electronic e1 = "Samsungs_Fridge";
		electronic e2 = "mi_smart_T.V.";
		electronic e3 = "hp_latest_Laptop";
		electronic e4 = "LG_Computer";
		electronic e5 = "IPhone";
		electronic e6 = "Phillip_Hair_Dryer";
		electronic e7 = "Samsung_Projector";
		electronic e8 = "Samsung_Printer";
		electronic e9 = "Phillip_Grinder";
		electronic e10 = "Luminous_Inverter";
	public:
		int Electric(){
			cout << "Please enter your name :- ";
			cin >> name;
			cout << endl << "Please enter which of the following electronic would you like to order " << endl;
			cout << endl << e1 << endl << e2 << endl << e3 << endl << e4 << endl << e5 << endl << e6 << endl << e7 << endl << e8 << endl << e9 << endl << e10 << endl;
			cin >> cho;
			cout << endl;
			if(cho == e1){
				cout << "Your " << e1 << " will be delivered in 3 weeks" << endl;
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e2){
				cout << "Your " << e2 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e3){
				cout << "Your " << e3 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e4){
				cout << "Your " << e4 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e5){
				cout << "Your " << e5 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e6){
				cout << "Your " << e6 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e7){
				cout << "Your " << e7 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e8){
				cout << "Your " << e8 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e9){
				cout << "Your " << e9 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else if(cho == e10){
				cout << "Your " << e10 << " will be delivered in 3 weeks" << endl << "Thank You.";
				cout << endl << "please enter your Email for contact." << endl;
				cin >> Email;
				cout << "Thank You.";
			}
			else{
				cout << "SORRY! inappropriate  choise." << endl;
			}
			
			return 0;
		}
};

int main(){
    string calculator = "calculator", investing_app = "investing_app",lucky_draw = "lucky_draw",zomato = "zomato",Tree_plantation = "Tree_plantation",Sasta_Amazon="Sasta_Amazon";
	cout << "Apps inside this are " << endl << "calculator" << endl << "investing_app" << endl << "lucky_draw" << endl << "zomato" << endl << "Tree_plantation" << endl << "Sasta_Amazon" << endl;
	cin >> choose;
	if(choose == calculator){
		cout << "Please enter the operation which you want to perform in this calculator between two numbers." << endl;
	cout << "+" << endl << "-" << endl << "/" << endl << "@ for square root" << endl  << "*" << endl << "Enter the operator for the operation you want to perform" << endl;
	cin >> oper;
	switch(oper){
		
		
		case '+':
			cout << "Please enter two numbers for addition." << endl;
			cin >> c;
			cout << endl;                                                                                     //   ADDITION
			cin >> d;
			cout << "The sum of " << c << " and " << d << " is " <<  c + d << endl << "Thank You For Using.";
			break;
			
			
		case '-':
			cout << "Please enter two numbers for subtraction." << endl;
			cin >> c;
			cout << endl;                                                                                     //   SUBTRACTION
			cin >> d;
			cout << "The difference of " << c << " and " << d << " is " <<  c - d << endl << "Thank You For Using.";
			break;
			
			
		case '/':
			cout << "Please enter two numbers for division." << endl;
			cin >> c;
			cout << endl;                                                                                     //   DIVISION
			cin >> d;
			cout << "The quotient of " << c << " and " << d << " is " <<  c/d << endl << "Thank You For Using.";
			break;
			
			
		case '*':
			cout << "Please enter two numbers for multiplication." << endl;
			cin >> c;
			cout << endl;                                                                                     //   MULTIPLICATION
			cin >> d;
			cout << "The product of " << c << " and " << d << " is " <<  c*d << endl << "Thank You For Using.";
			break;
			
		
		case '@':
			cout << "Please enter number to find square root." << endl;
			cin >> c;
			cout << endl;                                                                                     //   SQUARE ROOT
			cout << "The square root of " << c << " is " <<  sqrt(c) << endl << "Thank You For Using.";
			break;
			
		default:
			cout << "Unknown operation.";
			
	}
	}
	
	
	
	
	
	
	
	
	
	
	else if(choose == investing_app){
		int pack[4] = {1000,5000,10000,50000};
    int money;
    string choise;
    
    
	using names = string;
	names c1 = "wipro";
	names c2 = "TATA";
	names c3 = "bitcoin";
	names c4 = "gold";
	names c5 = "platinum";
	names c6 = "diamond";
	cout << "This is the app for investing money." << endl << "Please tell us about which company or material would you like to invest" << endl;
	cout << "The places to invest are " << endl << c1 << endl << c2 << endl << c3 << endl << c4 << endl << c5 << endl << c6 << endl;  
	cin >> choise;
	
	
	
	if(choise==c1){
    cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;                                         //  WIPRO
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 shares. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 shares. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 shares. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 250 shares. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
    }
    
    
    
    else if(choise==c2){
    	cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                                 // TATA
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 1 shares. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 5 shares. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 10 shares. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 50 shares. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c3){
		cout << "The packages made by company are " << endl;                          // Bitcoin
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 bitcoins. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 bitcoins. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 bitcoins. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 250 bitcoins. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c4){
		cout << "The packages made by company are " << endl;                               // Gold
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5.6g gold. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 26.2g gold. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 52.4g gold. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 254.8g gold. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c5){
		cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                                     // Platinum
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 100 nuggets of platinum. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c6){
		cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                              // DIAMOND
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 1 piece of diamond. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 5 pieces of diamond. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 10 pieces of diamond. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 15 pieces of diamond. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else{
		cout << "Error with you choise.";
	}
	}
	
	
	
	
	else if(choose == lucky_draw){
	int number,jackpot;
	jackpot = rand()%3;
	cout << "Hint: The number is between 0 to 3." << endl;
	cin >> number;
	srand(time(NULL));
	if(number == jackpot){
		cout << "you win" << endl;
	}
	else if(number > jackpot){
		cout << "Greater than the answer." << endl;
	}
	else if(number < jackpot){
		cout << "Smaller than the answer." << endl;
	}
	else{
		cout << "The number is greater." << endl;
	}
	}
	
	
	
	else if(choose == zomato){
		string order,address,vn,veg = "veg",non_veg = "non_veg";
	
	
	
	
	using vfood = string;
    vfood f1 = "panner_biryani";
    vfood f2 = "dosa";
    vfood f3 = "salad";
    vfood f4 = "chole_bhature";
    vfood f5 = "shahi_panner";
    vfood f6 = "jerra_rice";
    vfood f7 = "tandoori_roti";
    vfood f8 = "dal_makhani";
    vfood f9 = "choclate_ice_cream";
    vfood f10 = "cheese_panner_sandwhiches";
    
    
    
    
    using nfood = string;
    nfood nf1 = "chicken_birayani";
    nfood nf2 = "barito";
    nfood nf3 = "fried_chicken";
    nfood nf4 = "tandoori_chicken";
    nfood nf5 = "butter_chicken";
    nfood nf6 = "egg_cake";
    nfood nf7 = "egg_roll";
    nfood nf8 = "omlet";
    nfood nf9 = "chicken_momos";
    nfood nf10 = "chicken_tikka";
    
    
    
	cout << "Please tell the type of food you want." << endl << "veg" << endl << "non_Veg" << endl;
	cin >> vn;
	
	
	if(vn == veg){
		cout << "You have successfully choosen veg. Please give us your order." << endl;
		cout << "Your choises are " << endl << f1 << endl << f2 << endl << f3 << endl << f4 << endl << f5 << endl << f6 << endl << f7 << endl << f8 << endl << f9 << endl << f10 << endl; 
		cin >> order;
		if(order == f1){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your panner biryani will be delivered." << endl;
		}
		else if(order == f2){
		    cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your dosa will be delivered." << endl;
		}
		else if(order == f3){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your salad will be delivered." << endl;
		}
		else if(order == f4){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chole bhature will be delivered." << endl;
		}
		else if(order == f5){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your shahi panner will be delivered." << endl;
		}
		else if(order == f6){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your jerra rice will be delivered." << endl;
		}
		else if(order == f7){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your tandoori roti will be delivered." << endl;
		}
		else if(order == f8){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your dal makhani will be delivered." << endl;
		}
		else if(order == f9){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your choclate ice cream will be delivered." << endl;
		}
		else if(order == f10){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your cheese panner sandwhiches will be delivered." << endl;
		}
		else{
			cout << "Invalid order." << endl ;
		}
	}
	
	
	
	
	
	
	
	
	
	else if(vn == non_veg){
		cout << "You have successfully choosen non_veg. Please give us your order." << endl;
		cout << "Your choises are " << endl << nf1 << endl << nf2 << endl << nf3 << endl << nf4 << endl << nf5 << endl << nf6 << endl << nf7 << endl << nf8 << endl << nf9 << endl << nf10 << endl; 
		cin >> order;
		if(order == nf1){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken biryani will be delivered." << endl;
		}
		else if(order == nf2){
		    cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your barito will be delivered." << endl;
		}
		else if(order == nf3){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your fried chicken will be delivered." << endl;
		}
		else if(order == nf4){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your tandoori chicken will be delivered." << endl;
		}
		else if(order == nf5){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your butter chicken will be delivered." << endl;
		}
		else if(order == nf6){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your egg cake will be delivered." << endl;
		}
		else if(order == nf7){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your egg roll will be delivered." << endl;
		}
		else if(order == nf8){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your omlet will be delivered." << endl;
		}
		else if(order == nf9){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken momos will be delivered." << endl;
		}
		else if(order == nf10){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken tikka will be delivered." << endl;
		}
		else{
			cout << "Invalid order." << endl ;
		}
	}
	
	
	else{
		cout <<"inappropriate type of food." << endl;
	}
	}
	
	
	
	
	else if(choose == Tree_plantation){
		int count,amou,ACNo;
	string treeChoise,adInfo,name;
	
	
	
	using tree = string;
	tree t1 = "mango_tree";
	tree t2 = "banana_tree";
	tree t3 = "olive_tree";
	tree t4 = "apple_tree";
	tree t5 = "grapes_tree";
	tree t6 = "banyan_tree";
	tree t7 = "bamboo_tree";
	tree t8 = "neem_tree";
	tree t9 = "amla_tree";
	tree t10 = "jamun_tree";
	
	cout  << "Welcome user please enter user name" << endl;
	cin >> name;
	cout << name << " please enter the type of tree you want" << endl << "us to plant.After the plant will grow 40 cm it will" << endl << " be handed over to you" << endl;
	cout << "Your choises are" << endl << t1 << endl << t2 << endl << t3 << endl << t4 << endl << t5 << endl << t6 << endl << t7 << endl << t8 << endl << t9 << endl << t10 << endl;
	cin >> treeChoise;
	    if(treeChoise == t1){
		cout << "You have successfully choosen " << t1 << endl << "Amount to be paied for planting and taking care is Rs 95" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t1 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t2){
		cout << "You have successfully choosen " << t2 << endl << "Amount to be paied for planting and taking care is Rs 80" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t2 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t3){
		cout << "You have successfully choosen " << t3 << endl << "Amount to be paied for planting and taking care is Rs 100" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t3 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t4){
		cout << "You have successfully choosen " << t4 << endl << "Amount to be paied for planting and taking care is Rs 95" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t4 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t5){
		cout << "You have successfully choosen " << t5 << endl << "Amount to be paied for planting and taking care is Rs 85" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t5 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t6){
		cout << "You have successfully choosen " << t6 << endl << "Amount to be paied for planting and taking care is Rs 105" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t6 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t7){
		cout << "You have successfully choosen " << t7 << endl << "Amount to be paied for planting and taking care is Rs 60" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t7 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t8){
		cout << "You have successfully choosen " << t8 << endl << "Amount to be paied for planting and taking care is Rs 80" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t8 << " will be handed to you when it is 40cm long." << endl;
	    }
 	    else if(treeChoise == t9){
		cout << "You have successfully choosen " << t9 << endl << "Amount to be paied for planting and taking care is Rs 85" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t9 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else if(treeChoise == t10){
		cout << "You have successfully choosen " << t10 << endl << "Amount to be paied for planting and taking care is Rs 60" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t10 << " will be handed to you when it is 40cm long." << endl;
	    }
	    else{
		cout << "ERROR! we don't have the plant you want." << endl;
	    }
	}
	
	else if(choose == Sasta_Amazon){
		Electronic Elec;
	    cout << Elec.Electric() << endl;
	}
	
	
	
	
	
	
	else{
		cout << "Invalid app." << endl;
	}
	
	
	
	
	
	return 0;
}
