/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/28/2021 10:21:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
struct dialing_code {
  char *country;
  int code;
};

const struct dialing_code country_codes[] = { {"Argentina",            54 }, {"Bangladesh",      880},
                                              {"Brazil",               55 }, {"Burma (Myanmar)",  95},
                                              {"China",                86 }, {"Colombia",         57},
                                              {"Congo, Dem. Rep. of", 243 }, {"Egypt",            20},
                                              {"Ethiopi",             251 }, {"France",           33},
                                              {"Germany",              49 }, {"India",            91},
                                              {"Indonesia",            62 }, {"Iran",             98},
                                              {"Italy",                39 }, {"Japan",            81},
                                              {"Mexico",               52 }, {"Nigeria",         234},
                                              {"Pakistan",             92 }, {"Philliphines",     63},
                                              {"Poland",               48 }, {"Russia",            7},
                                              {"South Africa",         27 }, {"South Korea",      82},
                                              {"Spain",                34 }, {"Sudan",           249},
                                              {"Thailand",             66 }, {"Turkey",           90},
                                              {"Ukraine",             380 }, {"United Kingdom",   44},
                                              {"United States",         1 }, {"Vietnam",          84}};

int main(void)
{
  int i = 0, code = 0;
  printf ( "Please enter a country code: " );
  scanf("%d", &code);

  for(i = 0; i < 31; i++)
    {
      if(code == country_codes[i].code)
      {
        printf("%s\n", country_codes[i].country);
        return 0;
      }
     
    }
  printf("Country code %d not found\n", code);
  return 0;
  
}
