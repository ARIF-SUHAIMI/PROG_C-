#include <iostream>
#include <string>
#include <fstream>

using namespace std;
fstream infile("Inventory.txt",ios::in);

class Inventory
{
  private:
    string itemName,itemKod;
    float itemPrice,totalEarned;
    int qttyInStock;
  public:
    inventory(string a,string b,float c,int e,float d=0)
    {
      itemName=a;
      itemKod=b;
      itemPrice=c;
      totalEarned=d;
      qttyInStock=e;
    }
    ~Inventory(){ cout << "\nDestroy subject instance"; }
    void getData();
    void buy(int);
    void addStock();
    void discountPrice();
    void printDetail();
    string getCode(){return itemKod;}
    double getPrice(){return itemPrice;}
    double getQtty(){return qttyInStock;}
    
};
void Inventory::getData()
{
  //fstream infile("Inventory.txt",ios::in);
  getline(infile,itemName,' ');
  //cout<<itemName;
  getline(infile,itemKod,' ');
  //cout<<itemKod;
  infile>>itemPrice;
  //infile.ignore(2,' ');
  //cout<<itemPrice;
  infile>>qttyInStock;
  //infile.ignore(2,' ');
  //cout<<qttyInStock;
}
void Inventory::buy(int berapa)
{
  cout<<"Quantiti to buy: ";
  cin>>berapa;
  qttyInStock=qttyInStock-berapa;
  cout<<"Stock: "<<qttyInStock;
}
void Inventory::addStock()
{
  int stock;
  cout<<"Add stock:";
  cin>>stock;
  qttyInStock=qttyInStock+stock;
}
void Inventory::discountPrice()
{
  int discount,a,tot;
    cin>>discount;
      
      if(discount==10)
      {
        itemPrice*(10/100);
        tot=itemPrice-a;
      } 
      else if(discount==30)
      {
        itemPrice*(30/100);
        tot=itemPrice-a;
      }
      else if(discount==50)
      {
        itemPrice*(50/100);
        tot=itemPrice-a;  
      }
}
void Inventory::printDetail()
{
  cout<<"Item Name: "<<itemName<<endl;
  cout<<"Item Code: "<<itemKod<<endl;
  cout<<"Item Price: "<<itemPrice<<endl;
  cout<<"Total Earned: "<<totalEarned<<endl;
  cout<<"Quntity Stock: "<<qttyInStock<<endl;
}
void cmpKod(Inventory x[])
{
  string kod;
  cout<<"Item Code: ";
  cin>>kod;
  for(int i=0;i<5;i++)
  {
      if(kod == x[i].getCode())
      {
        cout<<x[i].getPrice();
      }
    else 
      cout<<"Wrong item code.Please check the code again.";
      cout<<" ";

  }
}
  
int main()
{  
  Inventory in[5];
  int harga;  
  for(int i=0;i<5;i++)
  {
    in[i].getData();
  }
  for(int k=0;k<5;k++)
  {
    in[k].buy(harga);
    in[k].getCode();
    in[k].getPrice();
    in[k].addStock();  
  
  }
    
    
  //  in[i].printDetail();
  
  cmpKod(in);
  infile.close();  
  system("PAUSE");
  return 0;
}