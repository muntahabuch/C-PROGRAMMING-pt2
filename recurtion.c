# include <stdio.h>


int sum(int a);
int main(){
int result= sum(10);

    printf("%d",result);
}
int sum (int a){
      if(a>0)
        {
             return a+sum(a-1);
        }
        else("");
      }
