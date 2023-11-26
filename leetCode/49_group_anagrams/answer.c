// #include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define CAPACITY 1000000
int strComLen(char *str1, char *str2, int len) {
  for (int i = 0; (i < len); i++) {
    if (!((*(str1 + i) - *(str2 + i)) == 0)) {
      return 1;
    }
  }
  return 0;
}
struct node {
  char *key;
  char *value;
  int columnSize;
  struct node *next;
};
typedef struct node node;
struct hashMap {
  int capacity;
  int numberOfElements;
  node **arr;
};
typedef struct hashMap hashmap;
void increaseSize(hashmap *, int *);
void printStrArr(char ***strArr, int rows, int *columns) {
  printf("Printing Array:\n");
  fflush(stdout);
  printf("Rows: %d\n", rows);
  for (int i = 0; i < rows; i++) {
    char **currentColumn = strArr[i];
    printf("%d:", i);
    for (int j = 0; j < *(columns + i); j++) {
      printf("%s\t", currentColumn[j]);
    }
    printf("\n");
  }
}
int comparator(const void *p, const void *q) { return *(char *)p - *(char *)q; }

int hash(int capacity, char *key, int keyLen) {
  // printf("Creating hash for:%s ", key);
  // int keyLen = strlen(key);
  unsigned long int keyInt = 5381;
  for (int i = 0; i < keyLen; i++) {
    // printf("Current Hash: %ld", keyInt);
    // keyInt = ((keyInt * 26) + (*keyCopy - 'a'));
    // keyInt = (keyInt * 31 + (*key));
    keyInt = ((keyInt << 5) + keyInt) + *key;
    key++;
  }
  // keyInt *= 0.34567;
  keyInt += keyLen;
  // keyInt += keyLen;
  // printf(": %ld  ", keyInt);
  keyInt %= capacity;
  // printf(":%ld\n", keyInt);
  return keyInt;
};
void insert(hashmap *hm, char *key, char *value, int keyLen, int *collisions) {
  // printf("inserting new node: %s\n", key);
  fflush(stdout);
  int index = hash(hm->capacity, key, keyLen);

  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL) {
    printf("Malloc returned Null\n");
  }
  newNode->key = key;
  newNode->value = value;
  if (hm->arr[index] == NULL) {
    hm->numberOfElements++;
    newNode->columnSize = 1;
    newNode->next = NULL;
    hm->arr[index] = newNode;
  } else {
    // Handling Collisions
    // printf("Collision: %s %s\n", hm->arr[index]->key, newNode->key);

    if (strComLen(hm->arr[index]->key, newNode->key, keyLen)) {
      // printf("Collision: ");
      // Handling Different Key Collisions
      *collisions += 1;
      index++;
      if (index >= hm->capacity)
        index = 0;
      // Until a new index with Empty Space
      // Or a node with same key is not found
      // Keep increasing the index
      while (hm->arr[index] != NULL &&
             strComLen(hm->arr[index]->key, newNode->key, keyLen)) {
        index++;
        if (index >= hm->capacity)
          index = 0;
      }
      if (hm->arr[index] == NULL) {
        hm->numberOfElements++;
        newNode->columnSize = 1;
        newNode->next = NULL;
        hm->arr[index] = newNode;
      } else {
        hm->arr[index]->columnSize++;
        newNode->columnSize = hm->arr[index]->columnSize;
        newNode->next = hm->arr[index];
        hm->arr[index] = newNode;
      }
      // while (strComLen(hm->arr[index]->key, newNode->key, keyLen)) {
      //   index *= 2;
      //   if (index >= hm->capacity)
      //     index = 0;
      // }

    } else {
      // Handling Same Key Collisions
      hm->arr[index]->columnSize++;

      newNode->columnSize = hm->arr[index]->columnSize;

      // printf("Current Column Size: %d %d\n", hm->arr[index]->columnSize,
      //        newNode->columnSize);
      newNode->next = hm->arr[index];
      hm->arr[index] = newNode;
    }
  }
}
void increaseSize(hashmap *hm, int *collisions) {
  printf("Increasing size\n");
  fflush(stdout);
  node **tempArr = (node **)malloc(sizeof(node *) * hm->capacity);
  for (int i = 0; i < hm->capacity; i++) {
    tempArr[i] = hm->arr[i];
  }
  hm->capacity *= 2;
  hm->arr = (node **)malloc(sizeof(node *) * hm->capacity);
  for (int i = 0; i < hm->capacity * 2; i++) {
    hm->arr[i] = NULL;
  }
  hm->numberOfElements = 0;
  for (int i = 0; i < hm->capacity; i++) {
    node *currentNode = tempArr[i];
    while (currentNode != NULL) {
      char *key = currentNode->key;
      char *value = currentNode->value;
      insert(hm, key, value, strlen(value), collisions);
      currentNode = currentNode->next;
    }
  }
  free(tempArr);
}

char ***groupAnagrams(char **strs, int strsSize, int *returnSize,
                      int **returnColumnSizes) {

  // initializing Hashmap
  printf("Hashmap with Max %d Elements\n", strsSize);
  hashmap *mp = (hashmap *)malloc(sizeof(hashmap));
  mp->capacity = 100000;
  mp->numberOfElements = 0;
  mp->arr = (node **)malloc(sizeof(node *) * mp->capacity);
  for (int i = 0; i < mp->capacity; i++) {
    mp->arr[i] = NULL;
  }
  *returnSize = 0;
  int collisions = 0;
  // Inserting all the elements from Strs into hashmp
  char **el = strs;
  for (int i = 0; i < strsSize; i++) {
    int keyLen = strlen(strs[i]);
    char *keyCopy = (char *)malloc(sizeof(char) * keyLen);
    char *key = strdup(strs[i]);
    fflush(stdout);
    while (*key != '\0') {
      *keyCopy = *key;
      keyCopy++;
      key++;
    }
    keyCopy -= keyLen;
    qsort((void *)keyCopy, keyLen, sizeof(char), comparator);
    insert(mp, keyCopy, strs[i], keyLen, &collisions);
    if (mp->numberOfElements == mp->capacity) {
      increaseSize(mp, &collisions);
    }
  }
  *returnSize = mp->numberOfElements;

  printf("\nDifferent Key Collisions: %d\n\n\n", collisions);

  // printf("Return Size: %d\n", *returnSize);
  // fflush(stdout);

  // Allocating Memory to return data
  char ***returnArr = (char ***)malloc(sizeof(char **) * mp->numberOfElements);
  *returnColumnSizes = (int *)malloc(sizeof(int) * mp->numberOfElements);

  int currentStrArrIndex = 0;
  // Iterating through all the elements of the hashmap
  for (int i = 0; i < mp->capacity; i++) {
    node *currentNode = mp->arr[i];
    if (currentNode != NULL) {

      int columnSize = currentNode->columnSize;

      // printf("Creating a String Array of length: %d\n",
      //  currentNode->columnSize);

      // char **strArr = (char **)malloc(sizeof(char *) * columnSize);

      returnArr[currentStrArrIndex] =
          (char **)malloc(sizeof(char *) * columnSize);
      *(*returnColumnSizes + currentStrArrIndex) = 0;
      int innerArrIndex = 0;
      while (currentNode != NULL) {
        char *value = currentNode->value;
        returnArr[currentStrArrIndex][innerArrIndex] =
            (char *)malloc(sizeof(char) * (strlen(value) + 1));
        // printf("Adding %s to returnArr. Position: %d/%d   %d/%d\n", value,
        //        currentStrArrIndex, mp->numberOfElements, innerArrIndex,
        //        columnSize);
        // returnArr[currentStrArrIndex][innerArrIndex++] = value;
        // strcpy(returnArr[currentStrArrIndex][innerArrIndex++], value);
        returnArr[currentStrArrIndex][innerArrIndex++] = strdup(value);
        currentNode = currentNode->next;
        *(*returnColumnSizes + currentStrArrIndex) += 1;
      }
      currentStrArrIndex++;
    }
  }
  return returnArr;
}

int main() {
  // char strArr[3][3] = {"abc", "bac", "aad"};
  int strSize = 52;
  char **strArr = (char **)malloc(sizeof(char *) * strSize);

  // Test Case 1

  strArr[0] = "abc";
  strArr[1] = "single";
  strArr[2] = "airline";
  strArr[3] = "dac";
  strArr[4] = "cad";
  strArr[5] = "sab";
  strArr[6] = "bas";
  strArr[7] = "eat";
  strArr[8] = "tea";
  strArr[9] = "ate";
  strArr[10] = "tan";
  strArr[11] = "nat";
  strArr[12] = "atn";
  strArr[13] = "cat";
  strArr[14] = "atc";
  strArr[15] = "bbdd";
  strArr[16] = "ac";
  strArr[17] = "zazzz";
  strArr[18] = "hhhhu";
  strArr[19] = "untwists";
  strArr[20] = "snobbish";
  strArr[21] = "dissolved";
  strArr[22] = "stiflings";
  strArr[23] = "mythology";
  strArr[24] = "cab";
  strArr[25] = "teletypes";
  strArr[26] = "asseverates";
  strArr[27] = "meeter";
  strArr[28] = "iceberg";
  strArr[29] = "mexican";
  strArr[30] = "end";
  strArr[31] = "wale";
  strArr[32] = "veronese";
  strArr[33] = "ida";
  strArr[34] = "earshot";
  strArr[35] = "tunnels";
  strArr[36] = "debuting";
  strArr[37] = "consciousness";
  strArr[38] = "roguery";
  strArr[39] = "beefburger";
  strArr[40] = "amounted";
  strArr[41] = "pheasants";
  strArr[42] = "archdioceses";
  strArr[43] = "vote";
  strArr[44] = "gujarati";
  strArr[45] = "forwards";
  strArr[46] = "waggling";
  strArr[47] = "tanned";
  strArr[48] = "volley";
  strArr[49] = "improves";
  strArr[50] = "misread";
  strArr[51] = "admires";
  // Test Case 2

  // strArr[0]="hhhhu";
  // strArr[1]="tttti";
  // strArr[2]="tttit";
  // strArr[3]="hhhuh";
  // strArr[4]="hhuhh";
  // strArr[5]="tittt";

  // Test Case 3

  // strArr[0] = "";
  // strArr[1] = "b";
  int size;
  // int **columnSize = (int **)malloc(sizeof(int *) * 100);
  // int columnSize[strSize];
  int *columnSize;
  groupAnagrams(strArr, strSize, &size, &columnSize);
  return 0;
}