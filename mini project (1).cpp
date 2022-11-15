#include<iostream>
#include <stdlib.h>
using namespace std;
int c,d,sr;
class mobile{
	public:
		void samsung(int b);
		void mi(int b);
		void apple(int b);
		void oppo(int b);
		void oneplus(int b);
		void vivo(int b);
		void realme(int);
		void iq(int);
		int a,b;
		void brandname(){
			/*SAMSUNG
			XIAOMI
			APPLE
			OPPO
			ONE PLUS
			VIVO
			REALME
			*/
				cout<<"*************************************"<<endl;
			cout<<"*************************************"<<endl;
			cout<<" Choose Your Brand :"<<endl;
			cout<<"Press 1 For Samsung :"<<endl;
			cout<<"Press 2 For Xiaomi :"<<endl;
			cout<<"Press 3 For Apple :"<<endl;
			cout<<"Press 4 For Oppo :"<<endl;
			cout<<"Press 5 For One Plus :"<<endl;
			cout<<"Press 6 For Vivo :"<<endl;
			cout<<"Press 7 For Realme :"<<endl;
			cout<<"Press 8 For IQOO :"<<endl;
				cout<<"*************************************"<<endl;
					cout<<"*************************************"<<endl;	
			cin>>a;
			switch(a){
					case 1://samsung 
						cout<<"Enter Your Price Range for Samsung Mobiles  :"<<endl;
						cin>>b;
						
						cout<<"*************************************"<<endl;
							cout<<"*************************************"<<endl;
					
							samsung(b);
								cout<<"*************************************"<<endl;
									cout<<"*************************************"<<endl;
							
						
						break;
						
						
					case 2:
						cout<<"Enter Your Price Range for Xioami Mobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
								cout<<"*************************************"<<endl;
						mi(b);
							cout<<"*************************************"<<endl;
								cout<<"*************************************"<<endl;
						
						break;
					
					case 3:
						cout<<"Enter Your Price Range for Apple Mobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
							apple(b);
								cout<<"*************************************"<<endl;
						break;
					
					case 4:
						cout<<"Enter Your Price Range for Oppo Mobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
							oppo(b);
								cout<<"*************************************"<<endl;
						break;
					
					case 5:
						cout<<"Enter Your Price Range for One Plus Mobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
								cout<<"*************************************"<<endl;
						        oneplus( b);
						        	cout<<"*************************************"<<endl;
						        		cout<<"*************************************"<<endl;
						break;
					
					case 6:
						cout<<"Enter Your Price Range for Vivo Mobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
								cout<<"*************************************"<<endl;
						        vivo( b);
						        	cout<<"*************************************"<<endl;
						        		cout<<"*************************************"<<endl;
						break;
					
					case 7:
						cout<<"Enter Your Price Range for RealmeMobiles  :"<<endl;
						cin>>b;
							cout<<"*************************************"<<endl;
							realme(b);
								cout<<"*************************************"<<endl;
						break;
						
					case 8:	
					cout<<"Enter Your Price Range for IQOO Mobiles  :"<<endl;
					
						cin>>b;
							cout<<"*************************************"<<endl;
							iq(b);
								cout<<"*************************************"<<endl;
						break;
					
					default:
							cout<<"Entered Option Doesnt Exist "<<endl;
												
									}		
		}
};
void mobile::samsung(int b)//displaying list of samsung mobiles
{
	
	  if( b>=10000 && b<=20000 ){
		cout<<"1. Samsung Galaxy A50"<<endl;
		cout<<"2. Samsung Galaxy A30s."<<endl;
		
		cout<<"3. Samsung Galaxy M32 5G"<<endl;
		cout<<"4. Samsung Galaxy A70s."<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Samsung Galaxy A50 - Rs. 18,570 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Samsung Exynos 9 Octa 9611\nRear Camera	48 MP + 8 MP + 5 MPFront Camera	32 MP\nBattery	4000 mAh\nDisplay	6.4 inches"<<endl;
									break;
								case 2:
									cout<<"Samsung Galaxy A30s -Rs. 18,199 "<<endl;
									cout<<"RAM- 4 GB\nProcessor	Samsung Exynos 7 Octa 7904\nRear Camera	25 MP + 8 MP + 5 MP\nFront Camera	16 MP\nBattery	4000 mAh\nDisplay	6.4 inche"<<endl;	
									break;
								case 3:
									cout<<"Samsung Galaxy M32 5G - Rs. 19,883"<<endl;
										cout<<"RAM	6 GB\nProcessor	MediaTek Dimensity 720 MT6853V\nRear Camera	48 MP + 8 MP + 5 MP + 2 MPF\nFront Camera	13 MPBattery	5000 mAhDisplay	6.5 inches"<<endl;	
								break;
								case 4:
										cout<<"Samsung Galaxy A70s - Rs. 19,999"<<endl;
										cout<<"RAM	8 GB\nProcessor	Qualcomm Snapdragon 675\nRear Camera	64 MP + 8 MP + 5 MP\nFront Camera	32 MP\nBattery	4500 mAh\nDisplay	6.7 inches"<<endl;
										break;
										default :
										cout<<"Wrong Choice ";
								}
	}
	else if(b>20000&& b<=30000){
		cout<<"1. Samsung Galaxy A52"<<endl;
		cout<<"2. Samsung Galaxy A32"<<endl;

		cout<<"3. Samsung Galaxy M42 5G"<<endl;
		cout<<"4. Samsung Galaxy M31s"<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
		
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
										cout<<"Samsung Galaxy A52"<<endl;
									
									cout<<"RAM	6 GB\nProcessor	Qualcomm Snapdragon 720G\nRear Camera	64 MP + 12 MP + 5 MP + 5 MPFront Camera	32 MP\nBattery	4500 mAh\nDisplay	6.5 inches"<<endl;
									break;
								case 2:
									cout<<" Samsung Galaxy A32 - Rs. 24,790"<<endl;
									cout<<"RAM	4 GB\nProcessor	MediaTek Dimensity 720 MT6853V\nRear Camera	48 MP + 8 MP + 5 MP + 2 MPFront Camera	13 MP\nBattery	5000 mAh\nDisplay	6.5 inches"<<endl;	
								break;
								case 3:
									cout<<" Samsung Galaxy M42 5G - Rs. 21,499"<<endl;
									cout<<"RAM	8 GB\nProcessor	Qualcomm Snapdragon 750G\nRear Camera	48 MP + 8 MP + 5 MP + 5 MPFront Camera	20 MP\nBattery	5000 mAh\nDisplay	6.6 inches"<<endl;	
									break;
								case 4:
									cout<<" Samsung Galaxy M31s - Rs. 22,999"<<endl;
									cout<<"RAM	6 GB\nSamsung Exynos 9 Octa 9611\nRear Camera	64 MP + 12 MP + 5 MP + 5 MPFront Camera	32 MP\nBattery	6000 mAh\nDisplay	6.5 inches"<<endl;	
									break;
									default :
										cout<<"Wrong";
										break;
										
									}
	}
	else if(b>30000 && b<=50000 ){
		
		cout<<"1. Samsung Galaxy S20 FE 5G - Rs. 38,990"<<endl;
		cout<<"2. Samsung Galaxy Note 20 - Rs. 44,999 "<<endl;
		cout<<"3. Samsung Galaxy S20 Plus - Rs. 49,994 "<<endl;
		cout<<"4. Samsung Galaxy Note 20 - Rs. 44,999 "<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
		
		cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<" Samsung Galaxy S20 FE 5G - Rs. 38,990"<<endl;
									cout<<"RAM	8 GB\nProcessor	Qualcomm Snapdragon 865\nRear Camera	12 MP + 8 MP + 12 MP\nFront Camera	32 MP\nBattery	4500 mAh\nDisplay	6.5 inches"<<endl;
									break;
								case 2:
									cout<<"Samsung Galaxy Note 20 - Rs. 44,999"<<endl;
									cout<<"RAM	8 GB\nProcessor	Samsung Exynos 9 Octa 990\nRear Camera	12 MP + 64 MP + 12 MP\nFront Camera	10 MP\nBattery	4300 mAh\nDisplay	6.7 inches"<<endl;
									break;	
								case 3:
									cout<<"Samsung Galaxy S20 Plus - Rs. 49,994"<<endl;
									cout<<"RAM	8 GB\nProcessor	Samsung Exynos 9 Octa 990\nRear Camera	12 MP + 64 MP + 12 MP\nFront Camera	10 MP\nBattery	4500 mAh\nDisplay	6.7 inches"<<endl;
								break;	
								case 4:
									cout<<"Samsung Galaxy Note 20  - Rs. 44,999"<<endl;
									cout<<"RAM	8 GB\nProcessor	Samsung Exynos 9 Octa 990\nRear Camera	12 MP + 64 MP + 12 MP\nFront Camera	10 MP\nBattery	4300 mAh\nDisplay	6.7 inches"<<endl;
									break;
									default :
										cout<<"Wrong Choice "<<endl;
										
									}
	}
	else if(b>50000 && b<=70000){
		
			cout<<"1. Samsung Galaxy S20 Plus"<<endl;
		cout<<"2. Samsung Galaxy S20"<<endl;
		cout<<"3. Samsung Galaxy Note 10 Plus "<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
		;
		cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Samsung Galaxy S20 Plus : \n"<<endl;
									cout<<"Camera 12 MP + 64 MP + 12 MP Rear | 10 MP Front Camera \n Video Recording 4320p@24fps, 2160p@30/60fps, 1080p@30/60/240fps, 720p@960fps"<<endl;
									cout<<"\nNetwork \nDual SIM (LTE + LTE)\n 2G, 3G, 4G Network"<<endl;
									cout<<"Platform \nAndroid v10.0 Operating System \n Octa Core Samsung Exynos 990 Processor"<<endl;
									cout<<"Memory \n 8 GB RAM \nInternal Memory: 128 GB, Expandable Memory: up to 1 TB, microSD (uses SIM 2 slot)Battery 4500 mAh Battery"<<endl;
									break;
									
									
								case 2:
									cout<<"Samsung Galaxy S20"<<endl;
									cout<<"Camera\n 12 MP + 64 MP + 12 MP Rear | 10 MP Front Camera»Video Recording 4320p@24fps, 2160p@30/60fps, 1080p@30/60/240fps, 720p@960fp"<<endl;
									cout<<"Network\nDual SIM (LTE + LTE)\n2G, 3G, 4G Network"<<endl;
									cout<<""<<endl;
								/*case 2:
										
								case 2:
								
								
								case 2:	*/	
										
									default :
										cout<<"Wrong";
										
									}
	}
	else {
		cout<<"The Range Seleceted By User's Detials Are Yet To Be Found"<<endl;
	}
}
	void mobile::mi(int b){
		if(b>10000 && b<=20000)
		{
			cout<<"1. Xiaomi Redmi Note 10 Lite Rs 12,999 "<<endl;
			cout<<" 2. Xiaomi Redmi 10 Prime Rs 12,499 "<<endl;
			cout<<"3. Xiaomi Redmi Note 11T 5G (8GB RAM + 128GB) - Rs 17,999 "<<endl;
			cout<<"4. Xiaomi Redmi Note 11 Pro - Rs 17,990 "<<endl;
				cout<<"*************************************"<<endl;
					cout<<"*************************************"<<endl;
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Xiaomi Redmi Note 10 Lite Rs 12,999"<<endl;
									cout<<"Dual Sim, 3G, 4G, VoLTE, Wi-Fi, IR Blaster"<<endl;									cout<<"Snapdragon 720G, Octa Core, 2.3 GHz Processor"<<endl;
									cout<<"4 GB RAM, 64 GB inbuilt"<<endl;;
									cout<<"5020 mAh Battery with Fast Charging 6.67 inches, 1080 x 2400 px Display with Punch Hole 48 MP Quad Rear & 16 MP Front Camera";
									cout<<"Memory Card Supported, upto 512 GBc"<<endl;
									cout<<"Android v10.0"<<endl;
									break;
									
									
								case 2:
									cout<<"Xiaomi Redmi 10 Prime Rs 12,499"<<endl;
        							 cout<<"Dual Sim, 3G, 4G, VoLTE, Wi-Fi, IR Blaster Helio G88, Octa Core, 2 GHz Processor"<<endl;
									cout<<" 4 GB RAM, 64 GB inbuilt"<<endl;
									cout<<"6000 mAh Battery with Fast Charging"<<endl<<"6.5 inches, 1080 x 2400 px, 90 Hz Display with Punch Hole";
											cout<<"50 MP Quad Rear & 8 MP Front Camera"<<endl;
									cout<<"Memory Card Supported, upto 512 GB"<<endl;
										cout<<"Android v11";     
 								 break;
										
								case 3:
									cout<<" Xiaomi Redmi Note 11T 5G (8GB RAM + 128GB) - Rs 17,999 "<<endl;
									cout<<"Dual Sim, 3G, 4G, 5G, VoLTE, Wi-Fi, IR Blaster Dimensity 8"<<endl;							
									cout<<"10 5G, Octa Core, 2.4 GHz Processor8 GB RAM 128 GB inbuilt"<<endl;
										cout<<"5000 mAh Battery with Fast Charging"<<endl;
									cout<<"6.6 inches, 1080 x 2400 px, 90 Hz Display with Punch Hole 50 MP + 8 MP Dual Rear & 16 MP Front Camera"<<endl;
									cout<<"Memory Card Supported, upto 512 GB"<<endl;
									cout<<"Android v11"<<endl;;
								    break;
									
								case 4:
									cout<<"Xiaomi Redmi Note 11 Pro - Rs 17,990"<<endl;
        							 cout<<" Dual Sim, 3G, 4G, 5G, VoLTE, Wi-Fi, NFC, IR Blast 920, Octa Core, 2.5 GHz Processor \n 6 GB RAM, 128 GB inbuilt"<<endl;
									cout<<" 5160 mAh Battery with Fast Charging6.67 inches, 1080 x 2400 px, 120 Hz Display with Punch Hole"<<endl;
									cout<<" 108 MP + 8 MP + 2 MP Triple Rear & 16 MP Front Camera \n Android v11 \n Bluetooth"<<endl;
								    break;			
									default :
										cout<<"Wrong";
										
									}
			
		}
		else if(b>20000&& b<=30000)
		{
			   							cout<<"1. Xiaomi Mi 11 Lite NE 5G - Rs 24,548"<<endl;
			   							cout<<"2. Xiaomi Mi 11X 8GB RAM  - Rs.22,499 "<<endl;
			   							cout<<"3. Xiaomi Redmi K20 Pro - Rs.25,490 "<<endl;
			   							cout<<"4. Xiaomi Civi 5G - Rs 29690 "<<endl;
			   								cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Xiaomi Mi 11 Lite NE 5G"<<endl;
									cout<<" RAM	8 GB \n Processor	Qualcomm Snapdragon 778G \n Rear Camera	64 MP + 8 MP + 5 MP \nFront Camera	20 MP"<<endl;
									cout<<" Battery	4250 mAh \nDisplay	6.55 inches";
									break;
									
									
								case 2:
									cout<<"Xiaomi Mi 11X 8GB RAM  - Rs.22,499"<<endl;
        							 cout<<" RAM	8 GB \n Processor	Qualcomm Snapdragon 870 /n Rear Camera	48 MP + 8 MP + 5 MPFront Camera	20 MP\n Battery 	4520 mAh \n Display	6.67 inches";    
 								 break;
										
								case 3:
									cout<<" Xiaomi Redmi K20 Pro - Rs.25,490 "<<endl;
									cout<<" RAM	6 GB \n  Processor	Qualcomm Snapdragon 855 \n Rear Camera	48 MP + 13 MP + 8 MP Front Camera	20 MP \n Battery	4000 mAh \n Display	6.39 inche"<<endl;;
								    break;
									
								case 4:
									cout<<"Xiaomi Civi 5G - Rs 29690 "<<endl;
        							 cout<<" RAM	8 GB \n Processor	Qualcomm Snapdragon 778G \nRear Camera	64 MP + 8 MP + 2 MPFront Camera	32 MP \n Battery	4500 mAh \n Display	6.55 inches"<<endl;
								    break;			
									default :
										cout<<"Wrong";
										
									}
			   							
			   							
			   							
		}
		else if(b>30000 && b<=40000)
		{
									cout<<"1. Xiaomi Mi 10T Pro - Rs.33,977 "<<endl;
									cout<<"2. Xiaomi Mi 11X Pro - Rs.35,890"<<endl;
												cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Xiaomi Mi 10T Pro - Rs.33,977"<<endl;
									cout<<"RAM	8 GB \nProcessor	Qualcomm Snapdragon 778G \nRear Camera	64 MP + 8 MP + 5 MP \nFront Camera	20 MP"<<endl;
									cout<<"Battery	4250 mAh \nDisplay	6.55 inches"<<endl;
									break;
									
									
								case 2:
									cout<<"Xiaomi Mi 11X Pro - Rs.35,890"<<endl;
        							 cout<<" RAM	8 GB \n Processor	Qualcomm Snapdragon 888Rear \n Camera	108 MP + 8 MP + 5 MPFront Camera	20 MP \n Battery	4520 mAh \n Display	6.67 inches"<<endl;    
 								 break;
										
									default :
										cout<<"Wrong";
										
									}
									
									
		}
		else if(b>40000&& b<=120000)
		{
		
			cout<<"1. Xiaomi Redmi K40 Pro Plus - Rs.41,690"<<endl;
			cout<<"2. Xiaomi Mi Mix Fold - Rs.111,790"<<endl;
			cout<<"3. Xiaomi Mi 11 Ultra - Rs.69,999 "<<endl;
				cout<<"*************************************"<<endl;
					cout<<"*************************************"<<endl;
								cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Xiaomi Redmi K40 Pro Plus - Rs.41,690"<<endl;
									cout<<" RAM	12 GB /n Processor	Qualcomm Snapdragon 888 /n Rear Camera	108 MP + 8 MP + 5 MPFront Camera	20 MP /n Battery	4520 mAh /n Display	6.67 inches"<<endl;
									
									break;
									
									
								case 2:
									cout<<"Xiaomi Mi 11X Pro - Rs.35,890"<<endl;
        							 cout<<" RAM	12 GB \n Processor	Qualcomm Snapdragon 888\n Rear Camera	108 MP + 8 MP + 13 MPFront Camera	20 MP \n Battery	5020 mAh \n Display	8 inches"<<endl;    
 								 break;
 								 case 3:
									cout<<" Xiaomi Mi 11 Ultra - Rs.69,999"<<endl;
        							 cout<<" RAM	12 GB \n Processor	Qualcomm Snapdragon 888 \n Rear Camera	50 MP + 48 MP + 48 MpFront Camera	20 MP\n Battery	5000 mAh \n Display	6.81 inches"<<endl;    
 								 break;
										
									default :
										cout<<" Wrong Choice ";
										
									}
			
		}
		else{
			cout<<"Information further will be avaiable once the Mobiles are lanuced "<<endl;
		}
		
	}
	void mobile::apple(int b){
		
		if( b>30000 && b<=40000 ){
		cout<<"1. Apple iPhone SE 2020 128GB - Rs. 35,199."<<endl;
		cout<<"2. Apple iPhone 8 - Rs. 38,999"<<endl;
		
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"1. Apple iPhone SE 2020 128GB - Rs. 35,199. "<<endl;
									cout<<"RAM	3 GB\nProcessor	Apple A13 Bionic\nRear Camera	12 MP\nFront Camera	7 MP\nBattery	1821 mAh\nDisplay	4.7 inches"<<endl;
									break;
								case 2:
									cout<<"2. Apple iPhone 8 - Rs. 38,999 "<<endl;
									cout<<"RAM	2 GB\nProcessor	Apple A11 Bionic\nRear Camera	12 MPFront Camera	7 MP\nBattery	1821 mAh\nDisplay	4.7 inches"<<endl;	
									break;
							
										default :
										cout<<"Wrong Choice ";
								}
	}
else if (b>40000 && b<=60000)
{
		cout<<"1. Apple iPhone 11 - Rs.49,900"<<endl;
		cout<<"2. Apple iPhone 12 - Rs.Rs.54,199"<<endl;
		
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"1. Apple iPhone 11 - Rs.49,900 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A13 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	3110 mAh\nDisplay	6.1 inches"<<endl;
									break;
								case 2:
									cout<<"2. Apple iPhone 12 - Rs.Rs.54,199 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A14 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	2815 mAh\nDisplay	6.1 inches"<<endl;	
									break;
							
										default :
										cout<<"Wrong Choice ";
								}
}
else if (b>60000 && b<=80000)
{
		cout<<"1. Apple iPhone 13 Mini -Rs.69,900"<<endl;
		cout<<"2. Apple iPhone 11 256GB -Rs.74,895"<<endl;
		cout<<"3. Apple iPhone 12 256GB -Rs. 80,900"<<endl;;
		
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"1. Apple iPhone 13 Mini -Rs.69,900 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A15 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	2406 mAh\nDisplay	5.4 inches"<<endl;
									break;
								case 2:
									cout<<"2. Apple iPhone 11 256GB -Rs.74,895 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A13 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	3110 mAh\nDisplay	6.1 inches"<<endl;	
									break;
								case 3:
									cout<<"3. Apple iPhone 12 256GB -Rs. 80,900 "<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A14 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	2815 mAh\nDisplay	6.1 inches"<<endl;	
									break;
							
										default :
										cout<<"Wrong Choice ";
								}
}
else if (b>80000 && b<=100000)
{
		cout<<"1. Apple iPhone XS - Rs.89,900"<<endl;
		cout<<"2. Apple iPhone 11 Pro Max 512GB - Rs.88,700"<<endl;
		cout<<"3. Apple iPhone XR 256GB - Rs.91,900"<<endl;;
		
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"1. Apple iPhone XS - Rs.89,900"<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A12 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	7 MP\nBattery	2658 mAh\nDisplay	5.8 inches"<<endl;
									break;
								case 2:
									cout<<"2. Apple iPhone 11 Pro Max 512GB - Rs.88,700 "<<endl;
									cout<<"RAM	4 GBProcessor	Apple A13 Bionic\nRear Camera	12 MP + 12 MP + 12 MP\nFront Camera	12 MP\nBattery	3969 mAh\nDisplay	6.5 inches"<<endl;	
									break;
								case 3:
									cout<<"3. Apple iPhone XR 256GB - Rs.91,900 "<<endl;
									cout<<"RAM	3 GB\nProcessor	Apple A12 Bionic\nRear Camera	12 MP\nFront Camera	7 MP\nBattery	2942 mAh\nDisplay	6.1 inches"<<endl;	
									break;
							
										default :
										cout<<"Wrong Choice ";
								}
}
	else if (b>100000 && b<=150000)
{
		cout<<"1. Apple iPhone 13 Mini 512GB - Rs.99,900"<<endl;
		cout<<"2. Apple iPhone 13 Pro Max - Rs. 129,900"<<endl;
		cout<<"3. Apple iPhone 13 Pro - Rs. 119,900( onwards )"<<endl;;
		
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"1. Apple iPhone 13 Mini 512GB - Rs.99,900"<<endl;
									cout<<"RAM	4 GB\nProcessor	Apple A15 Bionic\nRear Camera	12 MP + 12 MP\nFront Camera	12 MP\nBattery	2406 mAh\nDisplay	5.4 inches"<<endl;
									break;
								case 2:
									cout<<"2. Apple iPhone 13 Pro Max - Rs. 129,900"<<endl;
									cout<<"RAM	6 GBProcessor	Apple A15 Bionic\nRear Camera	12 MP + 12 MP + 12 MP\nFront Camera	12 MP\nBattery	4352 mAh\nDisplay	6.7 inches"<<endl;	
									break;
								case 3:
									cout<<"3. Apple iPhone 13 Pro - Rs. 119,900( onwards )"<<endl;
									cout<<"RAM	6 GB\nProcessor	Apple A15 Bionic\nRear Camera	12 MP + 12 MP + 12 MP\nFront Camera	12 MP\nBattery	3095 mAh\nDisplay	6.1 inches"<<endl;	
									break;
							
										default :
										cout<<"Wrong Choice ";
								}
							}
								else{
									cout<<"Details are Yet To be Found"<<endl;
								}
	

	}
void mobile::oppo(int b) //DISPLAYING THE LIST OF OPPO SMARTPHONES
    {
        if(b>10000 && b<=20000){
		cout<<"1: OPPO F17           PRICE-16294 "<<endl;
		cout<<"2: OPPO F15           PRICE-18990 "<<endl;
		cout<<"3: OPPO A74 5G        PRICE-17990 "<<endl;		
		cout<<"4: OPPO F17 Pro       PRICE-19990 "<<endl;	
        cout<<"5: OPPO F19 PRO       PRICE-19990 "<<endl;
			cout<<"*************"<<endl;
				cout<<"*************"<<endl;	
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"OPPO F17           PRICE-16294"<<endl;
									cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 662 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 16MP+8MP+2MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4015mah \n OS:ANDROID 10";
									break;
									
									
								case 2:
									cout<<"OPPO F15           PRICE-18990"<<endl;
         cout<<"DISPLAY: 6.4-inch (1080*2400)\n PROCESSOR:MediaTek Helio P70 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+2MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4000mah \n OS:ANDROID 9";     
 								 break;
										
								case 3:
									cout<<"OPPO A74 5G        PRICE-17990 "<<endl;
         cout<<"DISPLAY: 6.5-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 480 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 48MP+2MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:5000mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"OPPO F17 Pro       PRICE-19990"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Helio P95 \n FRONT CAMERA:16MP+2MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+2MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4015mah \n OS:ANDROID 10";
								    break;

                                case 5:
                                    cout<<"OPPO F19 Pro       PRICE-19990"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Helio P95 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+2MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:43100mah \n OS:ANDROID 11";
								    break;			
									default :
										cout<<"Wrong";
										
									}
	}
	else  if( b>20000 && b<=40000 ){
		cout<<"1: OPPO Reno3             Price-29990"<<endl;
		cout<<"2: OPPO Reno6 5G          Price-29899"<<endl;
		cout<<"3: OPPO Reno 2Z           Price-29990"<<endl;
		cout<<"4: OPPO Reno6 Pro 5G      Price-35984"<<endl;
		cout<<"5: OPPO Reno 10x Zoom     Price-39600"<<endl;
			cout<<"*************"<<endl;
				cout<<"*************"<<endl;
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"OPPO Reno3             Price-29990 "<<endl;
									cout<<"DISPLAY: 6.4-inch (1080*2400)\n PROCESSOR:MediaTek Helio P90  \n FRONT CAMERA:44MP \n ";
									cout<<"REAR CAMERA: 48MP+13MP+8MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4025mah \n OS:ANDROID 10"<<endl;
									break;
									
									
								case 2:
									cout<<"OPPO Reno6 5G          Price-29899"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Dimensity 900 MT6877 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 64MP+8MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
								    break;
										
								case 3:
									cout<<"OPPO Reno 2Z           Price-29990"<<endl;
         cout<<"DISPLAY: 6.5-inch (1080*2400)\n PROCESSOR:MediaTek Helio P90 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+2MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4000mah \n OS:ANDROID 9"<<endl;
								    break;
									
								case 4:
									cout<<"OPPO Reno6 Pro 5G      Price-35984"<<endl;
         cout<<"DISPLAY: 6.55-inch (1440*3120)\n PROCESSOR:MediaTek Dimensity 1200 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 64MP+8MP+2MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
								    break;	
								    		
								case 5:
									cout<<"OPPO Reno 10x Zoom     Price-39600"<<endl;
									cout<<"DISPLAY: 6.6-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n "<<endl;
									cout<<"REAR CAMERA: 48MP+13MP+8MP \n RAM AND STORAGE: 8GB ,256GB \n BATTERY:4065mah \n OS:ANDROID 9"<<endl;;

								    break;	
											
									default :
										cout<<"Wrong";
										
									}
	}
 }
	void mobile::oneplus(int b)//displaying list of oneplus mobiles
{
	if(b>=20000 && b<=30000){
		cout<<"1: Oneplus Nord CE 5G PRICE-22999  "<<endl;
		cout<<"2: Oneplus Nord       PRICE-24999 "<<endl;
		cout<<"3: Oneplus Nord 2     PRICE-27999 "<<endl;		
		cout<<"4: Oneplus 7          PRICE-29999 "<<endl;	
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;	
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"Oneplus Nord CE 5G PRICE-22999"<<endl;
									cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 750G \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 64MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
									break;
									
									
								case 2:
									cout<<"Oneplus Nord PRICE-24999"<<endl;
         cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 765G \n FRONT CAMERA:32MP+8MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4115mah \n OS:ANDROID 10";     
 								 break;
										
								case 3:
									cout<<"Oneplus Nord 2 PRICE-24999"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Dimensity 1200 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 50MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"Oneplus 7 PRICE-24999"<<endl;
         cout<<"DISPLAY: 6.41-inch (1080*2340)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+5MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:3700mah \n OS:ANDROID 9Pie";
								    break;			
									default :
										cout<<"Wrong";
										
									}
	}
	else  if( b>30000 && b<=40000 ){
		cout<<"1: Oneplus 7T   Price-34999"<<endl;
		cout<<"2: Oneplus 9R   Price-36999"<<endl;
		cout<<"3: Oneplus 8T   Price-38999"<<endl;
		cout<<"4: Oneplus 7PRO Price-38999"<<endl;
		cout<<"5: Oneplus 8    Price-39999"<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: Oneplus 7T   Price-34999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 855+ \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+12MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:3800mah \n OS:ANDROID 10"<<endl;
									break;
									
									
								case 2:
									cout<<"2: Oneplus 9R   Price-36999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 870 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
								    break;
										
								case 3:
									cout<<"3: Oneplus 8T   Price-38999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
								    break;
									
								case 4:
									cout<<"4: Oneplus 7PRO Price-38999"<<endl;
         cout<<"DISPLAY: 6.67-inch (1440*3120)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+16MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4000mah \n OS:ANDROID 9.0 Pie"<<endl;
								    break;	
								    		
								case 5:
									cout<<"5: Oneplus 8    Price-39999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n "<<endl;
									cout<<"REAR CAMERA: 48MP+16MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4300mah \n OS:ANDROID 10"<<endl;;

								    break;	
											
									default :
										cout<<"Wrong";
										
									}
	}
	else if(b>40000&& b<=50000){
		cout<<"1: Oneplus 8T cyberpunk edition  Price-44500"<<endl;
		cout<<"2: Oneplus 9                     Price-46999"<<endl;
		cout<<"3: Oneplus 8PRO                  Price-48999"<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: Oneplus 8T cyberpunk edition  Price-44500"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+8MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
									break;
									
									
								case 2:
									cout<<"2: Oneplus 9                     Price-46999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 888 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+50MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;

								    break;
										
								case 3:
									cout<<"3: Oneplus 8PRO                  Price-48999"<<endl;
									cout<<"DISPLAY: 6.78-inch (1440*3168)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+48MP+5MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4510mah \n OS:ANDROID 10"<<endl;

								    break;
									
								
											
									default :
										cout<<"Wrong";
										
									}
	}
	else if(b>50000 && b<=60000 ){
		
	cout<<"1: Oneplus 7T PRO                  Price-53999"<<endl;	
	cout<<"2: Oneplus 7T PRO McLaren edition  Price-58999"<<endl;
		cout<<"*************************************"<<endl;
			cout<<"*************************************"<<endl;
		
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: Oneplus 7T PRO    Price-53999"<<endl;
									cout<<"DISPLAY: 6.67-inch (1440*3120)\n PROCESSOR:Qualcomm Snapdragon 855+ \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+8MP \n RAM AND STORAGE: 8GB ,256GB \n BATTERY:4085mah \n OS:ANDROID 10"<<endl;
									break;
									
									
								case 2:
									cout<<"2: Oneplus 7T PRO McLaren edition  Price-58999"<<endl;
									cout<<"DISPLAY: 6.67-inch (1440*3120)\n PROCESSOR:Qualcomm Snapdragon 855+ \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+8MP \n RAM AND STORAGE: 8GB ,256GB \n BATTERY:4085mah \n OS:ANDROID 10"<<endl;

								    break;
										
							
											
									default :
										cout<<"Wrong";
										
									}
	}
	else if(b>60000 && b<=70000){
		
	cout<<"1: Oneplus 9PRO PRICE-60999";
	cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: Oneplus 9PRO PRICE-60999"<<endl;
									cout<<"DISPLAY: 6.70-inch (1440*3216)\n PROCESSOR:Qualcomm Snapdragon 888 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+50MP+8MP \n RAM AND STORAGE: 8GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;
									break;			
									default :
										cout<<"Wrong";
										
									}
	}
	else {
		cout<<"The Range Seleceted By User's Detials Are Yet To Be Found"<<endl;
	}
}
	void mobile::vivo(int b)
	{
	
	  if(b>=10000 && b<=20000){
	 cout<<"1: VIVO Y20i      PRICE-Rs 12490 "<<endl; 	
		cout<<"2: VIVO Y93 (64GB)PRICE- Rs 13000 "<<endl;
		cout<<"3: VIVO Y20       PRICE-Rs 13990 "<<endl;		
		cout<<"4: VIVO Y20T      PRICE-Rs 15458 "<<endl;
		cout<<"5: VIVO Y33s      PRICE-Rs 18000 "<<endl;		
		cout<<"6: VIVO Y20 SE    PRICE-Rs 19000 "<<endl;	
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;	
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"VIVO Y20i      PRICE-12490"<<endl;
									cout<<"DISPLAY: 6.51-inch (720*1600)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP+2MP \n RAM AND STORAGE: 3GB ,64GB \n BATTERY:5000mah \n OS:ANDROID 10"<<endl;
									break;
									
									
								case 2:
									cout<<"VIVO Y93 (64GB)PRICE-13000"<<endl;
									cout<<"DISPLAY: 6.20-inch (720*1580)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP \n RAM AND STORAGE: 3GB ,64GB \n BATTERY:4030mah \n OS:ANDROID 8.1 Oreo"<<endl;

								    break;
										
								case 3:
									cout<<"VIVO Y20       PRICE-13990"<<endl;
									cout<<"DISPLAY: 6.51-inch (720*1600)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP+2MP \n RAM AND STORAGE: 4GB ,64GB \n BATTERY:5000mah \n OS:ANDROID 10"<<endl;

								    break;
									
								case 4:
									cout<<"VIVO Y20T      PRICE-15458"<<endl;
									cout<<"DISPLAY: 6.51-inch (720*1600)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP+2MP \n RAM AND STORAGE: 6GB ,64GB \n BATTERY:5000mah \n OS:ANDROID 11"<<endl;
         
								    break;
								case 5:
									cout<<"VIVO Y33s      PRICE-18000"<<endl;
									cout<<"DISPLAY: 6.58-inch (1080*2408)\n PROCESSOR:MediaTek Helio G80 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 50MP+2MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:5000mah \n OS:ANDROID 11"<<endl;
         
								    break;		
								case 6:
									cout<<"VIVO Y20 SE    PRICE-19000"<<endl;
									cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 665 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4100mah \n OS:ANDROID 10"<<endl;
         
								    break;													
									default :
										
										cout<<"Wrong";
										
									}
									}else  if(b>5000 && b<10000){
	 cout<<"1: VIVO Y91i      PRICE-7920 "<<endl; 	
		cout<<"2: VIVO U10       PRICE-8990 "<<endl;
		cout<<"3: VIVO Y3s       PRICE-9490 "<<endl;		
		cout<<"4: VIVO Y12s      PRICE-9599 "<<endl;
		cout<<"5: VIVO Y11       PRICE-9450 "<<endl;		
		cout<<"6: VIVO Y91       PRICE-9600 "<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
						
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"VIVO Y91i      PRICE-7920"<<endl;
									cout<<"DISPLAY: 6.22-inch (720*1520)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:5MP \n ";
									cout<<"REAR CAMERA: 13MP \n RAM AND STORAGE: 2GB ,16GB \n BATTERY:4030mah \n OS:ANDROID 8.1"<<endl;
									break;
									
									
								case 2:
									cout<<"VIVO U10       PRICE-8990"<<endl;
									cout<<"DISPLAY: 6.35-inch (720*1544)\n PROCESSOR:Qualcomm Snapdragon 665 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+8MP+2MP \n RAM AND STORAGE: 3GB ,32GB \n BATTERY:5000mah \n OS:ANDROID 9 Pie"<<endl;

								    break;
										
								case 3:
									cout<<"VIVO Y3s       PRICE-9490"<<endl;
									cout<<"DISPLAY: 6.35-inch (720*1544)\n PROCESSOR:MediaTek Helio P35 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP+ \n RAM AND STORAGE: 4GB ,128GB \n BATTERY:5000mah \n OS:ANDROID 9 Pie"<<endl;

								    break;
									
								case 4:
									cout<<"VIVO Y12s      PRICE-9599"<<endl;
									cout<<"DISPLAY: 6.51-inch (720*1600)\n PROCESSOR:Qualcomm Snapdragon 439 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP \n RAM AND STORAGE: 3GB ,32GB \n BATTERY:5000mah \n OS:ANDROID 10"<<endl;
         
								    break;
								case 5:
									cout<<"VIVO Y11       PRICE-9450"<<endl;
									cout<<"DISPLAY: 6.35-inch (720*1544)\n PROCESSOR:Qualcomm Snapdragon 439 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP \n RAM AND STORAGE: 3GB ,32GB \n BATTERY:5000mah \n OS:ANDROID 9 Pie"<<endl;
         
								    break;		
								case 6:
									cout<<"VIVO Y91       PRICE-9600"<<endl;
									cout<<"DISPLAY: 6.22-inch (720*1520)\n PROCESSOR:MediaTek Helio P22 \n FRONT CAMERA:8MP \n ";
									cout<<"REAR CAMERA: 13MP+2MP \n RAM AND STORAGE: 2GB ,32GB \n BATTERY:4030mah \n OS:ANDROID 8.1"<<endl;
         
								    break;													
									default :
										
										cout<<"Wrong";
										
									}
	}
	else if(b>20000 && b<=30000){
	 cout<<"1: VIVO x21       PRICE-21500 "<<endl; 	
		cout<<"2: VIVO Z3i       PRICE-23990"<<endl;
		cout<<"3: VIVO v17 PRO   PRICE-25000 "<<endl;		
		cout<<"4: VIVO X21s      PRICE-26000 "<<endl;
		cout<<"5: VIVO S5        PRICE-28490 "<<endl;		
		cout<<"6: VIVO X50       PRICE-29150 "<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;		
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"VIVO x21       PRICE-21500"<<endl;
							  cout<<"DISPLAY: 6.28-inch (1080*2280)\n PROCESSOR:Qualcomm Snapdragon 660 \n FRONT CAMERA:12MP \n ";
									cout<<"REAR CAMERA: 12MP+5MP \n RAM AND STORAGE: 6GB ,64GB \n BATTERY:3200mah \n OS:ANDROID 8.1"<<endl;
									break;
									
									
								case 2:
									cout<<"VIVO Z3i       PRICE-23990"<<endl;
									cout<<"DISPLAY: 6.30-inch (1080*2280)\n PROCESSOR:MediaTek Helio P60 \n FRONT CAMERA:24MP \n ";
									cout<<"REAR CAMERA: 16MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:3315mah \n OS:ANDROID 8.1 Oreo"<<endl;

									

								    break;
										
								case 3:
									cout<<"VIVO v17 PRO   PRICE-25000"<<endl;
									cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 675 \n FRONT CAMERA:32MP+8MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+13MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4100mah \n OS:ANDROID 9Pie"<<endl;
								    break;
									
								case 4:
									cout<<"VIVO X21s      PRICE-26000"<<endl;
         cout<<"DISPLAY: 6.41-inch (1080*2340)\n PROCESSOR:Qualcomm Snapdragon 660 \n FRONT CAMERA:12MP \n ";
									cout<<"REAR CAMERA: 12MP+5MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:3400mah \n OS:ANDROID 8.1 Oreo"<<endl;

								    break;
								case 5:
									cout<<"VIVO S5        PRICE-28490"<<endl;
									cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 712 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 4MP+8MP+2MP+5MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4100mah \n OS:ANDROID 8.1 Oreo"<<endl;

         
								    break;		
								case 6:
									cout<<"VIVO X50       PRICE-29150"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2376)\n PROCESSOR:Qualcomm Snapdragon 730 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 4MP+8MP+13MP+5MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4200mah \n OS:ANDROID 10";

         
								    break;													
									default :
										
										cout<<"Wrong";
										
									}
	} else if(b>30000 && b<=50000){
	 cout<<"1: VIVO X30 5G    PRICE-32500 "<<endl; 	
		cout<<"2: VIVO X60       PRICE-34990"<<endl;
		cout<<"3: VIVO X50 PRO   PRICE-37990 "<<endl;		
		cout<<"4: VIVO X60 PRO   PRICE-46990 "<<endl;
		cout<<"5: VIVO X70 PRO   PRICE-49990 "<<endl;	
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;			
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"VIVO X30 5G    PRICE-32500"<<endl;
									cout<<"DISPLAY: 6.50-inch (1080*2400)\n PROCESSOR:Samsung Exynos 980 \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 64MP+32MP+8MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4350mah \n OS:ANDROID 9Pie"<<endl;
									break;
									
									
								case 2:
									cout<<"VIVO X60       PRICE-34990"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 870 \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 48MP+13MP+13MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4300mah \n OS:ANDROID 11"<<endl;

								    break;
										
								case 3:
									cout<<"VIVO X50 PRO   PRICE-37990"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 765G \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 48MP+13MP+13MP+8MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4315mah \n OS:ANDROID 10"<<endl;

								    break;
									
								case 4:
									cout<<"VIVO X60 PRO   PRICE-46990"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2376)\n PROCESSOR:Qualcomm Snapdragon 870 \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 48MP+13MP+13MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4200mah \n OS:ANDROID 11"<<endl;
         
								    break;
								case 5:
									cout<<"VIVO X70 PRO   PRICE-49990"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2376)\n PROCESSOR:MediaTek Dimensity 1200 \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 50MP+12MP+12MP+8MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4450mah \n OS:ANDROID 11"<<endl;
         
								    break;												
									default :
										
										cout<<"Wrong";
										
									}
	}else if(b>60000 && b<=80000){
		cout<<"vivo X60 pro+  PRICE-60900";
		cout<<"vivo X70 pro+  PRICE-79990";
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
		cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"vivo X60 pro+  PRICE-60900"<<endl;
									cout<<"DISPLAY: 6.56-inch (1080*2376)\n PROCESSOR:Qualcomm Snapdragon 888 \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 50MP+48MP+32MP+8MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4200mah \n OS:ANDROID 11"<<endl;
									break;
									
									
								case 2:
									cout<<"vivo X70 pro+  PRICE-79990"<<endl;
									cout<<"DISPLAY: 6.78-inch (1440*3200)\n PROCESSOR:Qualcomm Snapdragon 888+ \n FRONT CAMERA:32MP\n ";
									cout<<"REAR CAMERA: 50MP+48MP+12MP+8MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11"<<endl;

								    break;												
									default :
										
										cout<<"Wrong";
										
									}
		
	}
	else {
		cout<<"The Range Seleceted By User's Detials Are Yet To Be Found"<<endl;
	}
	
		
	}
void mobile::realme(int b)//displaying list of REALME mobiles
{
	if(b>=20000 && b<=30000){
		cout<<"1: REALME GT MONSTAR EDITION 5G PRICE-25890  "<<endl;
		cout<<"2: REALME X7 MAX                PRICE-26840 "<<endl;
		cout<<"3: REALME GT 5                  PRICE-28999 "<<endl;		
		cout<<"4: REALME X7                    PRICE-21839 "<<endl;	
                    cout<<"*************"<<endl;
	                cout<<"*************"<<endl;	
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<"REALME GT MONSTAR EDITION 5G PRICE-25890"<<endl;
									cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 778G \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 64MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
									break;
									
									
								case 2:
									cout<<"REALME G7 MAX PRICE-26840"<<endl;
         cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 765G \n FRONT CAMERA:32MP+8MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4115mah \n OS:ANDROID 10";     
 								 break;
										
								case 3:
									cout<<"REALME GT 5 PRICE-28999"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Dimensity 1200 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 50MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"REALME X7 PRICE-21839"<<endl;
         cout<<"DISPLAY: 6.41-inch (1080*2340)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+5MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:3700mah \n OS:ANDROID 9Pie";
								    break;			
									default :
										cout<<"Wrong";
										
									}
	}
	else  if( b>30000 && b<=40000 ){
		cout<<"1: REALME GT  NEO 2 5G                     Price-34999"<<endl;
		cout<<"2: REALME X2 PRO                           Price-31999"<<endl;
		cout<<"3: REALME X50 PRO                          Price-39999"<<endl;
		cout<<"4: REALME GT MASTER EXPLORER EDITION       Price-32999"<<endl;
		cout<<"5: REALME GT 5G                            Price-39999"<<endl;
                     cout<<"*************"<<endl;
				cout<<"*************"<<endl;
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: REALME GT  NEO 2 5G    Price-34999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 855+ \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+12MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:3800mah \n OS:ANDROID 10";
									break;
									
									
								case 2:
									cout<<"2: REALME X2 PRO    Price-31999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 870 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
										
								case 3:
									cout<<"3: REALME X50 PRO    Price-39999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"4: REALME GT MASTER EXPLORER EDITION  Price-32999"<<endl;
         cout<<"DISPLAY: 6.67-inch (1440*3120)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+16MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4000mah \n OS:ANDROID 9.0 Pie";
								    break;	
								    		
								case 5:
									cout<<"5: REALME GT 5G      Price-39999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4300mah \n OS:ANDROID 10";

								    break;	
											
									default :
										cout<<"Wrong";
										
									}
	
	}
	else {
		cout<<"The Range Seleceted By User's Detials Are Yet To Be Found"<<endl;
	}
}		
void mobile::iq(int b)//displaying list of IQOO mobiles
{
	if(b>=20000 && b<=30000){
		cout<<"1: IQOO Z5 5G          PRICE-23990 "<<endl;
		cout<<"2: IQOO NEO 5 5G       PRICE-27890 "<<endl;
		cout<<"3: IQOO NEO 5 SE 5G    PRICE-26199 "<<endl;		
		cout<<"4: IQOO Z1             PRICE-23499 "<<endl;	
                    cout<<"*************"<<endl;
	                cout<<"*************"<<endl;	
		
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
							cin>>sr;
							switch(sr){
								case 1:
									cout<<" IQOO Z5 5G          PRICE-23990"<<endl;
									cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 778G \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 64MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
									break;
									
									
								case 2:
									cout<<" IQOO NEO 5 5G       PRICE-27890"<<endl;
         cout<<"DISPLAY: 6.44-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 765G \n FRONT CAMERA:32MP+8MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4115mah \n OS:ANDROID 10";     
 								 break;
										
								case 3:
									cout<<" IQOO NEO 5 SE 5G    PRICE-26199"<<endl;
         cout<<"DISPLAY: 6.43-inch (1080*2400)\n PROCESSOR:MediaTek Dimensity 1200 \n FRONT CAMERA:32MP \n ";
									cout<<"REAR CAMERA: 50MP+8MP+2MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"IQOO Z1             PRICE-23499"<<endl;
         cout<<"DISPLAY: 6.41-inch (1080*2340)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+5MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:3700mah \n OS:ANDROID 9Pie";
								    break;			
									default :
										cout<<"Wrong";
										
									}
	}
	else  if( b>30000 && b<=40000 ){
		cout<<"1: IQOO 7                     Price-31999"<<endl;
		cout<<"2: IQOO 7 LEGEND              Price-37999"<<endl;
		cout<<"3: IQOO 3                     Price-34999"<<endl;
		cout<<"4: IQOO NEO 5S                Price-32199"<<endl;
		cout<<"5: IQOO 7 256GB               Price-33999"<<endl;
                     cout<<"*************"<<endl;
				cout<<"*************"<<endl;
	
			cout<<"\nEnter The Serial Number Of The Smart Phone That You Wish tO See :";
						cin>>sr;
							switch(sr){
								case 1:
									cout<<"1: IQOO 7    Price-31999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 855+ \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+12MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:3800mah \n OS:ANDROID 10";
									break;
									
									
								case 2:
									cout<<"2: IQOO 7 LEGEND    Price-37999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 870 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 8GB ,128GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
										
								case 3:
									cout<<"3: IQOO 3    Price-34999"<<endl;
         cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+5MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4500mah \n OS:ANDROID 11";
								    break;
									
								case 4:
									cout<<"4: IQOO NEO 5S Price-32199"<<endl;
         cout<<"DISPLAY: 6.67-inch (1440*3120)\n PROCESSOR:Qualcomm Snapdragon 855 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+8MP+16MP \n RAM AND STORAGE: 6GB ,128GB \n BATTERY:4000mah \n OS:ANDROID 9.0 Pie";
								    break;	
								    		
								case 5:
									cout<<"5: IQOO 7 256 GB      Price-33999"<<endl;
									cout<<"DISPLAY: 6.55-inch (1080*2400)\n PROCESSOR:Qualcomm Snapdragon 865 \n FRONT CAMERA:16MP \n ";
									cout<<"REAR CAMERA: 48MP+16MP+2MP \n RAM AND STORAGE: 12GB ,256GB \n BATTERY:4300mah \n OS:ANDROID 10";

								    break;	
											
									default :
										cout<<"Wrong";
										
									}
	
	}
	else {
		cout<<"The Range Seleceted By User's Detials Are Yet To Be Found"<<endl;
	}
}

int main()
{

mobile ob;
do{
	
	ob.brandname();
	cout<<"\n Do You Want To Continue 1/0 :";
	cin>>d;
}
while(d!=0);
	cout<<"*************************************"<<endl;
		cout<<"*************************************"<<endl;
			cout<<"*************************************"<<endl;
				cout<<"*************************************"<<endl;
				
cout<<"Enter 0 to Exit Program :"<<endl;
cin>>c;
 
    

return 0;
}

