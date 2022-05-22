

#include <Adafruit_NeoPXL8.h>
#define STRAND_NUM 4
#define NUM_LED 110  // Per strand. Total number of pixels is 8X this!
#define ROWS 10
#define COLS 11
#define defaultYVal 3


int8_t pins[8] = { PIN_SERIAL1_RX, PIN_SERIAL1_TX, MISO, 13, 5, SDA, A4, A3 };
int coord_conversion[NUM_LED] = {109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99
                                 , 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
                                 , 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77
                                 , 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76
                                 , 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55
                                 , 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54
                                 , 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33
                                 , 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32
                                 , 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11
                                 , 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
                                };
Adafruit_NeoPXL8 leds(NUM_LED, pins, NEO_GRBW);
uint32_t lGreen = leds.Color(0, 255, 100, 35);
uint32_t LED_off = leds.Color(0, 0, 0, 0);
uint32_t empty_grid[NUM_LED] = {LED_off};
uint32_t letter_a[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };
uint32_t letter_B[15] = {lGreen, lGreen, LED_off
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, LED_off
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_C[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_D[15] = {lGreen, lGreen, LED_off
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, LED_off
                        };

uint32_t letter_E[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_F[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                        };

uint32_t letter_G[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_H[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };

uint32_t letter_I[15] = {LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                        };

uint32_t letter_J[15] = {LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                         , LED_off, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_K[15] = {lGreen, LED_off, lGreen
                         , lGreen, lGreen, LED_off
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };
// Needs Review
uint32_t letter_L[15] = {lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_M[15] = {lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };
// Needs Review
uint32_t letter_N[15] = {lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };
// Needs Review
uint32_t letter_O[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_P[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, LED_off, LED_off
                        };

uint32_t letter_Q[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , LED_off, lGreen, lGreen
                         , LED_off, LED_off, lGreen
                        };
// Needs Review, HOW IN HELL?!?!
uint32_t letter_R[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, LED_off
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };

uint32_t letter_S[15] = {lGreen, lGreen, lGreen
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                         , LED_off, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_T[15] = {lGreen, lGreen, lGreen
                         , LED_off, lGreen, LED_off
                         , LED_off, lGreen, LED_off
                         , LED_off, lGreen, LED_off
                         , LED_off, lGreen, LED_off
                        };

uint32_t letter_U[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_V[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, LED_off
                         , lGreen, LED_off, LED_off
                        };

uint32_t letter_W[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , lGreen, lGreen, lGreen
                         , lGreen, LED_off, lGreen
                        };

uint32_t letter_X[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , LED_off, lGreen, LED_off
                         , lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                        };

uint32_t letter_Y[15] = {lGreen, LED_off, lGreen
                         , lGreen, LED_off, lGreen
                         , LED_off, lGreen, LED_off
                         , LED_off, lGreen, LED_off
                         , LED_off, lGreen, LED_off
                        };

uint32_t letter_Z[15] = {lGreen, lGreen, lGreen
                         , LED_off, LED_off, lGreen
                         , LED_off, lGreen, LED_off
                         , lGreen, LED_off, LED_off
                         , lGreen, lGreen, lGreen
                        };

uint32_t letter_SP[15] = {LED_off, LED_off, LED_off, //26th char
                          LED_off, LED_off, LED_off,
                          LED_off, LED_off, LED_off,
                          LED_off, LED_off, LED_off,
                          lGreen, lGreen, lGreen
                         };
//typedef uint32_t letterBlock[15];
uint32_t *letter_aray[] = {{ letter_a}, {letter_B}, {letter_C}, {letter_D}, {letter_E}, {letter_F},
  {letter_G}, {letter_H}, {letter_I}, {letter_J}, {letter_K}, {letter_L},
  {letter_M}, {letter_N}, {letter_O}, {letter_P}, {letter_Q}, {letter_R},
  {letter_S}, {letter_T}, {letter_U}, {letter_V}, {letter_W}, {letter_X},
  {letter_Y}, {letter_Z}, {letter_SP}
};


uint8_t frame = 0;

void setup_Matrix() {
  leds.begin();
  leds.setBrightness(32);
}

void clear_Matrix()
{

  //  for (int p = 0; p < NUM_LED; p++) { // For each pixel of row...
  //    leds.setPixelColor(STRAND_NUM * NUM_LED + p, 0);
  //  }
  //
  //  leds.show();
  set_matrix(empty_grid, 10, 11, 1, 1, 0, 0);
  //leds.clear();
}

void test_Matrix()
{
  //  for(int r = 0; r < 8; r++){
  //    Serial.println(r);// For each row...
  for (int p = 0; p < NUM_LED; p++) { // For each pixel of row...
    leds.setPixelColor(STRAND_NUM * NUM_LED + p, leds.Color(24, 13, 14, 0));
  }
  Serial.println("Turned on strip");
  leds.show();

  //      delay(1000);
  //    }


  frame++;
}

uint32_t Current_Grid_State[110] = {0};

void set_matrix(uint32_t colors[], uint32_t rows, uint32_t cols, uint32_t x, uint32_t y)
{
  int start_point = (y - 1) * COLS + (x - 1);
  int color_index = 0;

  for (int r = 0; r < rows; r++) {//check if r > 10 or < 1
    for (int c = 0; c < cols; c++) {//check if c > 11 or < 1
      int point = start_point + c + (COLS * r) ;
      if (VERBOSE)
      {
        Serial.print("Setting LED: ");
        Serial.print(point);//only plot this if x and y are in bounds
        Serial.print(":");
        Serial.println(coord_conversion[point]);
      }
      leds.setPixelColor((STRAND_NUM * NUM_LED) + coord_conversion[point], colors[color_index]);
      color_index++;
      //            delay(1000);
    }
  }
  leds.show();
}

void set_matrix(uint32_t colors[], uint32_t rows, uint32_t cols, uint32_t x, uint32_t y, int xOffset, int yOffset)
{

  int start_point = (y - 1) * COLS + (x - 1);
  int color_index = 0;
  int rowEnd = ((int)(rows)) + yOffset;
  int colEnd = ((int)(cols)) + xOffset;

  for (int r = yOffset; r < rowEnd; r++) {//check if r > 10 or < 1
    for (int c = xOffset; c < colEnd; c++) {//check if c > 11 or < 1
      int point = start_point + (c) + (COLS * (r)) ;
      bool validPoint = true;
      if (VERBOSE)
      {
        Serial.print("Setting LED: ");
        Serial.print(point);//only plot this if x and y are in bounds
        Serial.print(":");

        //        Serial.println(coord_conversion[point]);
      }
      if (((y + r) > 10)
          || ((x + c) > 11)
          || (r < 0)
          || (r > 9)
          || (c < 0)
          || (c > 10))
      {
        validPoint = false;
      }
      if (validPoint == true)
      {
        leds.setPixelColor((STRAND_NUM * NUM_LED) + coord_conversion[point], colors[color_index]);
      }
      color_index++;
      //            delay(1000);
    }


  }
  leds.show();
}

void chars_to_index(char source[], char *dest, int length)
{
  for (int i = 0; i < length; i++)
  {
    if (source[i] == ' ')
    {
      dest[i] = 26;
      continue;
    }
    if (source[i] < 65)
    {
      dest[i] = 0;
      continue;
    }
    if (source[i] > 90)
    {
      source[i] -= 32;
    }
    if (source[i] > 90 || source[i] < 65)
    {
      dest[i] = 90;
      continue;
    }
    dest[i] = source[i] - 65;
    Serial.println((int)(dest[i]));
  }
}

void test_Set_Matrix1()
{
  Serial.println("testing string to index function");
  uint32_t color[2] = {leds.Color(0, 255, 0, 0), leds.Color(0, 255, 0, 0)};
  set_matrix(color, 2, 1, 2, 1);
  set_matrix(letter_R, 5, 3, 3, 2);
}

void test_print_array(char data[], int len)
{
  for (int i = 0; i < len; i++)
  {
    int numLeft = len - i;
    if (numLeft >= 3)
    {
      numLeft = 3;

    }
    else if (len > 3)
    {
      break;
    }
    else if ((len <= 3) && (i > 0))
    {
      break;
    }
    clear_Matrix();
    if ((i + 2) < (len - 1))
    {
      for (int k = 0; k >= -3; k--)
      {
        int chars_printed = 0;
        for (int j = i; j < (i + numLeft); j++)
        {
          if (j == i)
          {
            set_matrix(letter_aray[data[j]], 5, 3, 1 + (4 * chars_printed), defaultYVal , k, 0);
          }
          else
          {
            set_matrix(letter_aray[data[j]], 5, 3, 1 + (4 * chars_printed) + k, defaultYVal, 0, 0);
          }
          chars_printed++;
          if ((chars_printed == 3) && (j < (len - 1)))
          {
            if (k < 0)
            {
              set_matrix(letter_aray[data[j + 1]], 5, 3, 1 + (4 * (chars_printed)) + k, defaultYVal, 0, 0);
            }
          }
        }

        delay(100);
        if (k > (-3))
        {
          clear_Matrix();
        }
      }
    }
    else
    {
      int chars_printed = 0;
      for (int j = i; j < (i + numLeft); j++)
      {
        set_matrix(letter_aray[data[j]], 5, 3, 1 + (4 * chars_printed), defaultYVal, 0, 0);
        chars_printed++;
      }
    }
    //    delay(1000);
  }
}

void test_string_to_indexes()
{
  //  char testString[] = {'T', 'h' , 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', 't', 'e', 's', 't'};
  //  char results[] = {'T', 'h' , 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', 't', 'e', 's', 't'};
  char testString[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  char results[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  chars_to_index(testString, (char *)(&results), 6);
  test_print_array(results, 6);
}

void printStringToDisplay(String data)
{
  if (data.length() <= 1)
  {
    return;
  }
  char *dataArray = &data[0];
  Serial.println(data.length() - 1);
  chars_to_index(dataArray, (char *)(dataArray), data.length() - 1);
  test_print_array(dataArray, (data.length() - 1));
}
