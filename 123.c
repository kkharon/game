#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define STATE_STARTING      1

void print( const char *words )
{
    printf( "%s\n", words );
}

int getNumericInput()
{
    int  result = -1;
    char buffer1[64];   /* somewhere to store user input */
    char *endstr;

    while ( result == -1 )
    {         
        printf("    ? ");
        scanf("%s", buffer1);
             /* read from the console into the buffer */
        result = (int)strtol( buffer1, &endstr, 10 );     /* only simple error checking */

        if ( endstr == buffer1 )                          /* was the string -> integer ok? */
            result = -1;
    }

    return result;
}
char getYesOrNo()
{
    printf("TRY AGAIN? ");
    char result1 = '!';
    char buffer1[64];   
    do
    {
        
        scanf("%s", buffer1);
        // fgets( buffer1, sizeof( buffer1 ), stdin );            
        if ( buffer1[0] == 'Y' || buffer1[0] == 'y' )
            result1 = 'Y';
        else if ( buffer1[0] == 'N' || buffer1[0] == 'n' )
            result1 = 'N';
    } while ( !( result1 == 'Y' || result1 == 'N' ) );

    return result1;
}
void showIntroduction()
{
  printf("                     CLOSE ENCOUNTERS\n" );
  printf("                    CREATIVE COMPUTING\n" );
  printf("                  MORRISTOWN, NEW JERSEY\n\n\n\n" );
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
  char buffer[64]; 
  char  yes_or_no;
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
        print("YOU ARE SITUATED AT COORDINATES (0,0).  A UFO IS");
        print( "HEADING FOR IMPACT AT THAT LOCATION.\n");
        printf( "\nAT FIRST TRACK, THE UFO IS ON A COURSE OF %.f DEGREES ",Y);
        print( "LONGITUDE");
        printf( "AND %.f DEGREES LATITUDE.\n",Z);
        printf( "   (ALSO IT'S FALLING AT A SPEED OF %.f MILES/PER HOUR)\n",X);
        print( "YOU HAVE THE FOLLOWING ALTERNATIVES:");
        print( "A) YOU CAN ATTEMPT TO SHOOT THE UFO OUT OF THE SKY.  OR");
        print( "B) YOU CAN DO NOTHING, AND HOPE THAT AIR FRICTION");
        print( "   WILL CAUSE THE COURSE OF THE UFO TO DEVIATE, AND THUS");
        print( "   MISS YOUR LOCATION.\n");
        game_state = STATE_CHOOSE;
      } 
      else if (game_state == STATE_CHOOSE) 
      {
        if (N == 0) {
          printf( "WHAT IS YOUR PLAN OF ACTION (A OR B)? ");
          scanf("%s", buffer);
          
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
          printf("PLAN (A OR B)? ");
          scanf("%s", buffer);
        }
          if ( buffer[0] == 'A' || buffer[0] == 'a' )
          {
            T = 0;
            if (ABC > 0) {
                print("\nLAUNCH AN I.C.B.M. ON A COURSE THAT WILL INTERCEPT THE UFO");
                print("WITHOUT THE UFO BEING TOO CLOSE TO YOUR LOCATION.  IF THE SPEED");
                printf("OF THE UFO EXCEEDS %4.f M.P.H., YOUR MISSILES ARE USELESS!\n",H);
                ABC = ABC - 1;
            }
            printf("--SCANNERS PREDICT YOU HAVE %d MINUTES TO DESTROY THE UFO\n",M);
            print("BEFORE IT IS TOO CLOSE TO IMPACT.\n");
            C=Z-Y+I-(randFloat()*4)+1;
            float O = C+F;
            printf("--COMPUTER INDICATES COURSE AT FIRST SIGHTING IS APPROX. %1.f\n", O); 
            print("\n\nTYPE IN A COURSE ON THE CHART BELOU\n\n");
            print("TIME          SPEED          LONGITUDE          LATITUDE          COURSE");
            while (T<=5) 
            {
              int count1;
              printf(" %.1f         ",T);
              printf(" %.f           ", X);
              printf(" %.f            ", Y);
              printf("     %.f          ", Z);
              count1 = getNumericInput();
              if (T == M) {
                print("---------------ATTENTION----------------");
                printf("ELAPSED-TIME-INDICATES-THAT- %d MINUTES-HAVE-PASSED.--IF-YOU-\n",M);
                print("WERE-TO-HIT-THE-UFO-NOW----THE-FORCE-OF-THE-EXPLOSION-WOULD");
                print("----------DESTROY-YOU-AS-WELL-AS-THE-UFO-!");
                yes_or_no = getYesOrNo();
                if (yes_or_no == 'N'){
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
                  print("FANTASTIC!!!!  YOU HIT THE UFO EXACTLY ON PROJECTED COURSE");
                  print("YOU MUST BE VERY SHARP!\n");
                  yes_or_no = getYesOrNo();
                  if (yes_or_no == 'N'){
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
                      print("YOU ARE SHY OF THE UFO'S COORDINATES,");
                      print("HOWEVER THIS IS ONLY A SLIGHT DEVIATION SO THE");
                      print("UFO HAS BEEN DESTROYED!");
                    } 
                    else if (count1==C+1) 
                    {
                      print("YOU OVERSHOT THE UFO'S COORDINATES,");
                      print("HOWEVER THIS IS ONLY A SLIGHT DEVIATION SO THE");
                      print("UFO HAS BEEN DESTROYED!");
                    }
                  } 
                  else if (count1>=200) 
                  {
                    print("GOOD WORK! THERE GOES THE MISSILE--------RIGHT TOWARDS");
                    print("RUSSIA!!!! NOW YOU'RE DEFINITELY IN TROUBLE!!");
                    yes_or_no = getYesOrNo();
                    if (yes_or_no == 'N'){
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
                  print("AT THAT COURSE YOU SHOT YOUR MISSILE STRAIGHT UP, SO WHEN");
                  printf("IT RUNS OUT OF FUEL IN ABOUT %.f HOURS, IT WILL FALL", F);
                  print("THROUGH");
                  print("YOUR ROOF!!!!!!!!!!  GOODBYE!!!!!!");
                  yes_or_no = getYesOrNo();
                  if (yes_or_no == 'N'){
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
                printf( "SORRY--THE SPEED OF THE UFO HAS EXCEEDED %.f M.P.H.",H);
                print("THIS SPEED IS TO GREAT FOR YOUR DEFENSE SCREEN TO TRACK!");
                print("THEREFORE, YOU ARE (HA HA) DOOMED!");
                yes_or_no = getYesOrNo();
                if (yes_or_no == 'N'){
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
          } else if ( buffer[0] == 'B' || buffer[0] == 'b' ) {
            F = 0;
            A=(randFloat()*5)+1;
            C=Z-Y+A;
            M=12000;
            print("\n MILES   SPEED   LONGITUDE     LATITUDE    COURSE");
            print("------   -----   ----------   ----------   ------");
            while (M>0){
              P=X+1;
              printf("%d     %.f       %.f          %.f         %.f\n",M,X,Y,Z,C);
              
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
            printf("\n---------IMPACT-AT- %.f -MILES-PER-HOUR--\n",X);
            if(F<=2) {
              printf("-----------UPI-WIRE-SERVICE----ON-LINE- %.f : %.f : %.f:--\n",A,A+5,A+10);
              printf("---  HAVE JUST OBSERVED EXPLOSION AT COORDINATES (%.f,0).\n",0-F);
              A=(A+2)*A;
              printf("BLAST SEEN FROM %.f MILES AWAY.  NO SURVIVORS.\n",pow(A,3));
              yes_or_no = getYesOrNo();
              if (yes_or_no == 'N'){
                exit(0);
              }  
              else {
                N = N+1;
                game_state = STATE_CHOOSE;
              }
            } else {
              printf("GOOD WORK.  FRICTION OF %.f",F);
              printf(" %% HAS CAUSED THE COURSE\n");
              print("OF THE UFO TO DEVIATE.  IMPACT COORDINATES ARE\n");
              printf("NOW (%.f , %.f).  YOU MADE IT!\n",F,0-F);
              yes_or_no = getYesOrNo();    
              if ( yes_or_no == 'N' ) {
                exit(0); 
              } else {
                N = N+1;
                game_state = STATE_CHOOSE;
              }
            }
      }
    }  else
            {
                printf( "Internal error #2, fort %d does not exist\n", game_state );
                exit( 1 );  /* bug */
            }  
  }   
  return 0;
}

