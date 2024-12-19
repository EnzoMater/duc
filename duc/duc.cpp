#include "duc.h"

Duc::Duc(String data_new) {// funcsion declaration string data
  data=data_new;
}

void Duc::Split() {
  int end=data.indexOf(';');
  int start=0;
  String d[20];//get split string
  t=0;
      while (end !=-1)
      {
        d[t]= data.substring(start, end);
        x[t]=d[t].toFloat();// convert string to float  
        t++;        
        start=end+1;
        end=data.indexOf(';',start);

      }
// Split the end
    if (t < 20){
d[t]=data.substring(start);
x[t]=d[t].toFloat();// convert string to float    	
	}

}


float Duc::get (int desire) const{
  
  if(desire>=0&&desire<=t){
    return x[desire];// get data outside 
  }

  return -1;
}
Thu::Thu(int quantity_new){//funcsion declaration data quantity
  quantity=quantity_new;
}
String Thu::fusion(float*p){
  if (p == nullptr || quantity <= 0) return "";// if error then stop the program
  String hihi;
  for(int i=0;i<quantity-1;i++){
    hihi+=String(*(p+i))+";";

  }
  hihi=hihi+*(p+quantity-1);
  return hihi;// return data string outside

}
