void LEFT (void)
{
   analogWrite(mot3,0);
   analogWrite(mot4,30);
   
   
   while(Left==0)
   {
    Left=digitalRead(left);
    Right=digitalRead(right);
    if(Right==0)
    {
      int lprev=Left;
      int rprev=Right;
      STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(left);
         Right=digitalRead(right);
      }
    }
    analogWrite(mot1,255);
    analogWrite(mot2,0); 
   }
   analogWrite(mot3,255);
   analogWrite(mot4,0);
}

void RIGHT (void)
{
   analogWrite(mot1,0);
   analogWrite(mot2,30);

   while(Right==0)
   {
    Left=digitalRead(left);
    Right=digitalRead(right);
    if(Left==0)
    {
      int lprev=Left;
      int rprev=Right;
     STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(left);
         Right=digitalRead(right);
      }
    }
    analogWrite(mot3,255);
    analogWrite(mot4,0);
    }
   analogWrite(mot1,255);
   analogWrite(mot2,0);
}
void STOP (void)
{
analogWrite(mot1,0);
analogWrite(mot2,0);
analogWrite(mot3,0);
analogWrite(mot4,0);
  
}
