  #include<iostream>
  #include<conio.h>
  using namespace std;
  class Student

  {
  int rollno;
  char name[30];
  int marks;
     public:
         void setdata(int rollno,char*name,int marks)
         {
              this->rollno=rollno;
              strcpy(this->name,name);
              this->marks=marks;
              }
              void dispdata()
              {
                   cout<<"rollno="<<rollno<<endl;
                   cout<<"name="<<name<<endl;
                   cout<<"marks="<<marks<<endl;
                   }
                   int getrollno()
                   {
                       return rollno;
                       }
                   int getmarks()
                   {
                       return marks;
                       }
                       char* getname()
                       {
                                  return name;
                                  }
                                  void inputData()
                                  {
                                       cin>>rollno;
                                       cin>>name;
                                       cin>>marks;
  
}
  };
  int main()
  {
  Student s[10];
  int i,large,loc;
  for(i=0;i<10;i++)
  {
                   s[i].inputData();
                   }
                   large=s[0].getmarks();
                   loc=-1;
                   for(i=0;i<10;i++)
                   {
                                    if(s[i].getmarks()>large)
                                    {
                                       large=s[i].getmarks();
                                       loc=i;
                                       }
                                       }
                                       s[loc].dispdata();                      
                                                              
  
  
  
  
  getch();
  return 0;
  }
  
