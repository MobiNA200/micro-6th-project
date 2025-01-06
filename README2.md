## آزمایش شماره 2 : کنترل دما با استفاده از سنسور LM35

در این آزمایش از سنسور LM35 برای اندازه گیری دما استفاده شده است. 

سنسور LM35 به دلیل خروجی خطی خود برای اندازه گیری دما به ولتاژ، 
انتخاب مناسبی است. خروجی سنسور به یکی از ورودی های آنالوگ آردوینو
  (A0) متصل شده است. مقدار دمای اندازه گیری شده از طریقسریال مانیتور 
نمایش داده می شود. همچنین اگر دما از مقدار 27 درجه سلسیوس بیشتر شود، 
LED روشن میشود که شبیه ساز روشن شدن کولر است.

### کد ما به شرح زیر است :
```c++
const int lm35 = A0;
int led = 9;
void setup(){
  Serial.begin(9600);
  pinMode(led , OUTPUT);
}
void loop() {
  int sensorvalue = analogRead(lm35);
  float voltage = sensorvalue * (5.0 / 1024.0);
  float tempC = voltage * 100 ;
  Serial.print("temperature : ");
  Serial.print(tempC);
  Serial.println(" `C");
  delay(1000);
  if(tempC > 27)
  {
    Serial.print("cooler on!");
    digitalWrite(led , HIGH);
  }
  else {
    digitalWrite(led , LOW);
  }
}
```

## شماتیک مدار :
![shema](/shematic/photos%20of%20shema/6-2.jpg)

## عکس و گیف از آزمایش :


![gif](./photos%20&%20videos%20of%20project/LM35-ezgif.com-video-to-gif-converter%20(1).gif)
