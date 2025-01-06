## آزمایش شماره 1 : درایور موتور

در این آزمایش، موتور DC توسط Arduino و درایور موتور کنترل میشود. با 
استفاده از سیگنال PWM ، سرعت موتور به صورت تدریجی از صفر تا حداکثر 
مقدار تغییر میکند و سپس جهت چرخش آن تغییر داده می شود. این فرآیند شامل 
دو مرحله است:

.1 چرخش موتور در یک جهت با افزایش تدریجی سرعت.

.2 تغییر جهت موتور و تکرار افزایش تدریجی سرعت.

### کد به شرح زیر است :
```c++
void setup() {
  pinMode(9 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(10 , OUTPUT);
}

void loop() {
  for (int i = 0 ; i< 256 ; i++){
    digitalWrite(9 , HIGH);
    digitalWrite(8 , LOW);
    digitalWrite(10 , i);
    delay(20);
  }
  delay(50);

  for (int i = 0 ; i <256 ; i++){
    digitalWrite(9 , LOW);
    digitalWrite(8 , HIGH);
    digitalWrite(10 , i);
    delay(20);
  }
  delay(50);
}
```

### شماتیک مدار :
![shema](/shematic/photos%20of%20shema/6-1.jpg)

![photo](/photos%20&%20videos%20of%20project/20241112_090101.jpg)