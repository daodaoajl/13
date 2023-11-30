#include <stdio.h>
#include <stdlib.h>

//형식 선언 
struct student
{
    int       ID;// 학번 
    char      name[10];//이름 
    double    score;//학점 
};

int main(void)
{
   //instance 선언 
  struct student s1 = {123, "JINA", 4.3}; 
  
  // 다른 값 변경
  s1.ID = 123456;
  s1.name[0] = 'c';
  s1.score = 0.7;
  
  // 출력 
  printf("ID : %i\n", s1.ID);
  printf("name : %s\n", s1.name);
  printf("score : %f\n", s1.score);
  
  strcpy(s1.name, "Juyeop");
  printf("name2 : %s\n");
  
  system("PAUSE");	
  return 0;
}
