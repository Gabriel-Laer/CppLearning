#include <iostream>
#include <list>
#include <cstring>


class HashTable{
    private:
        static const int  hashGroups = 10;
        std::list<std::pair<int, std::string>> table[hashGroups];
    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, std::string value);
        void removeItem(int key);
        std::string searchTable(int key);
        void printTable();
};


int main(){
    HashTable HT;

    if(HT.isEmpty()){
        std::cout << "Good Job" << std::endl;
    }else{
        std::cout << "Fails" << std::endl;
    }

    HT.insertItem(888, "Pedro");
    HT.insertItem(999, "Raphael");
    HT.insertItem(997, "phael");
    HT.insertItem(996, "hael");
    HT.insertItem(995, "el");
    
    HT.printTable();

    HT.removeItem(999);
    HT.removeItem(9999);
    HT.printTable();
    return 0;
}

bool HashTable::isEmpty() const{
    int sum{};
    for (size_t i = 0; i < hashGroups; i++){
        sum += table[i].size();
    }
    if(sum == 0){
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key){
    return key % hashGroups;
}

void HashTable::insertItem(int key, std::string value){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;

    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr->second = value;
            std::cout << "[WARNING] Key Exists, value replaced\n";
            break;
        }
    }

    if(keyExists == false){
        cell.emplace_back(key, value);
    }
    return;
}

void HashTable::removeItem(int key){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;

    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr = cell.erase(bItr);
            std::cout << "[INFO] Key Exists, item removed\n";
            break;
        }
    }

    if(keyExists == false){
        std::cout << "[WARNING] item not found!\n";
    }

    return;
}

void HashTable::printTable(){
    for(int i = 0; i < hashGroups; i++){
        if(table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for(; bItr != table[i].end(); bItr++){
            std::cout << "[INFO] Key: " << bItr->first << " Value: " << bItr->second << std::endl;
        }
    }

    return;
}