#include <stdio.h>


void printmenu (void){
  printf("===MAIN MENU===\n");
  printf("===1. DENSITY===\n");
  printf("===2. FORCE====\n");
  printf("===3. SPEED====\n");
  printf("===4. PROPORTION==\n");
  printf("===5. KINETIC==\n");
  printf("===6. BOYLE==\n");
  printf("===7. EXIT====\n");
  printf("===============\n");
  printf("===CHOICE===\n");
  printf("Enter the number: ");
}


float calculatedensity(float m, float volume){
  float density = 0;

  density = m / volume;
  return density;
}

float calculateforce(float mass, float acceleration){
  float force = 0;

  force = mass * acceleration;
  return force;
}


float calculatespeed(float distance, float time){
  float speed = 0;

  speed = distance/time;
  return speed;
}

float calculateproportion(float K, float X){
  float Y = 0;

  Y = K * X;
  return Y;
}

float calculateconstant(float pressure, float volume){
  float constant = 0;

  constant = pressure * volume;
  return constant;
}

int main (void){
  float mass = 0;
  float length = 0;
  float width = 0;
  float height = 0;
  int input;
  float acceleration = 0;
  int force = 0;
  float distance = 0;
  float time = 0;
  float speed = 0;
  float X = 0;
  float Y = 0;
  float K = 0;
  int choice;
  float speedA;
  float speedB;
  float energyA;
  float energyB;
  float density = 0;
  float pressure = 0;
  float volume = 0;
  float constant = 0;
  int exit = 0;
  char cdump;

  while(exit < 4){

    printmenu();
    scanf("%d%c", &input, &cdump);

    if(input == 1){
      printf("Input Mass: ");
      scanf("%f", &mass);

      printf("Input length: ");
      scanf("%f", &length);
      printf("Input width: ");
      scanf("%f", &width);
      printf("Input height: ");
      scanf("%f", &height);

      volume = length * width * height;
      density = calculatedensity(mass,volume);

      printf("mass is: %fkg\n", mass);
      printf("volume is: %fcm^3\n", volume);
      printf("density is: %fkg/cm^3\n\n\n\n", density);
    }

    if(input == 2){


      printf("Input mass: ");
      scanf("%f", &mass);
      printf("Input acceleration: ");
      scanf("%f", &acceleration);
      
      force = calculateforce(mass,acceleration);

      printf("mass is %fkg\n", mass);
      printf("acceleration is %fm/s^2\n", acceleration);
      printf("force is %dN\n", force);
    }

    if(input == 3){

     printf("Input distance: ");
     scanf("%f", &distance);
     printf("Input time: ");
     scanf("%f", &time);

     speed = calculatespeed(distance,time);

     printf("distance is %fkm\n", distance);
     printf("time is %fh\n", time);
     printf("speed is %fkm/h\n", speed);


   }

   if(input ==4){

    printf("Input X: ");
    scanf("%f", &X);
    printf("Input K: ");
    scanf("%f", &K);


    Y = calculateproportion(K,X);
    printf("X is: %f\n", X);
    printf("K is: %f\n", K);
    printf("Y is: %f\n\n\n\n", K * X);
    printf("This is an exmaple for &&");
  }


  if(input ==5){
    printf("Input increase(1) decrease (0): ");
    scanf("%d", &choice);
    printf("Input mass: ");
    scanf("%f", &mass);
    printf("Input speedA: ");
    scanf("%f", &speedA);
    printf("Input speedB: ");
    scanf("%f", &speedB);

    energyA = 0.5 * mass * (speedA * speedA);
    energyB = 0.5 * mass * (speedB * speedB);

    if(choice == 1){
      printf("\nThe answer is(increase): ");
      printf("%f\n", energyB - energyA);
    } else if(choice == 0){
      printf("\nThe answer is(decrease): ");
      printf("%f\n", energyA - energyB);
    } else {
      printf("\nWrong choice made, please do it again.\n");
    }
  }

  if(input ==6){
     printf("Input pressure: ");
      scanf("%f", &pressure);
      printf("Input volume: ");
      scanf("%f", &volume);
      
      constant = calculateconstant(pressure,volume);

      printf("pressure is %f\n", pressure);
      printf("volume is %fcm^3\n", acceleration);
      printf("constant is %f\n", constant);
    }

    if(input == 7){
      exit = 7;
    }
  }



return 0;
}