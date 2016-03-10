class passArray{
  public static void printArray(int[] array){
    for(int i = 0; i< array.length; i++)
        System.out.println(i + " ");
  }

  public static void main(String[] args){
    printArray(new int[]{3, 1, 2, 4, 5});
  }
}
