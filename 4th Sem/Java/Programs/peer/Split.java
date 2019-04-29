class Split {
    public static void main(String[] args) {
         String str1 = "santhosh will vote on 18th april 2019";
       for (String word : str1.split(" "))
       {
          System.out.println(word);
       }
       System.out.println(str1+".");
    }
}
