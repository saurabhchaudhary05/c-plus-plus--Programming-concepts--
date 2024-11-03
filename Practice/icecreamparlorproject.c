#include <stdio.h>
#include <string.h>

#define MAX_FLAVORS 10

typedef struct flavor
{
  char name[20];
  int stock;
} Flavor;

Flavor flavors[MAX_FLAVORS];
int num_flavors = 0;
int i;

void
add_flavor (char *name, int stock)
{
  if (num_flavors == MAX_FLAVORS)
    {
      printf ("Maximum number of flavors reached.\n");
      return;
    }
  for (i = 0; i < num_flavors; i++)
    {
      if (strcmp (flavors[i].name, name) == 0)
	{
	  printf ("Flavor already exists.\n");
	  return;
	}
    }
  Flavor new_flavor;
  strcpy (new_flavor.name, name);
  new_flavor.stock = stock;
  flavors[num_flavors] = new_flavor;
  num_flavors++;
  printf ("Flavor added successfully.\n");
}

void
remove_flavor (char *name)
{
int j;
  for (i = 0; i < num_flavors; i++)
    {
      if (strcmp (flavors[i].name, name) == 0)
	{
	  for (j = i; j < num_flavors - 1; j++)
	    {
	      flavors[j] = flavors[j + 1];
	    }
	  num_flavors--;
	  printf ("Flavor removed successfully.\n");
	  return;
	}
    }
  printf ("Flavor not found.\n");
}
void save_flavors_to_file()
{
  FILE *f = fopen("flavors.txt", "w");
  if (f == NULL)
  {
    printf("Error saving flavors to file.\n");
    return;
  }
  for (i = 0; i < num_flavors; i++)
  {
    fprintf(f, "%s %d\n", flavors[i].name, flavors[i].stock);
  }
  fclose(f);
  printf("Flavors saved to file successfully.\n");
}


void
update_flavors (char *name, char *updated_name, int updated_stock)
{
  for (i = 0; i < num_flavors; i++)
    {
      if (strcmp (flavors[i].name, name) == 0)
	{
	    strcpy(flavors[i].name,updated_name);
	  flavors[i].stock = updated_stock;
	  printf ("Flavor data updated successfully.\n");
	  return;
	}
    }
}

void
search (char *name)
{
  for (i = 0; i < num_flavors; i++)
    {
      if (strcmp (flavors[i].name, name) == 0)
	{
	  printf ("%s - %d\n", flavors[i].name, flavors[i].stock);
	  return;
	}
    }
  printf ("No data found for this Input");
}

void print_flavors ()
{
  printf ("Flavors available:\n");
  for (i = 0; i < num_flavors; i++)
    {
      printf ("%s - %d\n", flavors[i].name, flavors[i].stock);
    }
}

void load_flavors_from_file(char* filename)
{
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file %s\n", filename);
        return;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char name[20];
        int stock;
        sscanf(line, "%s %d", name, &stock);
        add_flavor(name, stock);
    }
    fclose(file);
}

void update_flavors_in_file(char *name, char *updated_name, int updated_stock)
{
    FILE *fp;
    fp = fopen("flavors.txt", "r");
    FILE *temp;
    temp = fopen("temp.txt", "w");

    char line[100];
    while (fgets(line, 100, fp))
    {
        char flavor_name[20];
        int stock;
        sscanf(line, "%s %d", flavor_name, &stock);
        if (strcmp(flavor_name, name) == 0)
        {
            if (updated_name != NULL)
            {
                fprintf(temp, "%s %d\n", updated_name, updated_stock);
            }
            else
            {
                fprintf(temp, "%s %d\n", name, updated_stock);
            }
        }
        else
        {
            fprintf(temp, "%s %d\n", flavor_name, stock);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("flavors.txt");
    rename("temp.txt", "flavors.txt");
}

void remove_flavor_from_file() {
  char name[20];
  printf("Enter flavor name to remove: ");
  scanf("%s", name);

  FILE *fp;
  FILE *temp_fp;
  fp = fopen("flavors.txt", "r");
  temp_fp = fopen("temp.txt", "w");
  if (fp == NULL || temp_fp == NULL) {
    printf("Error opening file.\n");
    return;
  }

  char buffer[1024];
  int found = 0;
  while (fgets(buffer, 1024, fp)) {
    char *token = strtok(buffer, ",");
    if (strcmp(token, name) == 0) {
      // Found the flavor, skip this line
      found = 1;
      continue;
    }
    fputs(buffer, temp_fp);
  }

  fclose(fp);
  fclose(temp_fp);

  if (!found) {
    printf("Flavor not found.\n");
    remove("temp.txt");
    return;
  }

  // Replace flavors.txt with temp.txt
  remove("flavors.txt");
  rename("temp.txt", "flavors.txt");

  printf("Flavor removed successfully.\n");
}


int
main ()
{
    load_flavors_from_file("flavors.txt");
  int choice, stock;
  char name[20];
  char updated_name[20];
  do
    {
      printf ("\n1. Add flavor\n");
      printf ("2. Remove flavor\n");
      printf ("3. View available flavors\n");
      printf ("4. Update flavors\n");
      printf ("5. Search flavors\n");
      printf ("6. Exit\n");
      printf ("Enter your choice: ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  printf ("Enter flavor name: ");
	  scanf ("%s", name);
	  printf ("Enter stock: ");
	  scanf ("%d", &stock);
	  add_flavor (name, stock);
      save_flavors_to_file("flavors.txt");
	  break;
	case 2:
	  printf ("Enter flavor name: ");
	  scanf ("%s", name);
	  remove_flavor (name);
      remove_flavor_from_file();
	  break;
	case 3:
	  print_flavors ();
	  break;
    case 4:
    printf("Enter flavor name: ");
    scanf("%s", name);
    printf("Enter updated flavor name: ");
    scanf("%s", updated_name);
    printf("Enter updated stock: ");
    scanf("%d", &stock);
    update_flavors(name, updated_name, stock);
    update_flavors_in_file(name, updated_name, stock);
    break;


	  
	case 5:
	  printf ("Enter flavor name: ");
	  scanf ("%s", name);
	  search (name);
	  break;
	case 6:
	  printf ("Exiting...\n");
	  break;
	default:
	  printf ("Invalid choice.\n");
	  break;
	}
    }
  while (choice != 6);
    return 0;
}
