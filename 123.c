#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "functions.h"
#include "utils.h"

#define STATE_STARTING      1

void showIntroduction()
{
  PRINT("                     CLOSE ENCOUNTERS\n" );
  PRINT("                    CREATIVE COMPUTING\n" );
  PRINT("                  MORRISTOWN, NEW JERSEY\n\n\n\n" );
}

float randomAB(float a, float b)
{
    return ((b - a) * ((float)rand() / (float)RAND_MAX)) + a;
}
float randFloat()
{
    return randomAB(0, 1);
}
#define STATE_STARTING      1
#define STATE_CONTINUE      2
#define STATE_CHOOSE     3

int main(void) {
  int   game_state = STATE_STARTING;
  srand(time(NULL));
  // char buffer[64]; 
  // char  yes_or_no;
  float X;
  float C;
  float H;
  float Y;
  float V;
  float A;
  float F;
  float P;
  float I;
  float Z;
  float T;
  int M;
  int N = 0;
  int ABC = 1;
  char *rules_flagY;
 
while (1)
  {
    if ( game_state == STATE_STARTING )
      {
        showIntroduction();
        game_state = STATE_CONTINUE;
      }
       else if (game_state == STATE_CONTINUE) 
       {
        while (Z <100){
          Z=(randFloat()*140);
        }
        while (Y < 40) {
          Y=(randFloat()*60);
        }
        
        for (I=(randFloat()*20);;){
          V = (randFloat()*400)+200;
          F = (randFloat()*5)+1;
          break;
        }
        for (X=(randFloat()*5000)+2001;;)
        {
          H = X+8000;

          if (X < 3000) {
            M = 5;
          } else if (X>=3000 && X<3700) {
            M = 4;
          } else if (X>=3700 && X<4700) {
            M=3;
          } else if (X >= 4700) {
            M=2;
          }
          break;
        }
        PRINT("YOU ARE SITUATED AT COORDINATES (0,0).  A UFO IS");
        PRINT( "HEADING FOR IMPACT AT THAT LOCATION.\n");
        PRINT( "\nAT FIRST TRACK, THE UFO IS ON A COURSE OF %.f DEGREES ",Y);
        PRINT( "LONGITUDE\n");
        PRINT( "AND %.f DEGREES LATITUDE.\n",Z);
        PRINT( "   (ALSO IT'S FALLING AT A SPEED OF %.f MILES/PER HOUR)\n",X);
        PRINT( "YOU HAVE THE FOLLOWING ALTERNATIVES:\n");
        PRINT( "A) YOU CAN ATTEMPT TO SHOOT THE UFO OUT OF THE SKY.  OR\n");
        PRINT( "B) YOU CAN DO NOTHING, AND HOPE THAT AIR FRICTION\n");
        PRINT( "   WILL CAUSE THE COURSE OF THE UFO TO DEVIATE, AND THUS\n");
        PRINT( "   MISS YOUR LOCATION.\n");
        game_state = STATE_CHOOSE;
      } 
      else if (game_state == STATE_CHOOSE) 
      {
        if (N == 0) {
          PRINT( "WHAT IS YOUR PLAN OF ACTION (A OR B)? ");
          input_string(&rules_flagY);
        } else {
           while (Z <100){
          Z=(randFloat()*140);
        }
        while (Y < 40) {
          Y=(randFloat()*60);
        }
        
        for (I=(randFloat()*20);;){
          V = (randFloat()*400)+200;
          F = (randFloat()*5)+1;
          break;
        }
        for (X=(randFloat()*5000)+2001;;)
        {
          H = X+8000;
          if (X < 3000) {
            M = 5;
          } else if (X>=3000 && X<3700) {
            M = 4;
          } else if (X>=3700 && X<4700) {
            M=3;
          } else if (X >= 4700) {
            M=2;
          }
          break;
        }
          PRINT("\nPLAN (A OR B)? ");
          input_string(&rules_flagY);
        }
          if ( strcmp (rules_flagY, "A") == 0 )
          {
            T = 0;
            if (ABC > 0) {
                PRINT("\nLAUNCH AN I.C.B.M. ON A COURSE THAT WILL INTERCEPT THE UFO\n");
                PRINT("WITHOUT THE UFO BEING TOO CLOSE TO YOUR LOCATION.  IF THE SPEED\n");
                PRINT("OF THE UFO EXCEEDS %4.f M.P.H., YOUR MISSILES ARE USELESS!\n",H);
                ABC = ABC - 1;
            }
            PRINT("--SCANNERS PREDICT YOU HAVE %d MINUTES TO DESTROY THE UFO\n",M);
            PRINT("BEFORE IT IS TOO CLOSE TO IMPACT.\n");
            C=Z-Y+I-(randFloat()*4)+1;
            float O = C+F;
            PRINT("--COMPUTER INDICATES COURSE AT FIRST SIGHTING IS APPROX. %1.f\n", O); 
            PRINT("\n\nTYPE IN A COURSE ON THE CHART BELOU\n\n");
            PRINT("TIME          SPEED          LONGITUDE          LATITUDE          COURSE\n");
            while (T<=5) 
            {
              int count1;
              PRINT(" %.1f         ",T);
              PRINT(" %.f           ", X);
              PRINT(" %.f            ", Y);
              PRINT("     %.f               ", Z);
              input_number(&count1);
              if (T == M) {
                PRINT("---------------ATTENTION----------------\n");
                PRINT("ELAPSED-TIME-INDICATES-THAT- %d MINUTES-HAVE-PASSED.--IF-YOU-\n",M);
                PRINT("WERE-TO-HIT-THE-UFO-NOW----THE-FORCE-OF-THE-EXPLOSION-WOULD\n");
                PRINT("----------DESTROY-YOU-AS-WELL-AS-THE-UFO-!\n");
                PRINT("TRY AGAIN? ");
                char *rules_flag;
                input_string(&rules_flag);
                if (strcmp (rules_flag, "NO") == 0){
                  exit(0); 
                }
                else {
                  N = N+1;
                  game_state = STATE_CHOOSE;
                  break;
                } 
              }
              if (X <= H) 
              {
                if (count1 == (int)C){
                  PRINT("FANTASTIC!!!!  YOU HIT THE UFO EXACTLY ON PROJECTED COURSE\n");
                  PRINT("YOU MUST BE VERY SHARP!\n");
                  PRINT("TRY AGAIN? ");
                  char *rules_flag;
                  input_string(&rules_flag);
                  if (strcmp (rules_flag, "NO") == 0){
                    exit(0); 
                  }
                  else {
                    N = N+1;
                    game_state = STATE_CHOOSE;
                    break;
                  } 
                } 
                else if (count1 > 10)
                {
                  if (count1 < 200) 
                  {
                    if (count1==C-1){
                      PRINT("YOU ARE SHY OF THE UFO'S COORDINATES,\n");
                      PRINT("HOWEVER THIS IS ONLY A SLIGHT DEVIATION SO THE\n");
                      PRINT("UFO HAS BEEN DESTROYED!\n");
                    } 
                    else if (count1==C+1) 
                    {
                      PRINT("YOU OVERSHOT THE UFO'S COORDINATES,\n");
                      PRINT("HOWEVER THIS IS ONLY A SLIGHT DEVIATION SO THE\n");
                      PRINT("UFO HAS BEEN DESTROYED!\n");
                    }
                  } 
                  else if (count1>=200) 
                  {
                    PRINT("GOOD WORK! THERE GOES THE MISSILE--------RIGHT TOWARDS\n");
                    PRINT("RUSSIA!!!! NOW YOU'RE DEFINITELY IN TROUBLE!!\n");
                    PRINT("TRY AGAIN? ");
                    char *rules_flag;
                    input_string(&rules_flag);
                    if (strcmp (rules_flag, "NO") == 0){
                      exit(0); 
                    }
                    else {
                      N = N+1;
                      game_state = STATE_CHOOSE;
                      break;
                    } 
                  }
                } 
                else if (count1 <= 10) 
                {
                  PRINT("\nAT THAT COURSE YOU SHOT YOUR MISSILE STRAIGHT UP, SO WHEN\n");
                  PRINT("IT RUNS OUT OF FUEL IN ABOUT %.f HOURS, IT WILL FALL\n", F);
                  PRINT("THROUGH\n");
                  PRINT("YOUR ROOF!!!!!!!!!!  GOODBYE!!!!!!\n");
                  PRINT("TRY AGAIN? ");
                  char *rules_flag;
                  input_string(&rules_flag);
                  if (strcmp (rules_flag, "NO") == 0){
                    exit(0); 
                  }
                  else {
                    N = N+1;
                    game_state = STATE_CHOOSE;
                    break;
                  } 
                }
              } 
              else 
              {
                PRINT( "SORRY--THE SPEED OF THE UFO HAS EXCEEDED %.f M.P.H.\n",H);
                PRINT("THIS SPEED IS TO GREAT FOR YOUR DEFENSE SCREEN TO TRACK!\n");
                PRINT("THEREFORE, YOU ARE (HA HA) DOOMED!\n");
                char *rules_flag;
                input_string(&rules_flag);
                PRINT("TRY AGAIN? ");
                if (strcmp (rules_flag, "NO") == 0){
                    exit(0); 
                }
                else {
                    N = N+1;
                    game_state = STATE_CHOOSE;
                    break;
                } 
              }
              X = X+V+1200;
              Y=Y-I+5;
              Z=Z-I+5;
              C=Z-Y+5;
              T=T+0.5;
            }        
          } else if ( strcmp (rules_flagY, "B") == 0  ) 
          {
            F = 0;
            A=(randFloat()*5)+1;
            C=Z-Y+A;
            M=12000;
            PRINT("\n MILES   SPEED   LONGITUDE     LATITUDE    COURSE\n");
            PRINT("------   -----   ----------   ----------   ------\n");
            while (M>0){
              P=X+1;
              PRINT("%d     %.f       %.f          %.f         %.f\n",M,X,Y,Z,C);
              
              C=Z-Y;
              X= X + (randFloat()*5000)+2000;
              M=M-X/60;
              Y=Y-(randFloat()*10);
              Z=Z-(randFloat()*10);
              C=Z-Y;
              if (X-P > 5700){
                F=F+1;
              }
            }
            PRINT("\n---------IMPACT-AT- %.f -MILES-PER-HOUR--\n",X);
            if(F<=2) {
              PRINT("-----------UPI-WIRE-SERVICE----ON-LINE- %.f : %.f : %.f:--\n",A,A+5,A+10);
              PRINT("---  HAVE JUST OBSERVED EXPLOSION AT COORDINATES (%.f,0).\n",0-F);
              A=(A+2)*A;
              PRINT("BLAST SEEN FROM %.f MILES AWAY.  NO SURVIVORS.\n",pow(A,3));
              PRINT("TRY AGAIN? ");
              char *rules_flag;
              input_string(&rules_flag);
              if (strcmp (rules_flag, "NO") == 0){
                exit(0);
              }  
              else {
                N = N+1;
                game_state = STATE_CHOOSE;
              }
            } else {
              PRINT("GOOD WORK.  FRICTION OF %.f",F);
              PRINT(" %% HAS CAUSED THE COURSE\n");
              PRINT("OF THE UFO TO DEVIATE.  IMPACT COORDINATES ARE\n");
              PRINT("NOW (%.f , %.f).  YOU MADE IT!\n",F,0-F);
              PRINT("TRY AGAIN? ");
              char *rules_flag;
              input_string(&rules_flag);
              if (strcmp (rules_flag, "NO") == 0){
                exit(0); 
              } else {
                N = N+1;
                game_state = STATE_CHOOSE;
              }
            }
          }
    }  else
            {
                PRINT( "Internal error #2, fort %d does not exist\n", game_state );
                exit( 1 );  /* bug */
            }  
  }   
  return 0;
}

