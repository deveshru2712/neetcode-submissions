class MyHashSet {
   public:
    int n = 1000000;
    vector<int> storage;
    MyHashSet() {  storage.resize(n + 1, 0); }

    void add(int key) { storage[key] = 1; }

    void remove(int key) { storage[key] = 0; }

    bool contains(int key) { return storage[key]; }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */