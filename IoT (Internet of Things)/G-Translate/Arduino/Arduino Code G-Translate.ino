int xpin = A5;
int xadc = 0;
int xmax = 0;
int xmin = 1023;

int ypin = A6;
int yadc = 0;
int ymax = 0;
int ymin = 1023;

int flex_THUMB = A0; 
int THUMBADC = 0; 
int THUMBmin = 1023; 
int THUMBmax = 0;

int flex_INDEX = A1; 
int INDEXADC = 0; 
int INDEXmin = 1023; 
int INDEXmax = 0;

int flex_MIDDLE = A2; 
int MIDDLEADC = 0; 
int MIIDDLEmin = 1023; 
int MIIDDLEmax = 0;

int flex_RING = A3; 
int RINGADC = 0; 
int RINGmin = 1023; 
int RINGmax = 0;

int flex_PINKY = A4; 
int PINKYADC = 0; 
int PINKYmin = 1023; 
int PINKYmax = 0;

char cp = '1';
char temp = '0';
int times = 0;

void setup()
{

  Serial.begin(9600);
  Serial.println("WELCOME TO THE SIGN LANGUAGE TRANSLATOR");

}


void printfun(char cp) //to avoid printing repeating symbols
{ 
  
    if(cp!=  temp)
    {
  //    Serial.println("THE VALUE MADE BY THE HAND IS ");
      Serial.println(cp);
      temp = cp;
      
    }

    

}



void loop()
{
 float THUMBADC = analogRead(flex_THUMB);
  float INDEXADC = analogRead(flex_INDEX);
  float MIDDLEADC = analogRead(flex_MIDDLE);
  float RINGADC = analogRead(flex_RING);
  float PINKYADC = analogRead(flex_PINKY);

 
 
 float angle1= map(THUMBADC, THUMBmin, THUMBmax, 0, 90);
  float angle2= map(INDEXADC, INDEXmin, INDEXmax, 0, 90);
  float angle3= map(MIDDLEADC, MIIDDLEmin, MIIDDLEmax, 0, 90);
  float angle4= map(RINGADC, RINGmin, RINGmax, 0, 90);
  float angle5= map(PINKYADC, PINKYmin, PINKYmax, 0, 90); 

/*
Serial.println(angle1);
Serial.println(angle2);
Serial.println(angle3);
Serial.println(angle4);
Serial.println(angle5); 
Serial.println();*/

if( (angle1==0) || (angle2==0) || (angle3==0) || (angle4==0) || (angle5==0))   //statement for checking if the wires are intercrossing
{
 
  if(angle1==0)
  {
    Serial.println("The wires of the THUMB FINGER are intercrossing");
  }
  else if(angle2==0)
  {
    Serial.println("The wires of the INDEX FINGER are intercrossing");
  }
  else if(angle3==0)
  {
    Serial.println("The wires of the MIDDLE FINGER are intercrossing");
  }
  else if(angle4==0)
  {
    Serial.println("The wires of the RING FINGER are intercrossing");
  }
  else if(angle5==0)
  {
    Serial.println("The wires of the PINKY FINGER are intercrossing");
  }

  
  else if((angle1==0) && (angle2==0))
  {
    Serial.println("THUMB & INDEX wires are intercrossing");
  }
  else if((angle1==0) && (angle3==0))
  {
    Serial.println("THUMB & MIDDLE wires are intercrossing");
  }
  else if((angle1==0) && (angle4==0))
  {
    Serial.println("THUMB & RING wires are intercrossing");
  }
  else if((angle1==0) && (angle5==0))
  {
    Serial.println("THUMB & PINKY wires are intercrossing");
  }


  else if((angle2==0) && (angle1==0))
  {
    Serial.println("INDEX & THUMB wires are intercrossing");
  }
  else if((angle2==0) && (angle3==0))
  {
    Serial.println("INDEX & MIDDLE wires are intercrossing");
  }
  else if((angle2==0) && (angle4==0))
  {
    Serial.println("INDEX & RING wires are intercrossing");
  }
  else if((angle2==0) && (angle5==0))
  {
    Serial.println("INDEX & PINKY wires are intercrossing");
  }


  else if((angle3==0) && (angle1==0))
  {
    Serial.println("MIDDLE & THUMB wires are intercrossing");
  }
  else if((angle3==0) && (angle2==0))
  {
    Serial.println("MIDDLE & INDEX wires are intercrossing");
  }
  else if((angle3==0) && (angle4==0))
  {
    Serial.println("MIDDLE & RING wires are intercrossing");
  }
  else if((angle3==0) && (angle5==0))
  {
    Serial.println("MIDDLE & PINKY wires are intercrossing");
  }

  
  else if((angle4==0) && (angle1==0))
  {
    Serial.println("RING & THUMB wires are intercrossing");
  }
  else if((angle4==0) && (angle2==0))
  {
    Serial.println("RING & INDEX wires are intercrossing");
  }
  else if((angle4==0) && (angle3==0))
  {
    Serial.println("RING & MIDDLE wires are intercrossing");
  }
  else if((angle4==0) && (angle5==0))
  {
    Serial.println("RING & PINKY wires are intercrossing");
  }


  else if((angle5==0) && (angle1==0))
  {
    Serial.println("PINKY & THUMB wires are intercrossing");
  }
  else if((angle5==0) && (angle2==0))
  {
    Serial.println("PINKY & INDEX wires are intercrossing");
  }
  else if((angle5==0) && (angle3==0))
  {
    Serial.println("PINKY & MIDDLE wires are intercrossing");
  }
  else if((angle5==0) && (angle4==0))
  {
    Serial.println("PINKY & RING wires are intercrossing");
  }

  else
  {
    Serial.println("MORE THAN ONE WIRES ARE INTERCROSSING");
  }
}



else if( (angle1==90) || (angle2==90) || (angle3==90) || (angle4==90) || (angle5==90))   //statement for checking if the wires are broken
{

  if((angle1==90) && (angle2==90))
  {
    Serial.println("THUMB & INDEX wires is disconnected or broken");
  }
  else if((angle1==90) && (angle3==90))
  {
    Serial.println("THUMB & MIDDLE wires  is disconnected or broken");
  }
  else if((angle1==90) && (angle4==90))
  {
    Serial.println("THUMB & RING wires is disconnected or broken");
  }
  else if((angle1==90) && (angle5==90))
  {
    Serial.println("THUMB & PINKY wires is disconnected or broken");
  }


  else if((angle2==90) && (angle1==90))
  {
    Serial.println("INDEX & THUMB wires is disconnected or broken");
  }
  else if((angle2==90) && (angle3==90))
  {
    Serial.println("INDEX & MIDDLE wires is disconnected or broken");
  }
  else if((angle2==90) && (angle4==90))
  {
    Serial.println("INDEX & RING wires is disconnected or broken");
  }
  else if((angle2==90) && (angle5==90))
  {
    Serial.println("INDEX & PINKY wires is disconnected or broken");
  }


  else if((angle3==90) && (angle1==90))
  {
    Serial.println("MIDDLE & THUMB wires is disconnected or broken");
  }
  else if((angle3==90) && (angle2==90))
  {
    Serial.println("MIDDLE & INDEX wires is disconnected or broken");
  }
  else if((angle3==90) && (angle4==90))
  {
    Serial.println("MIDDLE & RING wires is disconnected or broken");
  }
  else if((angle3==90) && (angle5==90))
  {
    Serial.println("MIDDLE & PINKY wires is disconnected or broken");
  }

  
  else if((angle4==90) && (angle1==90))
  {
    Serial.println("RING & THUMB wires is disconnected or broken");
  }
  else if((angle4==90) && (angle2==90))
  {
    Serial.println("RING & INDEX wires is disconnected or broken");
  }
  else if((angle4==90) && (angle3==90))
  {
    Serial.println("RING & MIDDLE wires is disconnected or broken");
  }
  else if((angle4==90) && (angle5==90))
  {
    Serial.println("RING & PINKY wires is disconnected or broken");
  }


  else if((angle5==90) && (angle1==90))
  {
    Serial.println("PINKY & THUMB wires are disconnected or broken");
  }
  else if((angle5==90) && (angle2==90))
  {
    Serial.println("PINKY & INDEX wires are disconnected or broken");
  }
  else if((angle5==90) && (angle3==90))
  {
    Serial.println("PINKY & MIDDLE wires are disconnected or broken");
  }
  else if((angle5==90) && (angle4==90))
  {
    Serial.println("PINKY & RING wires are disconnected or broken");
  }
 
  
  
 else if(angle1==90)
  {
    Serial.println("The wires of the THUMB FINGER is disconnected or broken");
  }
  else if(angle2==90)
  {
    Serial.println("The wires of the INDEX FINGER is disconnected or broken");
  }
  else if(angle3==90)
  {
    Serial.println("The wires of the MIDDLE FINGER is disconnected or broken");
  }
  else if(angle4==90)
  {
    Serial.println("The wires of the RING FINGER is disconnected or broken");
  }
  else if(angle5==90)
  {
    Serial.println("The wires of the PINKY FINGER is disconnected or broken");
  }

  
  else
  {
    Serial.println("MORE THAN TWO WIRES ARE BROKEN OR DISCONNECTED");
  } 
}





else
{
    if(((angle1>=64)&&(angle1<=69))&&((angle2>=82)&&(angle2<=85))&&((angle3>=76)&&(angle3<=80))&&((angle4>=80)&&(angle4<=83))&&((angle5>=81)&&(angle5<=84)))
      {
        printfun('A'); 
      }
    else if(((angle1>=77)&&(angle1<=79))&&((angle2>=71)&&(angle2<=74))&&((angle3>=66)&&(angle3<=70))&&((angle4>=66)&&(angle4<=70))&&((angle5>=67)&&(angle5<=70)))
      {
        printfun('B'); 
      }
    else if(((angle1>=72)&&(angle1<=75))&&((angle2>=76)&&(angle2<=80))&&((angle3>=71)&&(angle3<=76))&&((angle4>=73)&&(angle4<=77))&&((angle5>=74)&&(angle5<=77)))
      {
        printfun('C'); 
      }
    else if(((angle1>=77)&&(angle1<=80))&&((angle2>=68)&&(angle2<=71))&&((angle3>=76)&&(angle3<=78))&&((angle4>=78)&&(angle4<=81))&&((angle5>=81)&&(angle5<=84)))
      {
        printfun('D'); 
      } 
    else if(((angle1>=76)&&(angle1<=79))&&((angle2>=79)&&(angle2<=82))&&((angle3>=75)&&(angle3<=78))&&((angle4>=79)&&(angle4<=82))&&((angle5>=81)&&(angle5<=84)))
      {
        printfun('E'); 
      } 
    else if(((angle1>=76)&&(angle1<=80))&&((angle2>=80)&&(angle2<=83))&&((angle3>=65)&&(angle3<=68))&&((angle4>=66)&&(angle4<=71))&&((angle5>=66)&&(angle5<=69)))
      {
        printfun('F'); 
      } 
    else if(((angle1>=64)&&(angle1<=67))&&((angle2>=66)&&(angle2<=69))&&((angle3>=78)&&(angle3<=82))&&((angle4>=80)&&(angle4<=83))&&((angle5>=80)&&(angle5<=84)))
      {
        printfun('G'); 
      } 
    else if(((angle1>=75)&&(angle1<=78))&&((angle2>=69)&&(angle2<=73))&&((angle3>=65)&&(angle3<=71))&&((angle4>=78)&&(angle4<=82))&&((angle5>=81)&&(angle5<=83)))
      {
        printfun('H'); 
      } 
    else if(((angle1>=74)&&(angle1<=80))&&((angle2>=79)&&(angle2<=81))&&((angle3>=76)&&(angle3<=78))&&((angle4>=76)&&(angle4<=80))&&((angle5>=66)&&(angle5<=70)))
      {
        printfun('I'); 
      } 
    else if(((angle1>=65)&&(angle1<=69))&&((angle2>=81)&&(angle2<=84))&&((angle3>=78)&&(angle3<=81))&&((angle4>=80)&&(angle4<=83))&&((angle5>=64)&&(angle5<=68)))
      {
        printfun('J'); 
      } 
    else if(((angle1>=67)&&(angle1<=70))&&((angle2>=68)&&(angle2<=71))&&((angle3>=65)&&(angle3<=69))&&((angle4>=80)&&(angle4<=83))&&((angle5>=81)&&(angle5<=83)))
      {
        printfun('K'); 
      } 
    else if(((angle1>=69)&&(angle1<=71))&&((angle2>=70)&&(angle2<=73))&&((angle3>=65)&&(angle3<=67))&&((angle4>=67)&&(angle4<=70))&&((angle5>=67)&&(angle5<=70)))
      {
        printfun('L'); 
      } 
    else if(((angle1>=77)&&(angle1<=81))&&((angle2>=72)&&(angle2<=77))&&((angle3>=66)&&(angle3<=70))&&((angle4>=69)&&(angle4<=72))&&((angle5>=82)&&(angle5<=84)))
      {
        printfun('M'); 
      } 
    else if(((angle1>=78)&&(angle1<=81))&&((angle2>=72)&&(angle2<=74))&&((angle3>=67)&&(angle3<=70))&&((angle4>=76)&&(angle4<=80))&&((angle5>=80)&&(angle5<=83)))
      {
        printfun('N'); 
      } 
    else if(((angle1>=77)&&(angle1<=80))&&((angle2>=78)&&(angle2<=81))&&((angle3>=75)&&(angle3<=78))&&((angle4>=77)&&(angle4<=80))&&((angle5>=79)&&(angle5<=82)))
      {
        printfun('O'); 
      } 
    else if(((angle1>=72)&&(angle1<=75))&&((angle2>=66)&&(angle2<=69))&&((angle3>=67)&&(angle3<=70))&&((angle4>=77)&&(angle4<=81))&&((angle5>=80)&&(angle5<=83)))
      {
        printfun('P'); 
      } 
    else if(((angle1>=66)&&(angle1<=69))&&((angle2>=69)&&(angle2<=72))&&((angle3>=79)&&(angle3<=81))&&((angle4>=79)&&(angle4<=83))&&((angle5>=82)&&(angle5<=84)))
      {
        printfun('Q'); 
      } 
    else if(((angle1>=77)&&(angle1<=80))&&((angle2>=64)&&(angle2<=67))&&((angle3>=69)&&(angle3<=72))&&((angle4>=77)&&(angle4<=80))&&((angle5>=80)&&(angle5<=83)))
      {
        printfun('R'); 
      } 
    else if(((angle1>=76)&&(angle1<=79))&&((angle2>=80)&&(angle2<=83))&&((angle3>=77)&&(angle3<=78))&&((angle4>=77)&&(angle4<=81))&&((angle5>=80)&&(angle5<=82)))
      {
        printfun('S'); 
      } 
    else if(((angle1>=71)&&(angle1<=73))&&((angle2>=77)&&(angle2<=80))&&((angle3>=78)&&(angle3<=79))&&((angle4>=80)&&(angle4<=81))&&((angle5>=81)&&(angle5<=82)))
      {
        printfun('T'); 
      } 
    else if(((angle1>=78)&&(angle1<=79))&&((angle2>=71)&&(angle2<=72))&&((angle3>=67)&&(angle3<=67))&&((angle4>=77)&&(angle4<=77))&&((angle5>=79)&&(angle5<=80)))
      {
        printfun('U'); 
      } 
    else if(((angle1>=77)&&(angle1<=78))&&((angle2>=70)&&(angle2<=71))&&((angle3>=68)&&(angle3<=69))&&((angle4>=76)&&(angle4<=77))&&((angle5>=79)&&(angle5<=80)))
      {
        printfun('V'); 
      } 
    else if(((angle1>=73)&&(angle1<=74))&&((angle2>=71)&&(angle2<=72))&&((angle3>=67)&&(angle3<=68))&&((angle4>=70)&&(angle4<=73))&&((angle5>=83)&&(angle5<=84)))
      {
        printfun('W'); 
      } 
    else if(((angle1>=79)&&(angle1<=80))&&((angle2>=76)&&(angle2<=78))&&((angle3>=66)&&(angle3<=66))&&((angle4>=76)&&(angle4<=77))&&((angle5>=79)&&(angle5<=81)))
      {
        printfun('X'); 
      } 
   else if(((angle1>=67)&&(angle1<=70))&&((angle2>=80)&&(angle2<=83))&&((angle3>=76)&&(angle3<=80))&&((angle4>=78)&&(angle4<=81))&&((angle5>=64)&&(angle5<=68)))
      {
        printfun('Y'); 
      } 
    else if(((angle1>=78)&&(angle1<=79))&&((angle2>=78)&&(angle2<=79))&&((angle3>=76)&&(angle3<=76))&&((angle4>=78)&&(angle4<=78))&&((angle5>=81)&&(angle5<=81)))
      {
        printfun('Z'); 
      } 
    
    
    else
      {
         Serial.println("WRONG SIGN ");
      }
  
}
// Serial.println(times);
  times++;
  delay(100);
  

}
