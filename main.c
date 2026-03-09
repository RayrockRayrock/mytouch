#include <stdio.h>








int main(int argc, char ** argv)
{

  if (argc > 1)
  {
    for (int i = 0 ; i < argc - 1; i++)
    {
        FILE * a = fopen(*(argv + i + 1),"a");
        if (a == NULL)
        {
          perror("failed to create");
          return 1;
        }


        printf("%s was created\n", argv[i + 1]);


    }
  }
  else 
    printf("%s need more agrument\n", argv[0]);



  return 0;
}
