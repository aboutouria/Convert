//
//  main.c
//  Convert
//
//  Created by Anis Boutouria on 2013-02-27.
//  Copyright (c) 2013 Anis Boutouria. All rights reserved.
//

#include <stdio.h>

const double VALEUR_CONVERSION = 0.62137;




void cannot_altere(int n)
{
    n= 360;
}
void alter(int * const np){
    *np = 120;
}


int main(int argc, const char * argv[])
{
    
    int n = 10;
        int *const ad1 = &n;
    
    
    printf("%d", *ad1);
   
    
    
    return 0;
}

void echange(int * ad1, int * ad2){
    
    int x;
    x = * ad1;
    * ad1 = * ad2;
    *ad2 = x;
}


