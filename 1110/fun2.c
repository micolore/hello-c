#include <stdio.h>
#include <string.h>

struct  books{
  char title[30];
  char author[50];
  int id;

};

  void printBook(struct books book);


  int  main(){
    struct books b1;
    struct books b2;

    strcpy(b1.title,"c");
    strcpy(b1.author,"lee");
    b1.id = 1;

    strcpy(b2.title,"java");
    strcpy(b2.author,"gao");
    b2.id = 2;

    printf("b1 title: %s,author: %s,id: %d\n",b1.title,b1.author,b1.id);

    printBook(b1);
    printBook(b2);

    return 0;
  }

  void printBook(struct books book){

    printf("title: %s\n",book.title);
    printf("author: %s\n",book.author);
    printf("id: %d\n",book.id);
 }
