#ifndef TRIE_H
#define TRIE_H

#include <memory>
#include <vector>
#include <string>
#include <map>

#include "trie_node.h"


namespace ads {
  
  class trie {

    public:

      /* Constructs an Empty Trie */
      trie();

      /* Takes in a vector of strings, and constructs a Trie. */
      trie(std::vector<std::string> dictionary);

      /* Initialiser-List Constructor */
      trie(std::initializer_list<std::string> dictionary);

      /* Copy Constructor */
      trie(const trie& copy);

      /* Assignment Operator */
      trie& operator=(trie rhs);

      /* Queries the Trie to see if a string exists. */
      bool find(std::string query);

      /* Queries the Trie to see if a prefix of a string exists. */
      bool has_prefix(std::string prefix);

      /* Inserts a word into the Trie. */
      void insert(std::string word);

    private:
    
      /* Contains all the words in the dictionary starting from their first character. */
      std::map<char, std::unique_ptr<trie_node>> dictionary;

      /* Helper for safely returning the tail of a string. */
      std::string getTail(std::string word);

  };

} // ads

#endif