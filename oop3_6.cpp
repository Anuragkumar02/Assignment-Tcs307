#include<iostream>
using namespace std;
class Invoice
{
private:
string pno;
string pdesp;
int item_qty;
int item_price;
public:
Invoice(string number,string description,int qty,int price)
{
this->pno=number;
this->pdesp=description;
if(qty>0)
{
this->item_qty=qty;
}
else
{
this->item_qty=0;
}
if(price>0)
{
this->item_price=price;
}
else
{
this->item_price=0;
}
}
void setPno(string number)
{
this->pno=number;
}
string getPno()
{
return pno;
}
void setPdesp(string description)
{
this->pdesp=description;
}
string getPdesp()
{
return pdesp;
}
void setItem_qty(int qty)
{
if(qty>0)
{
this->item_qty=qty;
}
else
{
this->item_qty=0;
}
}
int getItem_qty()
{
return item_qty;
}
void setItem_price(int price)
{
if(price>0)
{
this->item_price=price;
}
else
{
this->item_price=0;
}
}
int getItem_price()
{
return item_price;
}
int getInvoiceAmount()
{
return item_qty*item_price;
}
};
int main()
{
Invoice in1("ed34","screw gauge",2,80);
Invoice in2("ed737","nailers",6,55);
cout<<"Invoice 1 part number is:"<<in1.getPno()<<endl<<"Invoice 1 part description:"<<in1.getPdesp()<<endl<<"Invoice 1 quantity:"<<in1.getItem_qty()<<endl<<"Invoice 1 price per iten is:"<<in1.getItem_price()<<endl<<"total amount is:"<<in1.getInvoiceAmount()<<endl<<endl;
cout<<"\nInvoice 2 part number is:"<<in2.getPno()<<"\nInvoice 2 part description:"<<in2.getPdesp()<<"\nInvoice 2 quantity:"<<in2.getItem_qty()<<"\nInvoice 2 price per iten is:"<<in2.getItem_price()<<"\ntotal amount is:"<<in2.getInvoiceAmount()<<endl;
}

