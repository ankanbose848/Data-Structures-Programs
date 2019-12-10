#include <stdio.h>
#include <stdlib.h>

int array[100];
int element,size,pos;
void Create()
{
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
}
void Display()
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}

void Insert()
{
    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    for(int i = size-1; i>=pos; i--)
    {
        array[i+1] = array[i];
    }
    array[pos] = element;
    size++;
}

void Delete()
{
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    for(int i = pos; i<size-1; i++)
    {
        array[i] = array[i+1];
    }
    size--;
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n*** Array ***\n");
        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                Create();
                break;
            case 2:
                Insert();
                break;
            case 3:
                Delete();
                break;
            case 4:
                Display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
