#include <stdio.h>
#include <stdlib.h>

int n, i, j, front = -1, rear = -1;

void enque(int a[], int k);
void display(int a[], int k);
void deque(int a[], int k);

void main()
{
  int k;

  printf("enter queue size: \n");
  scanf("%d", &k);

  int queue[k];

  while (1)
  {
    printf("\n--Menu--\n");
    printf("1) Enque\n");
    printf("2) Deque\n");
    printf("3) Display\n");
    printf("4) Exit\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1:
      enque(queue, k);
      break;

    case 2:
      deque(queue, k);
      break;

    case 3:
      display(queue, k);
      break;

    case 4:
      exit(0);
      break;
    }
  }
}

void enque(int a[], int k)
{

  if (rear < k - 1)
  {
    printf("Enter values to enque: \n");
    scanf("%d", &a[(rear + 1)]);
    rear++;
  }
  else if (rear == k - 1)
  {
    printf("QUEUE Overflow!!\n");
  }
}

void deque(int a[], int k)
{
  if (rear > -1)
  {
    printf("Dequed element is : %d\n", a[front + 1]);
    a[front + 1] = "  ";
    front++;
  }
  if (front == rear)
  {
    printf("QUEUE Underflow!!\n");
    rear = -1;
    front = -1;
  }
}

void display(int a[], int k)
{

  printf("Queue is : \n");

  for (i = 0; i < rear + 1; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\n");
}
