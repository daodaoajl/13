#include <stdio.h>
#include <stdlib.h>

//���� ���� 
struct student
{
    int       ID;// �й� 
    char      name[10];//�̸� 
    double    score;//���� 
};

int main(void)
{
   //instance ���� 
  struct student s1 = {123, "JINA", 4.3}; 
  
  // �ٸ� �� ����
  s1.ID = 123456;
  s1.name[0] = 'c';
  s1.score = 0.7;
  
  // ��� 
  printf("ID : %i\n", s1.ID);
  printf("name : %s\n", s1.name);
  printf("score : %f\n", s1.score);
  
  strcpy(s1.name, "Juyeop");
  printf("name2 : %s\n");
  
  system("PAUSE");	
  return 0;
}
