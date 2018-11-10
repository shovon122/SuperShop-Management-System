#include<iostream>
using namespace std;
class shop
{
public:
   string s1="SOAP";
   string s2="SHAMPOO";
   string n1="FACEWASH";
   string n2="LOTION";
   int s3=0;
   int s4=0;
   int n3=0;
   int n4=0;
   double s7=20;
   double s8=1000;
   double n5=300;
   double n6=500;
   int y,y1,u1;
   string u;
public:
   void showdata()
    {
        cout<<endl<<"      ITEM NAME              NUM OF ITEM AVAILABLE      PRICE(PER PIECE) "<<endl;
        cout<<endl<<"      (1)"<<s1<<"                "<<s3<<"                          "<<s7<<" TAKA"<<endl;
        cout<<endl<<"      (2)"<<s2<<"             "<<s4<<"                          "<<s8<<" TAKA"<<endl;
        cout<<endl<<"      (3)"<<n1<<"            "<<n3<<"                          "<<n5<<" TAKA"<<endl;
        cout<<endl<<"      (4)"<<n2<<"              "<<n4<<"                          "<<n6<<" TAKA"<<endl;
    }
   int p1()
    {
        return s3;
    }
    int p2()
    {
        return s4;
    }
    int p3()
    {
        return n3;
    }
    int p4()
    {
        return n4;
    }
 int edit()
    {
           R:
           cout<<endl<<"Which Product Do U Want To Edit: ";
           cin>>y;
           if(y==1)
           {
            cout<<endl<<"How Many Product Of SOAP Do U Want To Edit: ";
            cin>>y1;
            s3=s3+y1;
            return s3;
           }
           else if(y==2)
           {
            cout<<endl<<"How Many Product Of SHAMPOO Do U Want To Edit: ";
            cin>>y1;
            s4=s4+y1;
            return s4;
           }
           else if(y==3)
           {
            cout<<endl<<"How Many Product Of FACEWASH Do U Want To Edit: ";
            cin>>y1;
            n3=n3+y1;
            return n3;
           }
           else if(y==4)
           {
            cout<<endl<<"How Many Product Of LOTION Do U Want To Edit: ";
            cin>>y1;
            n4=n4+y1;
            return n4;
           }
           else
           {
               cout<<endl<<"WRONG INPUT !!!!!! Please Try Again. "<<endl;
               goto R;
           }
    }
};
class customer: public shop
{
   public:
       char a1,a;
       double d=0,n1,n2,S=0;
       int k1=0,k2=0,k3=0,k4=0;
   public:
      void getdata()
      { W:
          cout<<endl<<"Do U Want To Buy?(y/Y to continue or n/N to exit) ";
          cin>>a;
          if(a=='y'||a=='Y')
          {
          Y:
     cout<<endl<<"Please Enter Your Choice And Number Of Product: ";
     cin>>n1>>n2;
       if(n1==1)
       {
           if(s3<n2)
            cout<<endl<<"SORRY !!!!!! This Product(SOAP) Is Not Available Much ."<<endl;
            else
            {
                s3=s3-n2;
                d=d+(s7*n2);
                k1=k1+n2;
            }
       }
       else if(n1==2)
       {
           if(s4<n2)
            cout<<endl<<"SORRY !!!!!! This Product(SHAMPOO) Is Not Available Much ."<<endl;
            else
            {
                 s4=s4-n2;
                d=d+(s8*n2);
                k2=k2+n2;
            }
       }
          else if(n1==3)
       {
           if(n3<n2)
            cout<<endl<<"SORRY !!!!!! This Product(FASHWASH) Is Not Available Much ."<<endl;
            else
            {
                 n3=n3-n2;
                d=d+(n5*n2);
                k3=k3+n2;
            }
       }
          else if(n1==4)
       {
           if(n4<n2)
            cout<<endl<<"SORRY !!!!!! This Product(LOTION) Is Not Available Much ."<<endl;
            else
            {
                 n4=n4-n2;
                d=d+(n6*n2);
                k4=k4+n2;
            }
       }
       else
       {
        cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
        goto Y;
       }
       Z:
        cout<<endl<<"Do U Want To Buy Another?(y/Y to continue n/N to exit) ";
        cin>>a1;
        if(a1=='y'||a1=='Y')
        {
            goto Y;
        }
        else if(a1=='n'||a1=='N')
        {
            if(d>=1000)
            {
                d=d-(d*.05);
                S=S+d;
         cout<<"----------------------------------------------------------"<<endl;
         cout<<endl<<"Your Total Bill(with 5% discount)= "<<d<<" TAKA"<<endl;
         cout<<endl<<"Please Enter Your Address : ";
         cin>>u;
         cout<<endl<<"Please Enter Your Contact Number : ";
         cin>>u1;
         cout<<endl<<"You Will Receive Free Home Delivey In Your Given Address "<<u<<" And We Will "<<endl;
         cout<<endl<<"Contact With You In Your Given Contact Number "<<u1<<"."<<endl;
         d=0;

         }
         else
         {
              S=S+d;
            cout<<"---------------------------------------------------------"<<endl;
            cout<<endl<<"Your Total Bill: "<<d<<" TAKA"<<endl;
            cout<<endl<<"Please Enter Your Address : ";
            cin>>u;
            cout<<endl<<"Please Enter Your Contact Number : ";
            cin>>u1;
            cout<<endl<<"You Will Receive Free Home Delivey In Your Given Address "<<u<<" And We Will "<<endl;
            cout<<endl<<"Contact With You In Your Given Contact Number "<<u1<<"."<<endl;
            d=0;

         }
        }
        else
           {
               cout<<"WRONG INPUT !!!!!! Please Try Again. "<<endl;
               goto Z;}
      }
      else if(a=='n'||a=='N')
      {
          cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<< THANK YOU, SEE YOU AGAIN >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
      }
      else
      {
          cout<<endl<<"WRONG INPUT !!!!!! Please Try Again. "<<endl;
          goto W;
      }
      }
      void sell()
     {
         cout<<endl<<"Total Sell Up To Right Now Is : "<<S<<" TAKA"<<endl;
     }
     void amount()
     {
         cout<<endl<<"PRODUCT NAME          PIECE"<<endl;
         cout<<endl<<"SOAP                  "<<k1<<endl;
         cout<<endl<<"SHAMPOO               "<<k2<<endl;
         cout<<endl<<"FASHWASH              "<<k3<<endl;
         cout<<endl<<"LOTION                "<<k4<<endl;
     }


};
class worker: public shop

    {
public:
    string s1="ABC", s2="DEF", s3="XYZ";
    string id1="1-11-111",id2="2-22-222",id3="3-33-333";
    string ad1="RANGPUR",ad2="KHULNA", ad3="CHITTAGONG";
public:
    void L1()
    {
        cout<<endl<<"Name: "<<s1<<endl;
        cout<<"ID: "<<id1<<endl;
        cout<<"Address: "<<ad1<<endl;
    }
    void L2()
    {
        cout<<endl<<"Name: "<<s2<<endl;
        cout<<"ID: "<<id2<<endl;
        cout<<"Address: "<<ad3<<endl;
    }
    void L3()
    {
        cout<<endl<<"Name: "<<s3<<endl;
        cout<<"ID: "<<id3<<endl;
        cout<<"Address: "<<ad3<<endl;
    }
    void showdata1()
    {
        cout<<endl<<" (1) MY PROFILE"<<endl;
        cout<<" (2) PRODUCT DETAILS"<<endl;
        cout<<" (3) LOGOUT"<<endl;
    }
    };
int main()
{
    customer c1;
    shop s1;
    worker l1;
    char n10;
    int p=0,q=0,w,x1,x2,x3,x4,x5,x6,d=123456789,e,d1;
    string n,k1,k="S&A";
     A:
    cout<<endl<<"************************* WELCOME TO S&R SUPER SHOP ****************************"<<endl;
    cout<<"                      ADDRESS: 23/A, RAMPURA, DHAKA-1217"<<endl;
    cout<<endl<<"                           CONTACT: +8801681234567"<<endl;
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    X:
    cout<<" (1) CUSTOMER           (2) WORKER          (3) MANAGER           (4)EXIT"<<endl;
    cout<<endl<<"Please Enter Your Choice: ";
    cin>>n10;
    if(n10=='1')
    {
      c1.showdata();
      c1.getdata();
      cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<< THANK YOU, SEE YOU AGAIN >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
      goto A;
    }
    else if(n10=='2')
    {
        // 1st worker user name= ABC, password= 111
        //2nd worker user name= DEF, password= 222
        //3rd worker user name= XYZ, password=333
        cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ WORKER SECTION ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        M:
    cout<<"Please Enter Your User Name To Access: ";
    cin>>n;
    if(n=="ABC"||n=="DEF"||n=="XYZ")
    {
        if(n=="ABC")
            { C:
                cout<<"Please Enter Your Password To Access: ";
                cin>>x1;
                if(x1==111)
                {
                    p=p+1;
                    q=q+5;
                    B:
                    l1.showdata1();
                    cout<<"Please Enter Your Choice: ";
                    cin>>x2;
                    if(x2==1)
                    {
                        l1.L1();
                        goto B;
                    }
                    else if(x2==2)
                    {
                        c1.showdata();
                        goto B;
                    }
                    else if(x2==3)
                    {
                        cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< THANKS FOR VISITING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
                        goto A;
                    }
                    else
                    {
                        cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
                        goto B;
                    }
                }
                else
                    {
                        cout<<endl<<"WRONG PASSWORD !!!!!! Please Try Again. "<<endl;
                goto C;
                    }

            }
           else if(n=="DEF")
            { I:
                cout<<"Please Enter Your Password To Access: ";
                cin>>x3;
                if(x3==222)
                {
                    p=p+1;
                    q=q+10;
                    H:
                    l1.showdata1();
                    cout<<endl<<"Please Enter Your Choice: ";
                    cin>>x4;
                    if(x4==1)
                    {
                        l1.L2();
                        goto H;
                    }
                    else if(x4==2)
                    {
                        c1.showdata();
                        goto H;
                    }
                    else if(x4==3)
                    {
                        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< THANKS FOR VISITING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
                        goto A;
                    }
                    else
                    {
                        cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
                        goto H;
                    }
                }
                else
                    {
                        cout<<endl<<"WRONG PASSWORD !!!!!! Please Try Again. "<<endl;
                goto I;
                    }

            }
           else if(n=="XYZ")
            { K:
                cout<<"Please Enter Your Password To Access: ";
                cin>>x5;
                if(x5==333)
                {
                    p=p+1;
                    q=q+20;
                    J:
                    l1.showdata1();
                    cout<<endl<<"Please Enter Your Choice: ";
                    cin>>x6;
                    if(x6==1)
                    {
                        l1.L3();
                        goto J;
                    }
                    else if(x6==2)
                    {
                        c1.showdata();
                        goto J;
                    }
                    else if(x6==3)
                    {
                        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< THANKS FOR VISITING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
                        goto A;
                    }
                    else
                    {
                        cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
                        goto J;
                    }
                }
                else
                    {
                        cout<<endl<<"WRONG PASSWORD !!!!!! Please Try Again. "<<endl;
                goto K;
                    }

            }

    }
     else
    {
        cout<<endl<<"WRONG USER NAME !!! Please Try Again."<<endl;
        goto M;
    }
    }
    else if(n10=='3')
        {
            //manager user name= S&A and password= 123456789
            cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ MANAGER SECTION ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            N:
        cout<<"Please Enter Your User Name To Access: ";
        cin>>k1;
        if(k1==k)
        { O:
            cout<<"Please Enter Your Password To Access: ";
            cin>>d1;
            if(d1==d){

            cout<<endl<<"***************************** GREETINGS MR.S&A *********************************"<<endl;
        W:
          cout<<endl<<" (1) PRODUCT DETAILS"<<endl;
          cout<<" (2) EDIT PRODUCT AMOUNT"<<endl;
          cout<<" (3) TOTAL SELL UPTO RIGHT NOW"<<endl;
          cout<<" (4) WORKER INFORMATION"<<endl;
          cout<<" (5) LOGOUT"<<endl;
          cout<<endl<<"Enter Your choice: ";
          cin>>w;
          if(w==1)
          {
              c1.showdata();
              goto W;
          }
          else if(w==2)
          {
           c1.showdata();
           c1.edit();
           goto W;
          }
          else if(w==3)
          {
            c1.amount();
            c1.sell();
            goto W;
          }

         else if(w==4)
         { E:
             cout<<endl<<" (1) ALL WORKER INFORMATION"<<endl;
             cout<<" (2) AVAILABLE WORKERS TODAY"<<endl;
             cout<<" (3) PREVIOUS MENU"<<endl;
             cout<<"Please Enter Your Option: ";
             cin>>e;
             if(e==1){
             l1.L1();
             cout<<endl;
             l1.L2();
             cout<<endl;
             l1.L3();
             cout<<endl;
             goto E;
             }
             else if(e==2){
             cout<<endl<<"Number Of Worker/Workers Present Today : "<<p<<endl;
             if(q==5)
             {
                 l1.L1();
             }
             else if(q==10)
             {
                 l1.L2();
             }
             else if(q==20)
             {
                 l1.L3();
             }
             else if(q==15)
             {
                 l1.L1();
                 cout<<endl;
                 l1.L2();
             }
             else if(q==25)
             {
                 l1.L1();
                 cout<<endl;
                 l1.L3();
             }
             else if(q==30)
             {
                 l1.L2();
                 cout<<endl;
                 l1.L3();
             }
             else if(q==35)
             {
                 l1.L1();
                 cout<<endl;
                 l1.L2();
                 cout<<endl;
                 l1.L3();
             }
             goto E;
             }
             else if(e==3){
             goto W;
             }
             else
                {
                    cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
             goto E;

                }
         }
         else if(w==5)
         {
          cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< THANKS FOR VISITING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
          goto A;
         }

         else
         {

         cout<<endl<<"WRONG INPUT !!!!!! Please Try Again."<<endl;
             goto W;}
        }
        else
            {
                cout<<endl<<"WRONG PASSWORD !!!!!! Please Try Again.";
        goto O;
            }
        }
        else
        {
            cout<<endl<<"Wrong User Name !!!!!! Please Try again."<<endl;
            goto N;
        }

        }
    else if(n10=='4')
       {
           goto Q;
       }
       else
       {
           cout<<endl<<"WRONG INPUT !!!!!! Please Try Again!!!"<<endl<<endl;
           goto X;
       }
      Q:
    return 0;

}

