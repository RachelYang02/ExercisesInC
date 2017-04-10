/*
Author: Rachel Yang

Count and print frequency of words in "A Modest Proposal" using GLib.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <glib.h>

void print_helper(gpointer k,gpointer v,gpointer d) {
  printf(d,k,GPOINTER_TO_INT(v));
}

int main(int argc, char** argv) {
  // Read from text file "A Modest Proposal"
  GHashTable* table = g_hash_table_new(g_str_hash,g_str_equal);
  FILE* file = fopen("a_modest_proposal.txt","r");
  char buff[256];

  // Count word frequency
  while(fscanf(file,"%s",buff) != EOF) {
    char* key = strdup(buff);

    // If the word has appeared before, increase count in table by 1
    if (g_hash_table_contains(table,key)) {
      int freq = GPOINTER_TO_INT(g_hash_table_lookup(table,key));
      g_hash_table_replace(table,key,GINT_TO_POINTER(freq+1));
    }
    // Else insert that word into the table / set count to 1
    else {
      g_hash_table_insert(table,key,GINT_TO_POINTER(1));
    }
  }

  // Print
  g_hash_table_foreach(table,(GHFunc) print_helper, "%s: %d \n");
}
