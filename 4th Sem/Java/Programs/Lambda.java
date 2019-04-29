interface Fact {
    int factorial (int num);
}

class Lambda {
    public static void main(String[] args) {
        Fact obj = (int num) -> {
            int k = 1;
            for(int i = 1; i<= num; i++) {
                k = k * i;

            }
        };      
        return obj.Fact(5);  
    }
}