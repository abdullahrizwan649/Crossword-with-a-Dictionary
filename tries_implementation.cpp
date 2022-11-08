#include <iostream>
#define size 26
using namespace std;

class TrieNode
{
    public:
        char data;
        TrieNode *children[size];
        bool isTerminal;

        //constructor
        TrieNode(char ch)
        {
            data = ch;

            for (int i = 0; i < size; i++)
            {
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie_uWu
{
    public:
        TrieNode *root;
        Trie_uWu()
        {
            root = new TrieNode('\0');
        }

    void insertuWu(TrieNode *root, string input)
    {
        //base case
        if(input.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        //We assume that the words will not be capital//
        int index_uwu = input[0] - 'a';

        //To traverse through the trie and insert nodes after the root//
        TrieNode *child_uWu = NULL;

        //If the character is present//
        if(root->children[index_uwu] != NULL)
        {
            child_uWu = root->children[index_uwu];
        }

        //else if the character isn't present//
        else
        {
            child_uWu = new TrieNode (input[0]);
            root->children[index_uwu] = child_uWu;
        }
        
        /*
        Recursively calling the function.
        
        The function parameterises the child node
        and the next character of the input string
        */
        insertuWu(child_uWu,input.substr(1));


    }

    void insertWord_uWu(string input)
    {
        insertuWu(root,input);
        cout<<"\nWord inserted\n";
    }
};

int main()
{
    Trie_uWu *t1 = new Trie_uWu();

    t1->insertWord_uWu("firstcommit");
    
    return 0;
}