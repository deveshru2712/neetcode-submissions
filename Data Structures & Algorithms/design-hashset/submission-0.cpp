class MyHashSet {
   public:
    vector<bool> arr;

    MyHashSet() {
        int x = 1000001;
        arr = vector<bool>(x, false);
    }

    void add(int key) { arr[key] = true; }

    void remove(int key) { arr[key] = false; }

    bool contains(int key) { return arr[key]; }
};