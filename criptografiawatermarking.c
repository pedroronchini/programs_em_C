#include <stdio.h>
#include <stdlib.h>

main()
{
   FILE *imagemOriginal, *imagemCopia;
   unsigned char byte;
   int  contadorBytes=0;
   char marcaDAgua[4]="AED";

   imagemOriginal = fopen("fotomanu.jpg","rb");
   imagemCopia = fopen("fotocript.jpg","wb");

   if(imagemOriginal == NULL || imagemCopia == NULL)
   {
      printf("\nArquivo JPG nao pode ser aberto...");
      getchar();
      exit(1);
   }

   printf("ALGORITMO DE CRIPTOGRAFIA\n\n");
   printf("Criptografando a imagem...\n");
   while (!feof(imagemOriginal))
   {
         if (!feof(imagemOriginal))
         {
             fread(&byte, sizeof(unsigned char), 1, imagemOriginal);
             contadorBytes++;
             fwrite(&byte, sizeof(unsigned char), 1, imagemCopia);
             if (contadorBytes == 256)
                 fwrite(&marcaDAgua, sizeof(char),3,imagemCopia);
         }
   }
   fclose(imagemOriginal);
   fclose(imagemCopia);
   printf("Imagem criptografada com sucesso...\n\n");
   getchar();

   printf("DEScriptografando a imagem...\n");
   imagemOriginal = fopen("fotocript.jpg","rb");
   imagemCopia = fopen("fotonovamanu.jpg","wb");

   if(imagemOriginal == NULL || imagemCopia == NULL)
   {
      printf("\nArquivo JPG nao pode ser aberto...");
      getchar();
      exit(1);
   }
   contadorBytes = 0;
   while (!feof(imagemOriginal))
   {
         if (!feof(imagemOriginal))
         {
             fread(&byte, sizeof(unsigned char), 1, imagemOriginal);
             contadorBytes++;
             if (contadorBytes > 256 && contadorBytes <= 259)
                 continue;
             fwrite(&byte, sizeof(unsigned char), 1, imagemCopia);
         }
   }
   fclose(imagemOriginal);
   fclose(imagemCopia);
   printf("Imagem DEScriptografada com sucesso...\n\n");

   printf("Terminando...\n\n");
   getchar();
}

