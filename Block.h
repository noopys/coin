#ifndef BLOCK_H
#define BLOCK_H
#include <string>

struct transaction{

};

class Block{
    public:
    protected:
    private:
        //These types might change just serving as an outline right now
        //This is the SHA-256 hash of the block meaning all the data of the block is fed into SHA-256 and out comes a hash stored here
        std::string blockHash;
        //This hash points to the block before this one making the "blockchain"
        std::string prevHash;
        //This is temporary the transaction struct just represents a data structure we will have to create to store transaction data I'm just not sure how to 
        //implement that yet
        transaction transactionList;
        //This is the blocks index in the chain (ex. 1st block has index 0 2nd has index 1 etc.)
        int index;
        //This will just be the date and time that the block was created
        std::string timestamp;
        //this will be the function that feeds the blocks data into SHA-256 and gets out the hash for blockHash
        std::string hashBlock();
};


#endif