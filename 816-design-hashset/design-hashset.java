class MyHashSet {
    //HashSet<Integer> set = new HashSet<>();
    boolean present[] = new boolean[1000000];

    public MyHashSet() {
        
    }
    
    public void add(int key) {
        present[key] = true;
        
    }
    
    public void remove(int key) {
        present[key] = false;
        
    }
    
    public boolean contains(int key) {
        return present[key];
        
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */