#include<bits/stdc++.h>
#define BENCH_MARK_SCORE 14
using namespace std;

//Parking Class
class Parking
{
    private:
    
    bool is_full;
    int parking_lot_id;
    string vehicle_type;
    //two wheeler and four wheeler.
    
    public:
    void setParkingDetails(int id,string vehicle_type)
    {
        this->parking_lot_id=id;
        this->vehicle_type=vehicle_type;
        cout<<"The Parking Details are:\n"<<endl;
        time_t rawtime;
        struct tm * timeinfo;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        // printf ( "Current local time and date: %s", asctime (timeinfo) );
        showParkingDetails(id,vehicle_type,timeinfo);
    }
    
    void showParkingDetails(int id,string vehicle_type,struct tm* timeinfo)
    {
        cout<<"Parking ID: "<<id<<endl;
        cout<<"Vehicle Type: "<<vehicle_type<<endl;
        cout<<"TimeStamp: "<<asctime(timeinfo)<<endl;
    }
    
    void ParkingRates()
    {
        
        cout<<"----------FOUR WHEELER VEHICLES------------"<<endl;
        cout<<"1hr-3hr"<<":100 INR"<<endl;
        cout<<"3hr-6hr"<<":400 INR"<<endl;
        cout<<"6hr and Above"<<":800 INR"<<endl;
        cout<<endl;
        cout<<endl;
        
        cout<<"----------TWO WHEELER VEHICLES------------"<<endl;
        cout<<"1hr-3hr"<<":50 INR"<<endl;
        cout<<"3hr-6hr"<<":100 INR"<<endl;
        cout<<"6hr and Above"<<":400 INR"<<endl;
        
        
    }
     void BillGeneration()
     {
         int parking_time;
         string promo_code;
         bool Vehicle_stats=true;
         int Vehicle_type;
         cout<<"------------------------BILL GENERATION------------------------\n";
         ParkingRates();
         cout<<"Enter the Type of Vehicle(0:Two Wheeler,1:Four Wheeler):\n"<<endl;
         cin>>Vehicle_type;
         if(Vehicle_type==0)
         {
             Vehicle_stats=false;
         }
         cout<<"Enter the Number of Parking Hours :\n"<<endl;
         cin>>parking_time;
         cout<<"Enter Promo Coupon Code (if Available/if not Avaiable(Enter NA)):\n";
         cin>>promo_code;
         int choice=0;
         if(promo_code=="NA")
         {
             choice=0;
         }
         else
         {
             choice=1;
         }
         int dis_bill=0;
         int bill=0;
         
         switch(choice)
         {
            case 0:if(Vehicle_stats==false)
                   {
                      if(parking_time>=1 && parking_time<=3)
                      {
                       bill=100;
                      }
                      else if(parking_time>=4 && parking_time<=6)
                      {
                       bill=400;
                      }
                      else if(parking_time>=6)
                      {
                       bill=800;
                      }
                      
                      cout<<"Final Bill is : "<<bill<<endl;
                      cout<<"Hope to see you soon,Thank You."<<endl;
                       
                   }
                  
                  else
                   {
                      if(parking_time>=1 && parking_time<=3)
                      {
                       bill=50;
                      }
                      else if(parking_time>=4 && parking_time<=6)
                      {
                       bill=100;
                      }
                      else if(parking_time>=6)
                      {
                       bill=400;
                      }
                         cout<<endl;
                      cout<<"Final Bill is : "<<bill<<endl;
                      cout<<"Hope to see you soon,Thank You."<<endl;
                       
                   }
                    break;
            case 1:
            if(Vehicle_stats==false)
                   {
                      if(parking_time>=1 && parking_time<=3)
                      {
                       bill=100;
                      }
                      else if(parking_time>=4 && parking_time<=6)
                      {
                       bill=400;
                      }
                      else if(parking_time>=6)
                      {
                       bill=800;
                      }
                      cout<<"Promo Code is Applied!!!!!"<<endl;
                      
                         
                      cout<<"Final Bill is : "<<bill<<endl;
                      
                      cout<<"Discount Applied!!!!"<<endl;
                      
                      int dis_bill=bill-10;
                      
                      cout<<"New Bill after Applying Discount is: "<<dis_bill<<endl;
                      cout<<"Hope to see you soon,Thank You."<<endl;
                       
                   }
                  
                  else
                   {
                      if(parking_time>=1 && parking_time<=3)
                      {
                       bill=50;
                      }
                      else if(parking_time>=4 && parking_time<=6)
                      {
                       bill=100;
                      }
                      else if(parking_time>=6)
                      {
                       bill=400;
                      }
                      cout<<endl;
                      cout<<"Promo Code is Applied!!!!!"<<endl;
                      cout<<endl;
                      cout<<"Final Bill is : "<<bill<<endl;
                      
                      cout<<"Discount Applied!!!!"<<endl;
                      cout<<endl;
                      dis_bill=bill-10;
                      
                      cout<<"New Bill after Applying Discount is: "<<dis_bill<<endl;
                      cout<<"Hope to see you soon,Thank You."<<endl;
                       
                   }
                      break;
         }
         
     }
    
};


int main()
{
   
    cout<<"**********************ParkLot--Ultimate Solution for Vehicle Parking Problems***********************"<<"\n";
    cout<<"Enter Parking ID:\n"<<endl;
    int parking_lot_id;
    cin>>parking_lot_id;
    string vehicle_type;
    cout<<"Enter Vehicle Type :\n"<<endl;
    cin>>vehicle_type;
    Parking pobj;
    pobj.setParkingDetails(parking_lot_id,vehicle_type);
    int choice2=0;

    cout<<"\n------------------------------MENU------------------------------------------"<<endl;
    cout<<"\n\n1.Check Price According to Parking Hours and VehicleType\n\n2.Bill Generation(Discount based on PromoCode)\n\n3.Kindly Provide Your FeedBack System\n\n"<<endl;
    cin>>choice2;
    cout<<endl;
    if(choice2==1)
    {
        pobj.ParkingRates();
    }
    else if(choice2==2)
    {
        pobj.BillGeneration();
    }
    

    
    else if(choice2==3)
    {
        int interactive=0;
        int feature=0;
        int acc_score=0;
        
        ofstream feedBack("feedBack_Data.txt");

        
        cout<<"-------------------------Feed Back System----------------------------\n";
        cout<<"1.User Interactiveness(Scale of 1-10):\n";
        cin>>interactive;
        cout<<"2.Feature Usecases and its Accessibility(Scale of 1-10):\n";
        cin>>feature;
        cout<<"Precision and Accuracy(Scale of 1-10):\n";
        cin>>acc_score;
        string improve="Further Improvements are Required(modification of Exisiting Features).";
        string new_features="Work on New Features and Improve User Satisfaction Rate.";
        
        time_t now=time(0);
        char *date_time=ctime(&now);
        
        if((interactive+feature+acc_score)<=BENCH_MARK_SCORE)
        {
            
            feedBack<<new_features<<" "<<date_time<<endl;
        }
        else
        {
            feedBack<<improve<<" "<<date_time<<endl;
        }
        
        feedBack.close();

    }
    
    return 0;
}