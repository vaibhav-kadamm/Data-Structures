#include<stdio.h>

int main(){



/*  12345
    4321
    123
    21
    1
*/


// for(int i=5;i>=1;i--){
//     if(i%2==0)
//     for(int j=i;j>=1;j--){
//     printf("%d",j);
// }
//    // printf("\n");
//     else
//     for(int j=1;j<=i;j++){
//         printf("%d",j);
//     }
//     printf("\n");
// }
// }


    //for(int i=4;i>=1;i-=2){

/* 1234567
   12345
   123
   1
*/

// for(int i=7;i>=1;i-=2){
//   for(int j=1;j<=i;j++){
//     printf("%d",j);
//   }
//   printf("\n");
// }
// }



/* 1
   01
   101
   10101
*/


// for(int i=1;i<=5;i++){
//     if(i%2==0)
//     for(int j=1;j<=i;j++){
//         printf("%d",j%2);
//     }
//     else
//     for(int j=1;j<=i;j++){
//         printf("%d",j%2);
//     }
//     printf("\n");
// }

// }



/* 13579
   3579
   579
   79
   9
*/

/* for(int i=1;i<=9;i+=2){
    for(int j=i;j<=9;j+=2){
        printf("%d",j);
    }
    printf("\n");
}
} */


/* 1
   2 4
   1 3 5
   2 4 6 8
   1 3 5 7 9
 */

// for(int i=1;i<=5;i++){
//     if(i%2==0)
//     for(int j=1;j<=i;j++){
//         printf("%d",j*2);
//     }
//     else
//     for(int j=1;j<=i*2;j+=2){
//         printf("%d",j);
//     }
//     printf("\n");
// }
// }

// 55555
// 45555
// 34555
// 23455
// 12345


// for(int i=5;i>=1;i--){
//     for(int j=i;j<=5;j++){
// printf("%d",j);
//     }
//     for(int j=i;j>1;j--){
//         printf("5");
//     }
//    printf("\n");
// }
 
// }


/* 1
   2 3
   4 5 6 
   7 8 9 10 
 */
// int k=1;
// for(int i=4;i>=1;i--){
//     for(int j=i;j<=4;j++){
//         if(j==i)
//         printf("%d ",k++);
//         else
//         printf("%d ",k++);

//     } 
//     printf("\n");
// }


/* 1
   2 6
   3 7 10
   4 8 11 13
   5 9 12 14 15
 */

// for(int i=1;i<=5;i++){
// int k=i;
// int l=5-1;
// for(int j=1;j<=i;j++){
//     printf("%d",k+" ");
//     k+=l;
//     l--;
// }

// printf("\n");
// }
// }


/* 12344321
   123**321
   12****21
   1******1 
 */

// for(int i=4;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         printf("%d",j);
//     }
//     //printf("\n");
// for(int j=4;j>i;j--){
//     printf("**");
// }
// for(int j=i;j>=1;j--){
//         printf("%d",j);
//     }
//     printf("\n");
// }

// //printf("\n");
// }

/* *4321
   5*321
   54*21
   543*1
   5432*
 */

// for(int i=5;i>=1;i--){
    
//     for(int j=5;j>=1;j--){
//         if(i==j)
//         printf("*");
//         else
//         printf("%d",j);
// }
//     printf("\n");

// }
// }


/* 5432*
   543*1
   54*21
   5*321
   *4321 
 */
//  for(int i=1;i<=5;i++){
    
//     for(int j=5;j>=1;j--){
//         if(i==j)
//         printf("*");
//         else
//         printf("%d",j);
// }
//     printf("\n");

// }
// }


/* 1
   232
   45654
   78910987 
 */

// int k=1;
// for(int i=1;i<=4;i++){
//    for(int j=1;j<=i;j++){
//       printf("%d",k++);
//    }
// for(int j=i;j>=1;j++){
//      printf("%d",k++);
// }   
// printf("\n");
// }

// }


// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// for(int i=1;i<=4;i++){
//    for(int j=1;j<=i;j++){
//       if(i==j)
//       printf("%d",i);
//       else
//       printf("%d*",i);
//    }
//    printf("\n");
// }
// for(int i=3;i>=1;i--){
//    for(int j=1;j<=i;j++){
//       if(i==j)
//       printf("%d",i);
//       else
//       printf("%d*",i);
//    }
//    printf("\n");
// }


// 1
// 24
// 135
// 2468
// 13579

// for(int i=1;i<=5;i++){
//    if(i%2==0)
//    for(int j=2;j<=i*2;j+=2){
//       printf("%d ",j);
//    }
//    else
//    for(int j=1;j<i*2;j+=2){
//       printf("%d ",j);
//    }
//    printf("\n");

// }
// }




/* 
   11 12 13 14
   21 22 23 24
   31 32 33 34
   
 */

// for(int i=1;i<=3;i++){
//    for(int j=1;j<=4;j++){
//       printf("%d%d ",i,j);
//    }
//    printf("\n");
// }
// }


/* 
 1
 23
 456
 78910

 */
//  int k=1;
//  for(int i=1;i<=4;i++){
//    for(int j=1;j<=i;j++){
//       printf("%d",k++);

//    }
//    printf("\n");
//  }
// }


/* 1
   2 6
   3 7 10
   4 8 11 13
   5 9 12 14 15
 */
    
//    for(int i=1;i<=5;i++){
//       int k=1,l=4;
//       k=i;
//       for(int j=1;j<=i;j++){
//          if(i==j)
//          printf("%d",k);
//          else
//          printf("%d ",k);
//       k=k+l;
//       l--;
//       }
//       printf("\n");

//    }
// }

// for(int i=1;i<=5;i++){
//    int k=1,l=4;
//    k=i;
//    for(int j=1;j<=i;j++){
//       if(i==j)
//     printf("%d",k);
//     else
//     printf("%d ",k);
//     k=k+l;
//     l--;
//    }
//    printf("\n");
// }
// }


/* 
        1
      2 3 2
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5         

 */

// }
// int k=4;
// for(int i=1;i<=5;i++){
   
//    for(int j=1;j<=k*2;j++)
//       printf(" ");
//       int l=i;
//    for(int j=1;j<=i;j++)
//       printf("%d ",l++);

//         l=l-2;
//       for(int j=1;j<i;j++)
//       printf("%d ",l--);


//       printf("\n");
//       k--;
// }
// }
/* int k=4;
for(int i=1;i<=5;i++){
  for(int j=1;j<=k*2;j++)
   printf(" ");
   int l=i;
   for(int j=1;j<=i;j++)
   printf("%d ",l++);

   l=l-2;
   for(int j=1;j<i;j++)
      printf("%d ",l--);

      printf("\n");
      k--;
   
}
} */



/* 
   1 2 3 4 5 
   6 7 8 9
 10 11 12
 13 14
 15

 */
  
// int k=1;
// for(int i=5;i>=1;i--){
//    for(int j=i;j>=1;j--)
//            if(k<10)
//     printf(" %d ",k++);
//     else
//        printf("%d ",k++);

//    printf("\n");
// }

// }


/* 1234
   234 1
   34 21
   4 321 
   */

// for(int i=1;i<=4;i++){
//    for(int j=i;j<=4;j++){
//       printf("%d",j);

//    }
//    //for(int i=1;i<=3;i++){
//    for(int j=i-1;j>=1;j--){
//    printf("%d",j);
   
// }
//       printf("\n");

//    }


// }

/* 11111
   1   1
   1   1
   1   1
   11111 
   */

// for(int i=1;i<=5;i++){
//    if(i==1||i==5)
//    for(int j=1;j<=5;j++){
//       printf("1");
//    }
//    else
   
//    for(int j=1;j<=5;j++){
//       if(j==1||j==5)
//       printf("1");
//       else
//       printf(" ");
//    }
//    printf("\n");
// }
// }

/* 1
   1 2
   3 5 8 
   13 21 34 55
   89 144 233 377 610
 */
/* int pn=1,nn=1,sum;
for(int i=1;i<=5;i++){
   for(int j=1;j<=i;j++){
      printf("%d ",pn);

      sum=pn+nn;
      pn=nn;
      nn=sum;


   }
   printf("\n");
}
} */

/* 

  4444 444
  4333 334
  4322 234
  4321 234

 */

// for(int i=1;i<=4;i++){
//    for(int j=4;j>=i;j++){
      
//    }
// }

/* 
 1 2 3 4 5
 2 1 2 3 4
 3 2 1 2 3
 4 3 2 1 2 
 5 4 3 2 1
 */
// for(int i=1;i<=5;i++){
//    for(int j=i;j>=2;j--){
//       printf("%d ",j);
//    }
//    for(int j=1;j<=6-i;j++){
//       printf("%d ",j);
//    }
   
//   printf("\n");
// // }
// }
// }


/* 
   1
   3 2
   4 5 6
   10 9 8 7
   11 12 13 14 15
 */
// int k=1;
// for(int i=1;i<=5;i++){
//    if(i==2||i==4)
//    for(int j=1;j<=i;j++){
//       printf("%d ",k++);
//    }
//    printf("\n");
// }
// }

/* 
  1
  232
  34543
  4567654
  567898765
 */
// int k=1;
// for(int i=1;i<=5;i++){
//    k=i;
//    for(int j=1;j<=i;j++){
//       printf("%d",k++);
//    }
//    k=k-2;
//   for(int j=2;j<=i;j++){
//    printf("%d",k--);
//   }
//    printf("\n");
// }
// }

// 1      1
//  2    2
//   3  3
//    4

// for(int i=1;i<=4;i++){
//    for(int j=1;j<=i;j++){
//       printf(" ");
//    }
//          printf("%d",i);

//       for(int j=1;j<=4*2-(2*i);j++){
//          printf(" ");

// }
// if(i!=4)
// printf("%d",i);

// printf("\n");
// }
// for(int i=3;i>=1;i--){
//    for(int j=1;j<=i;j++){
//       printf(" ");
//    }
//          printf("%d",i);

//       for(int j=1;j<=4*2-(2*i);j++){
//          printf(" ");

// }
// if(i!=4)
// printf("%d",i);

// printf("\n");
// }

// }


/* 
------1       6space  0space
----2---2     4space  3space
--3-------3   2space  7space
4---------4  0space  9space
--3-------3
----2---2
------1

 */
// for(int i=1;i<=4;i++){
//     for(int j=4*2-i*2;j>=1;j--){
//       printf(" ");
//     }
//     printf("%d",i);
//     for(int j=5;j<=i*4-1;j++){
//       printf(" ");
//     }
//     if(i!=1){
//     printf("%d",i);
//     }
//         printf("\n");
// }
// for(int i=3;i>=1;i--){
//     for(int j=4*2-i*2;j>=1;j--){
//       printf(" ");
//     }
//     printf("%d",i);
//     for(int j=5;j<=i*4-1;j++){
//       printf(" ");
//     }
//     if(i!=1){
//     printf("%d",i);
//     }
//         printf("\n");
// }
// }


/* 
  *****
  *   *
  *****
    *
    * 

 */


//             for(int i=1;i<=5;i++){
//                if(i==1 || i==3){
//                   for(int j=1;j<=5;j++){
//                      printf("*");
//                   }
//                }else if(i==2){
//                   for(int j=1;j<=5;j++){
//                     if(j==1 || j==5){
//                       printf("*");
//                     }else{
//                      printf(" ");
//                     }
//                   }
//                }else{
//                   if(i==4 || i==5){
//                      for(int j=1;j<=5;j++){
//                     if(j==3){
//                       printf("*");
//                     }else{
//                      printf(" ");
//                     }
//                   }
//                }
              
//             } 
//              printf("\n");
// } 
// }


/* 
  *****
  *   * 
  *   * * *
  *   *
  ***** 

 */
    
// for(int i=1;i<=5;i++){
//    if(i==1||i==5)
//     for(int j=1;j<=5;j++){
//       printf("*");
//     }
//     else //if(i==2)
//     for(int j=1;j<=5;j++){
//       if(j==1|| j==5)
//       printf("*");
//       else
//       printf(" ");
//     }
//     if(i==3)
//     for(int j=1;j<=5;j++){
//       if(j==2||j==4)
//       printf("*");
//       else
//       printf(" ");
//     }
    
//     printf("\n");
// }
// }


/* 
* * * * *
* * 1 * *
* 1 2 3 *
1 2 3 4 5
* * * * *
 */
// for(int i=1;i<=5;i++){
//    if(i==1 || i==5){
//    for(int j=1;j<=5;j++){
//       printf("* ");
//    }
//    }
//    else{                                  
//     for(int j=4;j>=i;j--){                      
//       if(j!=4)                              
//       printf("* ");
//    }
//    for(int j=1;j<=(i-1)*2-1;j++){
//       printf("%d ",j);
//    }
//    for(int j=4;j>=i;j--){                      
//       if(j!=4)                         
//       printf("* ");
//    }
//    }
//    printf("\n");

// }
// }
     
/* 
*******
**---**
*-*-*-* 
*--*--*
 */

for(int i=1;i<=4;i++){
if(i==1){
   for(int j=1;j<=7;j++){
      printf("*");
   }
}
else{
      for(int j=i;j<=i;j++){
         printf("*");
      }
      for(int j=2;j<i;j++){
         printf("-");
      }
      for(int j=i;j<=i;j++){
                        if(j!=4)

         printf("*");
      }
      for(int j=6-i;j>=i;j--){
         printf("-");
      }
      for(int j=i;j<=i;j++){
         printf("*");
      }
      for(int j=2;j<i;j++){
         printf("-");
      }
      for(int j=i;j<=i;j++){

         printf("*");
      }

}
           printf("\n");
}
}




   