// import java.util.Arrays;

// class ArraysCopy {
//    public static void main(String[] args) {
      
//       int [] source = {1, 2, 3, 4, 5, 6};
//       int [] destination = new int[6];


//       for (int i = 0; i < source.length; ++i) {
//          destination[i] = source[i];
//          source[0] = -1;
//       }
      
//       // converting array to string
//       System.out.println(Arrays.toString(destination));
//   }
// }

class ArraysCopy {
    public static void main(String[] args) {                 
        int [] numbers = {1, 2, 3, 4, 5, 6};        
        int [] positiveNumbers = numbers;    // copying arrays         
    
    for (int number: positiveNumbers) {     
        numbers[0] = -1;       
    System.out.print(number + ", ");         }   
      } 
    }