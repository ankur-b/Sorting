class Sorting{
    void Sort(int a[]){
        for (int i=0;i<a.length;i++){
            for(int j=0;j<a.length-1;j++){
                if(a[j]>a[j+1]){
                    int temp;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void Sort(char b[]){
         for (int i=0;i<b.length;i++){
            for(int j=0;j<b.length-1;j++){
                if(b[j]>b[j+1]){
                    char temp;
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }
    }
    void Sort(String str[]){ 
        for (int i=0;i<str.length;i++){
            for(int j=0;j<str.length-1;j++){
                if((str[j]).compareTo(str[j+1])>0){
                    String temp;
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        } for(int i=0;i<str.length;i++) System.out.println(str[i]);
    }
    void print(int a[]){
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]);
        }
    }
    void print(char a[]){
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]);
        }
    }
    void Ssort(int a[]){
        for (int i = 0; i < a.length - 1; i++){
            int index = i;
            for (int j = i + 1; j < a.length; j++)
                if (a[j] < a[index]) index = j;
            int smallerNumber = a[index];  
            a[index] = a[i];
            a[i] = smallerNumber;
        }
        for(int i=0;i<a.length;i++) System.out.println(a[i]);
        
    }
    void Ssort(char a[]){
        for (int i = 0; i < a.length - 1; i++){
            int index = i;
            for (int j = i + 1; j < a.length; j++)
                if (a[j] < a[index]) index = j;
            char smallerNumber = a[index];  
            a[index] = a[i];
            a[i] = smallerNumber;
        }
        for(int i=0;i<a.length;i++) System.out.println(a[i]);
        
    }
    void Ssort(String a[]){
        for (int i = 0; i < a.length - 1; i++){
            int index = i;
            for (int j = i + 1; j < a.length; j++)
                if (a[j].compareTo(a[index])<0) index = j;
            String smallerNumber = a[index];  
            a[index] = a[i];
            a[i] = smallerNumber;
        }
        for(int i=0;i<a.length;i++) System.out.println(a[i]);
    }
}
public class Sort {
    public static void main(String args[]){
        Sorting s=new Sorting();
        String[] sample={"usha","avani","sameer","aparna"};
        int num[]={4,8,1,0,2};
        char chr[]={'f','a','e','t','q'};
        s.Sort(num);
        s.Sort(chr);
        System.out.println("sorting character array using bubble sort");
        s.print(chr);
        System.out.println("sorting numbers using bubble sort");
        s.print(num);
        System.out.println("sorting string array using bubble sort");
        s.Sort(sample);
        System.out.println("sorting number using selection sort");
        s.Ssort(num);
        System.out.println("sorting characters using selection sort");
        s.Ssort(chr);
        System.out.println("sorting string using selection sort");
        s.Ssort(sample);
    }
}
